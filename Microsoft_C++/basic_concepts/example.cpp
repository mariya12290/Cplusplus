#include <iostream>
#include <string>


using str = std::string; //typealias
typedef std::string st; //typealias
void print(const int & i){

    std::cout<<i<<std::endl;

}

int main(){

    print(1);
str s{"suri"};
std::cout<<s<<std::endl;
st s1{"kumar"};
std::cout<<s1<<std::endl;

return 0;
}