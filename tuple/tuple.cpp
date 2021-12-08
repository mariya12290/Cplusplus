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
#include <tuple>
#include <utility>
#include <memory>
#include <exception>
#include <functional>
#include <bitset>
#include <iterator>
#include <iomanip>
#include <sstream>
#include <iterator>
#include <functional>
#include <stdlib.h>
#include <math.h>
#include <unordered_map>

int main(){


std::tuple<std::string,int,int>t{"suri",1,2};
auto bar = std::make_tuple<std::string,int,int>("kumar",3,4);

std::cout<<std::get<2>(bar)<<std::endl;
std::get<2>(bar) = 100;

std::cout<<std::get<2>(bar)<<std::endl;

auto p = std::make_pair<std::string,int>("Amma",200);
std::cout<<p.first<<" "<<p.second<<std::endl;

std::unordered_map<std::string, int>un{{"Appa",300}};
un.insert(p);
std::cout<<un.size()<<std::endl;

int i1;
int i2;
std::tie(std::ignore, i1,i2)= t;
std::cout<<i1<<" "<<i2<<std::endl;

    return 0;
}