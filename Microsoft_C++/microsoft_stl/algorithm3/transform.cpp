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

std::vector<int>vec1{1,2,3,4,5,6,7,8,9};
std::vector<double>vec2(vec1.size());

std::vector<double>vec3(vec1.size());
auto it =  std::transform(vec1.begin(),vec1.end(),vec2.begin(),[&](int i){ return i*100.0f;});

for(auto&i:vec2){
    std::cout<<i<<" ";
}std::cout<<std::endl;

it = std::transform(vec1.begin(),vec1.end(),vec2.begin(),vec3.begin(),[&](int i,int j){return i*j;});

for(auto&i:vec3){
    std::cout<<i<<" ";
}std::cout<<std::endl;



    return 0;
}