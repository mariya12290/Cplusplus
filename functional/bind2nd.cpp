//https://www.cplusplus.com/reference/functional/bind2nd/
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <array>
#include <forward_list>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <tuple>
#include <unordered_map>
#include <utility>
#include <memory>
#include <exception>
#include <functional>
#include <bitset>
#include <iterator>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <ios>
#include <iterator>
#include <functional>
#include <stdlib.h>
#include <math.h>


int main(){

std::vector<int>v1{4,5,6,7};

std::vectpr<int>v2;
v1.reserve(4);

std::for_each(v1.begin(),v1.end(),[](auto i){std::cout<<std::bind2nd(std::modulus<int>(),2)<<std::endl;});




    return 0;
}