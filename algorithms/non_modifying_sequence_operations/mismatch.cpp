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
std::vector<int>v2{1,2,3,4,6,7};
std::vector<int>v3{1,2,3,4,5,6};

 auto it = std::mismatch(v1.begin(),v1.end(),v3.begin(),v3.end());

std::cout<<*it.first<<" "<<*it.second<<std::endl;
    return 0;
}