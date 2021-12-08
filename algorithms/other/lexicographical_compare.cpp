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
#include <stack>
#include <deque>

int main(){

std::vector<int>v1{1,2,3,4,5};
std::vector<int>v2{10,20,30,40,50};
std::vector<int>v3;
v3.reserve(v1.size());

auto it = std::transform(v1.begin(),v1.end(),v3.begin(),[](auto& i){return i*10;});

if(!std::lexicographical_compare(v2.begin(),v2.end(),v3.begin(),v3.end())){
    std::cout<<"elements in v2 and v3 are same "<<std::endl;
}
else{
    std::cout<<"no "<<std::endl;
}

    return 0;
}