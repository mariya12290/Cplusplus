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

void rotate_custom(std::vector<int>&v,int n){
    auto middle = v.end();
  while(n>0){
    
    middle -=1;
      auto it = std::rotate(v.begin(),middle,v.end());
      --n;
      for(auto &i:v){
          std::cout<<i<<" ";
      }std::cout<<std::endl;
      middle = v.end();
  }
 

}

int main(){

std::vector<int>v{1,2,3,4,5};

rotate_custom(v,5);
for(auto &i:v){
          std::cout<<i<<" ";
      }std::cout<<std::endl;



    return 0;
}