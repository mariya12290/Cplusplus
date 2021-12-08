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

std::vector<int>v{1,2,3,4,2,3,3,4,5};

auto it = std::adjacent_find(v.begin(),v.end());

if(it!= v.end()){
    std::cout<<"adjacent elemnts are "<<*it<<std::endl;
}


    return 0;
}