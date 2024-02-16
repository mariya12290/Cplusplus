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


std::forward_list<int>fl{1,2,3,4,5,6,7,8,9,10};

std::replace_if(fl.begin(),fl.end(),[&](auto i){ return (i%2)==0;},0);

for(auto &i:fl){
    std::cout<<i<<" ";
}std::cout<<"\n";

    return 0;
}