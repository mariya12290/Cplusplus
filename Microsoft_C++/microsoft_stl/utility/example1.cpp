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

using P = std::pair<int,int>;

void print(const std::vector<P>&vp){
    for(const auto&i:vp){
        std::cout<<i.first<<" "<<i.second<<std::endl;
    }
}

int main(){

//pair
std::vector<P>vp;

vp.push_back(std::make_pair(10,20));
vp.push_back(std::make_pair(30,40));

print(vp);

//swap

std::vector<P>vp1{{50,60},{70,80}};

std::swap(vp,vp1);
print(vp);
    return 0;
}