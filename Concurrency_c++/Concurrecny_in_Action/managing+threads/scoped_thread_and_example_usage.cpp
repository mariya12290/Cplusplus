#include <iostream>
#include <thread>

class scoped_thread{
    private:
    std::thread t;
    public:
    explicit scoped_thread(std::thread t_):t{std::move(t_)}{

    }
    ~scoped_thread(){
        t.join();
    }
    scoped_thread(scoped_thread const &)=delete;
    scoped_thread& operator=(scoped_thread const &)=delete;
};

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

int main(){

int some_local_state;
scoped_thread t(std::thread(func(some_local_state)));

std::cout<<"in main thread "<<std::endl;


    return 0;
}