#include  <iostream>
#include <memory>


int main(){

int count{10};
int&  countRef = count;

int *countPtr = &countRef;

auto countAuto = countRef; //

std::cout<<count<<std::endl;

countRef = 100;
std::cout<<count<<std::endl;
std::cout<<countAuto<<std::endl; 
std::cout<<*countPtr<<std::endl;

    return 0;
}