#include <iostream>
#include <string>


void print(int *i){

    std::cout<<*i<<std::endl;
    *i = 200;
}


void Assign(){
    int a=3, b= 6, c=10, d=0xAAAA, e=0x5555;
    std::cout<<(a+=b)<<std::endl;
       std::cout<<(b%=a)<<std::endl;
          std::cout<<(c>>=1)<<std::endl;
             std::cout<<(d|=e)<<std::endl;
}
int main(){
 
 short IntArray[10]; 
 short *pIntArray = IntArray;
IntArray[0] =10;
 std::cout<<*pIntArray<<std::endl;
for(int i{0};i<10;++i){
    *pIntArray = i;
    std::cout<<*pIntArray<<std::endl;
    pIntArray = pIntArray+1; //use pIntArray++ always
    std::cout<<IntArray[i]<<std::endl;
}

int i{100};
int &refi {i};
print(&i);
print(&refi);
    return 0;
}