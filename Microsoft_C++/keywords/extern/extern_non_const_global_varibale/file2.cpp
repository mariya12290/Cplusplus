#include <iostream>
#include "file1.cpp"

extern int i; //declaration only, same i as in file1.cpp



int main(){

    std::cout<<i<<std::endl;
}