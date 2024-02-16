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
        for(unsigned j{};j<100;++j){
            do_something(i); 
        }
    }
};

void oops(){
    int some_local_state=0;
    func my_func(some_local_state);
    std::thread my_thread(my_func);
    my_thread.join(); //wait until the my_thread finished
}
int main(){

oops();

}