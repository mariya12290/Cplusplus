#include <iostream>
#include <map>
int main(){

    std::map<int, std::string>m{{1,"suri"},{2,"kumar"}};

std::cout<<m[1]<<" "<<m[2]<<std::endl;
    return 0;
}