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


std::vector<int>v1{};
std::vector<int>v2{};

for(int i{0};i<5;++i){
    v1.push_back(i);

}
v2.resize(5);

std::copy(v1.begin(),v1.end(),v2.begin());

for(auto &i:v2){
    std::cout<<i<<" ";
}std::cout<<std::endl;

std::copy(v2.begin(),v2.begin()+2,v2.begin()+4);

for(auto &i:v2){
    std::cout<<i<<" ";
}std::cout<<std::endl;

    return 0;
}