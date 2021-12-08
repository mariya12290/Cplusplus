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

std::vector<int>v1{1,2,7,4,5,6,3};
std::vector<int>v2{1,2,3,4,6,7,5};


 if(std::is_permutation(v1.begin(),v1.end(),v2.begin(),v2.end())){
     std::cout<<"all the elements in v1 and v2 are matches "<<std::endl;
 }else{
     std::cout<<"else not ";
 }




    return 0;
}