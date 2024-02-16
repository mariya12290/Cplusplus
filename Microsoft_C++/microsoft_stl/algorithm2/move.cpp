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
std::vector<int>vec1{1,2,3,4,5,6};

std::vector<int>vec2(vec1.size());

//vec2.reserve(vec1.size());

auto first1 = vec1.begin();
auto last1 = vec1.end();
auto first2 = vec2.begin();
//std::cout<<*first2<<std::endl;
while(first1!= last1){

    *first2 = std::move(*first1);
   //std::cout<<*first2<<std::endl;
    ++first2; ++first1;
}

for(auto &i:vec2){
    std::cout<<i<<std::endl;
}

    return 0;
}