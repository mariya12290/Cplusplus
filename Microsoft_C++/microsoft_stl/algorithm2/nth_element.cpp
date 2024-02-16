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

bool myfunction (int i,int j) { return (i<j); }

int main(){

std::vector<int>vec{};

std::vector<int>myvector{};
for(int i{-1};i>-10;--i){

    vec.push_back(i);
    myvector.push_back(i);
}

std::random_shuffle(vec.begin(),vec.end());
for(auto&i:vec){
    std::cout<<i<<" ";
}std::cout<<"\n";

std::nth_element(vec.begin(),vec.begin()+5,vec.end(),[&](int i, int j){ return i<j;});

for(auto&i:vec){
    std::cout<<i<<" ";
}std::cout<<"\n";

 std::random_shuffle (myvector.begin(), myvector.end());

  // using default comparison (operator <):
  std::nth_element (myvector.begin(), myvector.begin()+5, myvector.end());

  // using function as comp
  std::nth_element (myvector.begin(), myvector.begin()+5, myvector.end(),myfunction);

  // print out content:
  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
    return 0;
}