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
            do_something(i); //potential access to dangling reference
        }
    }
};


void f(){
    int some_local_state=0;
    func my_func(some_local_state);
    std::thread my_thread(my_func);
    try{
        std::cout<<"f thread is waiting for my_thread "<<std::endl;
    }catch(...){
        my_thread.join();
        throw;
    }
    my_thread.join();
      std::cout<<"f thread is finished"<<std::endl;
}
int main(){

f();

}