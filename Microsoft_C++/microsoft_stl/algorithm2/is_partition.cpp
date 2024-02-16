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


std::vector<int>vec{1,2,3,4,5,6,7};

if(std::is_partitioned(vec.begin(),vec.end(),[&](int i){return (i%2==1);})){
    std::cout<<"is partitioned "<<std::endl;
}else{
    std::cout<<"not partitioned "<<std::endl;
}
 std::partition(vec.begin(),vec.end(),[&](int i){ return (i%2==1);});

    if(std::is_partitioned(vec.begin(),vec.end(),[&](int i){return (i%2==1);})){
    std::cout<<"is partitioned "<<std::endl;
}else{
    std::cout<<"not partitioned "<<std::endl;
}
for(auto &i:vec){
    std::cout<<i<<" ";
}std::cout<<"\n";
    return 0;
}