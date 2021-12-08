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

//https://www.cplusplus.com/reference/unordered_map/unordered_multimap/
int main(){

std::unordered_multimap<std::string,std::string>um{{"apple","red"},{"apple","blue"},{"orange","green"},{"banana","yellow"}};

std::cout<<"um contains ";
for(auto i{um.begin()};i!=um.end();++i){
    std::cout<<i->first<<" : "<<i->second<<std::endl;
}

std::cout<<"um buckets contains ";
for(unsigned int i{0};i<um.bucket_count();++i){
    std::cout<<"bucket "<<i<<" contains ";
    for(auto local_it{um.begin(i)};local_it!=um.end(i);++local_it){
        std::cout<<" "<<local_it->first<<" "<<local_it->second<<std::endl;
    }
}
std::unordered_multimap<std::string,std::string>um_bucket{{"apple","red"},{"apple","blue"},{"orange","green"},{"banana","yellow"}};
for(auto&i :um_bucket){
std::cout<<"element [ "<<i.first<<" "<<i.second<<" ] ";
std::cout<<" is in bucket # "<<um_bucket.bucket(i.first)<<std::endl;
}

std::cout<<" number of buckets are "<<um_bucket.bucket_count()<<std::endl;

auto bucket_count = um_bucket.bucket_count();
for(auto i(0);i<bucket_count;++i){
    std::cout<<" Bucket # "<<i<<" "<<um_bucket.bucket_size(i)<<" elements"<<std::endl;
}
//auto it = um_bucket.emplace_hint(0, "strawberry","purple");


for(auto&i :um_bucket){
std::cout<<"element [ "<<i.first<<" "<<i.second<<" ] ";
std::cout<<" is in bucket # "<<um_bucket.bucket(i.first)<<std::endl;
}

auto it = um_bucket.equal_range("apple");//return pair
std::for_each(it.first,it.second,[](auto i){std::cout<<i.second<<std::endl; });


std::cout<<um_bucket.erase("apple")<<std::endl;
std::cout<<um_bucket.size()<<std::endl;
um_bucket.insert(std::make_pair<std::string,std::string>("apple","red"));
std::cout<<um_bucket.size()<<std::endl;

    return 0;
}