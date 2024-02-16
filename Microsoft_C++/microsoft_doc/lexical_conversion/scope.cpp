#include  <iostream>
#include <memory>

int i{100};

int main(){
int i{1000};

std::cout<<i<<std::endl;
//accessing the global varibale
std::cout<<::i<<std::endl;

    return 0;
}