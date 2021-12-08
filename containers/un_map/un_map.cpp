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

std::unordered_map<std::string, int>unmap{{"Suri",26},{"Ravi",30},{"Raghu",35}};
/** .at() */
// for(auto&i:unmap){
//     std::cout<<i.first<<" "<<i.second<<std::endl;
// }
// unmap.at("Raghu") = 40;
// for(auto&i:unmap){
//     std::cout<<i.first<<" "<<i.second<<std::endl;
// }

/** begin() */
//auto it = unmap.begin();

// while(it != unmap.end()){
//     std::cout<<it->first<<" "<<it->second<<std::endl;
//     ++it;
// }
// for(auto i{0};i<unmap.bucket_count();++i){
//     std::cout<<"Bucket # "<<i<<" : ";
//     for(auto it1{unmap.begin(i)};it1 != unmap.end(i);++it1){
//         std::cout<<it1->first<< " "<<it1->second<<" ";
//     }std::cout<<std::endl;
// }

/** bucket */
std::cout<<unmap.bucket("Suri")<<std::endl;

    return 0;
}