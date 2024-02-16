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

std::vector<int>vec{10,20,30,40,50,60,70};

if(std::binary_search(vec.begin(),vec.end(),30)){
    std::cout<<"There is an element 30 in vector "<<std::endl;
}else{
    std::cout<<"There is no element 30 in a vector "<<std::endl;
}


if(std::binary_search(vec.begin(),vec.end(),80, std::greater<int>())){
    std::cout<<"There is an element greater than 80 in vector "<<std::endl;
}else{
    std::cout<<"There is no element greater than 80 in a vector "<<std::endl;
}

    return 0;
}