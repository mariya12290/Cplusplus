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

using TU = std::tuple<std::string,int,char>;

int main(){

std::vector<TU>vt{{"kumar",20,'k'}};

std::tuple<std::string, int, char>tu{"suri",10,'s'};

vt.push_back(tu);
vt.emplace_back("mariya",30,'m');


for(const auto&i:vt){
 auto [str,in,c] = i;  //structure bindings
 std::cout<<str<<" "<<in<<" "<<c<<std::endl;

}

auto  tu1 = std::make_tuple("amma",40,'a');
vt.push_back(tu1);

std::cout<<"make tuples is used"<<std::endl;
for(const auto&i:vt){
 auto [str,in,c] = i;  //structure bindings
 std::cout<<str<<" "<<in<<" "<<c<<std::endl;

}

std::cout<<std::get<0>(tu)<<std::endl;




    return 0;
}