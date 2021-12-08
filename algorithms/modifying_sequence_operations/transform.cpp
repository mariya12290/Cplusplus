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
#include <functional>

int main(){

std::vector<int>v1{1,2,3,4,5};
std::vector<int>v2{10,20,30,40,50};
std::vector<int>v3;
v3.reserve(v1.size());

auto it = std::transform(v1.begin(),v1.end(),v3.begin(),[](auto& i){return i*10;});

std::vector<int>v4;
v4.reserve(5);

auto it1 = std::transform(v2.begin(),v2.end(),v3.begin(),v4.begin(),std::plus<int>());

std::cout<<v4[0]<<std::endl;
for(auto & j: v4){

    std::cout<<j<<" ";
}
std::cout<<std::endl;


    return 0;
}