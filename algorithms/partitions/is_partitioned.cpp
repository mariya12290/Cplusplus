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



bool isOdd(int i){
    return (i%2)==1;
}

bool isEven(int i){
    return (i%2)==0;
}
bool isodd(int i){
    return (i/2)!=0;
}
bool iseven(int i){
    return (i/2)==0;
}
int main(){

std::vector<int>v1{1,2,3,4,5};
std::vector<int>v2{2,4,6,8,10};
std::vector<int>v3{1,3,5,7,9};

auto flag = std::is_partitioned(v2.begin(),v2.end(),iseven);

if(flag){
    std::cout<<"v2 is even"<<std::endl;
}



    return 0;
}



