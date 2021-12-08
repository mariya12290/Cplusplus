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


std::vector<int>v1{1,2,3,4,5,6};
std::vector<int>v2{10,20,30,40,50};

auto it = std::swap_ranges(v1.begin(),v1.end(),v2.begin());

for(auto&i:v2){
    std::cout<<i<<std::endl;
}

for(auto&i:v1){
    std::cout<<i<<std::endl;
}

    return 0;
}