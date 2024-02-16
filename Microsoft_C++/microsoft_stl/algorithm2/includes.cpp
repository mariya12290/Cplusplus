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


int arr1[]{10,30,50,20,60,70,40};
int arr2[]{30,20,40};

std::sort(arr1,arr1+7);
std::sort(arr2,arr2+3);

if(std::includes(arr1,arr1+7,arr2,arr2+3)){
    std::cout<<"arr1 includes all the elements of arr2"<<std::endl;
}else{
    std::cout<<"arr 2 is not there in arr1"<<std::endl;
}

    return 0;
}