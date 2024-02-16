#include  <iostream>
#include <memory>
#include <string>


void myStrCpy(char *Dest, char *Source){

    while(*Dest++ = *Source++){
        ;
    }
}

int main(){

char *source = new char[4]{'a','b','c','d'};

char *dest = new char[4]{};

myStrCpy(dest, source);

for(int i{0};i<4;++i){
    std::cout<<*dest++<<" ";
}std::cout<<std::endl;
    return 0;
}