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

int main(){

std::vector<int>v1{1,5,3,2,7,8};
std::sort(v1.begin(),v1.end());

auto it = std::upper_bound(v1.begin(),v1.end(), 4);

std::cout<<*it<<std::endl;

auto it1 = std::upper_bound(v1.begin(),v1.end(),5,[](const int&i, const int& j){return i>j;});
std::cout<<*it<<std::endl;


    return 0;
}