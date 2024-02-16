#include <iostream>
#include <thread>
#include <vector>

struct Counter{
    int value{};
    Counter():value{0}{

    }
    void increment(){
        ++value;
    }
};

int main(){

    Counter counter;
    std::vector<std::thread>threads;

    for(int i=0 ;i<5;++i){
        threads.push_back(std::thread([&counter]))(){

        }
    }
}