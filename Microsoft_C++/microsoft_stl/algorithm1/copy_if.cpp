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


std::list<int>l1{10,21,30,43,50,97,15,46,80,73,69};
std::list<int>l2(l1.size());
std::list<int>l3(l1.size());

//retunrs iterator to the elements 
auto result = std::copy_if(l1.begin(),l1.end(),l2.begin(),[&](int i){ return (i%2 ==0);});

l2.resize(std::distance(l2.begin(),result)); //shirnk l2 to new size

result = std::copy_if(l1.begin(),l1.end(),l3.begin(),[&](int i){ return (i%2 !=0);});

l3.resize(std::distance(l3.begin(),result)); //shirnk l3 to new size

//even elements in l1 are

for(auto&i:l2){
    std::cout<<i<<" ";
}std::cout<<std::endl;

//odd elements in l1 are
for(auto&i:l3){
    std::cout<<i<<" ";
}std::cout<<std::endl;




    return 0;
}