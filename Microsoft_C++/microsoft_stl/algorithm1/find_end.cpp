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

bool twice(int i,int j){
    return 2*i==j;
}


int main(){

    std::vector<int>vec1{1,2,3,4,5,6,7,8,9,10};
    std::vector<int>vec2{16,18,20};


    auto pr = std::find_end(vec1.begin(),vec1.end(),vec2.begin(),vec2.end(),twice);
    if(pr != vec1.end()){
    std::cout<<*pr<<std::endl;
    }
    return 0;
}