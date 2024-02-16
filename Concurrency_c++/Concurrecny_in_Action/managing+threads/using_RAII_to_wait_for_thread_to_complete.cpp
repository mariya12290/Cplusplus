#include <iostream>
#include <thread>

//forward declaration
struct func;
void do_something(int&);
void f();

class thread_guard{
    std::thread& t;
    public:
    explicit thread_guard(std::thread& t_):t{t_}{

    }
    ~thread_guard(){
        if(t.joinable()){
            t.join();
        }
    }
    thread_guard(thread_guard const&)=delete;
    thread_guard& operator=(thread_guard const&)=delete;
};


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

void do_something(int& i){
    std::cout<<i<<std::endl;
    ++i;
}

void f(){
    int some_local_state=0;
    func my_func(some_local_state);
    std::thread t(my_func);
    thread_guard g(t);

    std::cout<<"f thread is waiting to be finished "<<std::endl;
}

int main(){

f();
    return 0;
}