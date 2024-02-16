#include <iostream>

int main(){

    int *pint{};
    if(pint && ((*pint) = nullptr)){
        std::cout<<"pint pointing to null pointer"<<std::endl;
    }
}