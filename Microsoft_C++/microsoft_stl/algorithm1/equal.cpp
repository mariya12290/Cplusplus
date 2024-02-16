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

std::vector<int>v1{10,20,30,40,50};
std::vector<int>v2{10,20,30,40,50};
std::vector<int>v3{10,20,30,40,50,60,70,80,90};

auto result = std::equal(v1.begin(),v1.end(),v2.begin());
if(result){
    std::cout<<"v1 and v2 are equal range "<<std::endl;
}else{
    std::cout<<"v1 and v2 are not equal range "<<std::endl;
}

result = std::equal(v1.begin(),v1.end(),v2.begin(),v2.end());
if(result){
    std::cout<<"v1 and v2 are equal range "<<std::endl;
}else{
    std::cout<<"v1 and v2 are not equal range "<<std::endl;
}
result = std::equal(v1.begin(),v1.end(),v3.begin());
if(result){
    std::cout<<"v1 and v3 are equal range "<<std::endl;
}else{
    std::cout<<"v1 and v3 are not equal range "<<std::endl;
}

result = std::equal(v1.begin(),v1.end(),v3.begin(),v3.end());
if(result){
    std::cout<<"v1 and v3 are equal range "<<std::endl;
}else{
    std::cout<<"v1 and v3 are not equal range "<<std::endl;   
}
    return 0;
}