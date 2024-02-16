#include <iostream>

using counter = long;

typedef long counter1;

int main(){

    counter1 i{1000000000};
    std::cout<<typeid(i).name()<<std::endl;
}