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


using MP = std::map<std::string, int>; 
void print(const MP& mp){
    for(auto &i:mp){
        std::cout<<i.first<<" "<<i.second<<std::endl;
    }
}
int main(){

    MP mp{{"suri",1},{"kumar",2},{"mariya",3}};

    mp.at("suri")  = 10;

    print(mp);
   
    auto p = mp.emplace("amma",100);

    if(p.second){
        std::cout<<"amma inserted into a map"<<std::endl;
    }else{
        std::cout<<"amma did not insert into a map"<<std::endl;
    }
    std::cout<<"removing suri from map"<<std::endl;
    mp.erase("suri");
    print(mp);

    mp["suri"] = 200;
    print(mp);

    mp.insert(std::pair<std::string, int>("raju",300));
    print(mp);

 
    
    

    return 0;
}


