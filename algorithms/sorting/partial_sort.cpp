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

std::vector<int>v1{1,5,9,2,4,6,7,3,12,17,10,11};
std::vector<int>v2;
v2.reserve(5);


auto it = std::partial_sort_copy(v1.begin(),v1.end(),v2.begin(),v2.end());

if(it != v1.end() && it != v2.end()){
    std::cout<<"it is an end element"<<std::endl;
}else{
    std::cout<<*it<<std::endl;
}

    return 0;
}