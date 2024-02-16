#include <iostream>
#include <thread>


void threadFunction(){
    std::cout<<"Hello from thread 1"<<std::endl;
}

int main(){
    std::thread thread1(threadFunction);

    std::cout<<"Hello from main thread "<<std::endl;
    thread1.join();
}
// g++ -o thread thread.o -pthread