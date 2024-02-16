#include <iostream>
#include <thread>


void some_function(int i){
    std::cout<<"some function "<<std::endl;
}
void some_other_function(){
    std::cout<<"some other function "<<std::endl;
}

std::thread f(){
    return std::thread(some_other_function);
}

void some_other_function(){

    std::cout<<"some other function "<<std::endl;
}

std::thread g(){

    std::thread t(some_function, 42);
    return t;
}

int main(){



    return 0;
}