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


std::vector<int>v1{1,5,4,2,3,7,8,3,4,3,3};

std::sort(v1.begin(),v1.end());


auto p= std::equal_range(v1.begin(),v1.end(),3);

std::cout<<std::distance(p.first,p.second)<<std::endl;




    return 0;
}