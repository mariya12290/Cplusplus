#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <utility>
#include <memory>
#include <exception>
#include <functional>
#include <bitset>
#include <map>
#include <iterator>
#include <iomanip>
#include <sstream>
#include <array>
#include <forward_list>
#include <iterator>
#include <set>

int main(){

std::array<int,6>a{1,2,3,4,5,6};
std::list<int>l{a.begin(),a.begin()+a.size()};
if(std::none_of(l.begin(),l.end(),[](auto &i){
    return i%10;
})){
    std::cout<<" list have an element whose modulus is 0 divided by 10 ";
}else{
std::cout<<"no "<<std::endl;
}



    return 0;
}