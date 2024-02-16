#include <iostream>
#include <thread>


void do_something(int& i){
    std::cout<<i<<std::endl;
    ++i;
}
struct func{
    int& i;
    func(int& i_):i{i_}{

    }
    void operator()(){
        for(unsigned j{};j<10000;++j){
            do_something(i); //potential access to dangling reference
        }
    }
};

void oops(){
    int some_local_state=0;
    func my_func(some_local_state);
    std::thread my_thread(my_func);
    my_thread.detach(); //do not wait for thread to finish  // so new thread will be running still after oops threads exists
}
int main(){

oops();

}