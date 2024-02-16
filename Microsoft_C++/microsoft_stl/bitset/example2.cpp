#include <iostream>
//Container
#include <vector>
#include <string>
#include  <vector>
#include <list>
#include <forward_list>
#include  <map>
#include <set>
#include <list>
#include <array>
#include <stack>
#include <deque>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <tuple>

//others
#include <algorithm>
#include  <numeric>
#include <functional>
#include <memory>
#include <utility>
#include <new>
#include <iterator>
#include <exception>
#include <bitset>
//C
#include <cmath>
//I/O
#include  <fstream>
#include <iomanip>
#include  <sstream>



int main(){

std::bitset<8>b{};

std::cout<<b[0]<<std::endl;

std:: string binary = std::bitset<4>(1).to_string();
std::cout<<binary<<std::endl;

if(b.all()){
    std::cout<<"all the bits set to  1"<<std::endl;
}else{
    std::cout<<"all the bits set to 0"<<std::endl;
}

auto b1 = std::bitset<10>(12345);
std::cout<<b1<<std::endl;

auto i = b1.count();

std::cout<<i<<std::endl;

b1.flip();
std::cout<<b1<<std::endl;
 auto b2 = b1.flip(0);
std::cout<<b1<<std::endl;
std::cout<<b2<<std::endl;
if(b1!=b2){
    std::cout<<"b1 andb2 are not equal "<<std::endl;
}else{
    std::cout<<"b1 andb2 are equal "<<std::endl;
}


auto b3 = b1 & b2;


std::cout<<b3<<std::endl;
b3.flip(0);
b3 &=b1;
std::cout<<b3<<std::endl;

auto b4 = b3<<3;
std::cout<<b4<<std::endl;
auto deci = b4.to_ulong();

std::cout<<deci<<std::endl;

b4 >>=2; //bitwise shift assignment operator

std::cout<<b4<<std::endl;

b4 <<=2;

std::cout<<b4<<std::endl;
//bitwise Xor
std::cout<<"bitwise Xor "<<std::endl;
std::cout<<b4 <<"\n";

std::cout<<b3<<"\n";
auto b5 = b4 ^= b3;// b4 ^=b3
std::cout<<b5<<std::endl;

//bitwise Xor
std::cout<<"bitwise and "<<std::endl;
std::cout<<b4 <<"\n";

std::cout<<b3<<"\n";
auto b6 = b4 & b3; // b4 &b3
std::cout<<b5<<std::endl;

//bitwise Xor
std::cout<<"bitwise or "<<std::endl;
std::cout<<b4 <<"\n";

std::cout<<b3<<"\n";
auto b7 = b4 | b3;  //b4 |b3
std::cout<<b5<<std::endl;

//bitwise invert
auto b8 = ~b7; 

std::cout<<b8<<std::endl;

std::cout<<typeid(b8.to_string()).name()<<std::endl;

    return 0;
}