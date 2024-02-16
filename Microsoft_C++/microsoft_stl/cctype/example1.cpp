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
//c header file
#include  <cctype>



int main(){

std::locale loc;

std::string str{"Helo, suri!"};
auto it = str.begin();
int pun{};
while(it != str.end()){
    if(std::ispunct(*it)){
        pun+=1;
        ++it;
    }else{
        ++it;
    }
}

std::cout<<"string contains "<<pun<<" number of puncatioation"<<std::endl;
    return 0;
}