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


void print(const std::array<int,4>&arr){
    for(int i{0};i<arr.size();++i){
        std::cout<<arr[i]<<" ";
    }std::cout<<std::endl;
}

int main(){

std::array<int,4>arr1{1,2,3,4};

std::array<int,4>arr2{5,6,7,8};


std::swap(arr1,arr2);
 //arr1.swap(arr2);

 print(arr1);
 print(arr2);
//not equal operator
std::cout<<std::boolalpha<<" "<<(arr2 != arr2)<<std::endl;
std::cout<<std::boolalpha<<" "<<(arr2 != arr1)<<std::endl;

//less than operator

std::cout<<std::boolalpha<<" "<<(arr2 < arr2)<<std::endl;
std::cout<<std::boolalpha<<" "<<(arr2 < arr1)<<std::endl;

//less than equal
std::cout<<std::boolalpha<<" "<<(arr2 <= arr2)<<std::endl;
std::cout<<std::boolalpha<<" "<<(arr2 <= arr1)<<std::endl;

std::array<int,4>arr3{10,20,30,40};
print(arr3);
std::cout<<arr3.back()<<std::endl;

auto it = arr3.crbegin();
std::cout<<*it<<std::endl;
//the value  return by crend should not be referenced
// it = arr3.crend();
// std::cout<<*it<<std::endl;
std::cout<<" data "<<std::endl;
auto it1  = arr3.data();
std::cout<<*it1<<std::endl;
++it1;
std::cout<<*it1<<std::endl;

//arr3.fill(100);
//print(arr3);
std::cout<<std::get<0>(arr3)<<std::endl;

std::cout<<*arr3.rend()<<std::endl;
    return 0;
}