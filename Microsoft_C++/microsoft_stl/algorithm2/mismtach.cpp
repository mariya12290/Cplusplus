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


std::vector<int>vec1{1,2,3,4,5,6,7};

std::vector<int>vec2{1,2,3,4,5,6,8};

auto pair = std::mismatch(vec1.begin(),vec1.end(),vec2.begin(),vec2.end());

std::cout<<*pair.first<<" "<<*pair.second<<std::endl;

    return 0;
}