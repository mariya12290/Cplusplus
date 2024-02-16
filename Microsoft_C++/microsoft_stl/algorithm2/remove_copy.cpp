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


std::list<std::string> ls1{"suri","kumar","mariya","arala","amma","appa","suri","kumar"};
std::list<std::string> ls2(ls1.size());

auto it = std::remove_copy(ls1.begin(),ls1.end(),ls2.begin(),"suri");

for(auto&s:ls2){
    std::cout<<s<<" ";
}std::cout<<std::endl;

it = std::remove_if(ls1.begin(),ls1.end(),[&](auto s){ return s=="kumar";});

ls1.resize(std::distance(ls1.begin(),it));
for(auto&s:ls1){
    std::cout<<s<<" ";
}std::cout<<std::endl;

    return 0;
}