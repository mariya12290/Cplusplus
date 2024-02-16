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

void print(const std::deque<int>&d){
    std::cout<<d.size()<<std::endl;
    for(auto &i:d){
        std::cout<<i<<" ";
    }std::cout<<std::endl;
}



int main(){


std::deque<int>d{1,2,3,4,5};

print(d);
d.assign({6,7,8,9,10});
print(d);

d.clear();

print(d);

d.assign({1,2,3,4,5});


auto refF = d.front();

refF = 100;
print(d);

d.pop_back();
print(d);

std::cout<<(*d.rbegin())<<std::endl;

std::deque<int>d1{5,6,7,8};
d.swap(d1);
print(d);
    return 0;
}