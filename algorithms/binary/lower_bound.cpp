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

auto lower_bound(auto first, auto last, auto value){
    while(first!= last){
        if(*first == value){
            return first;
        }
        ++first;
    }
    return last;
}

int main(){

std::vector<int>v1{1,2,3,4,5};

auto it = lower_bound(v1.begin(),v1.end(),3);
std::cout<<*it<<std::endl;

auto it1 = std::lower_bound(v1.begin(),v1.end(),3);

std::cout<<*it<<std::endl;
    return 0;
}