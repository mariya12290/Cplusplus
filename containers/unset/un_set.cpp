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
//https://www.cplusplus.com/reference/unordered_set/unordered_set/

int main(){

std::unordered_set<std::string>unset{"Suri","Ravi","Raghu","Mariya","Sur"};

std::cout<<unset.bucket("Suri")<<std::endl;


auto it = unset.equal_range("Suri");
std::cout<<*it.first<<std::endl;


    return 0;
}