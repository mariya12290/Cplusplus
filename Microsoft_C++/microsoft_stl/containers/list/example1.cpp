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
#include <locale>
#include <complex>

//C
#include <cmath>
//I/O
#include  <fstream>
#include <iomanip>
#include  <sstream>

void print(const std::list<std::string>&ls){
    for(auto& i:ls){
        std::cout<<i<<" ";
    }std::cout<<std::endl;
}

int main(){

std::list<std::string>ls{"suri","kumar","mariya"};

auto it = ls.begin();

it++;
 it = ls.emplace(it, "amma");

print(ls);
++it;

it =ls.erase(it);
print(ls);
std::cout<<ls.size()<<std::endl;
ls.resize(std::distance(ls.begin(),it));

print(ls);
std::cout<<ls.size()<<std::endl;


ls.sort();
print(ls);

ls.emplace_back("suri");
print(ls);
ls.sort();
ls.unique();
print(ls);
std::list<std::string>ls1{"kumar","mariya","appa"};

ls.swap(ls1);
print(ls);
print(ls1);

ls.reverse();
print(ls);




    return 0;
}

