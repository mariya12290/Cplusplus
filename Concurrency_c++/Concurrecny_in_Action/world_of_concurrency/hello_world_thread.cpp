#include <iostream>
#include <thread>

void hello(){
    std::cout<<"Hello COncurrent World "<<std::endl;
}
int main(){
    std::thread t(hello);
    t.join();
    
}