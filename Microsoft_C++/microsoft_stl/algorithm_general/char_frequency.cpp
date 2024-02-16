#include <iomanip>
#include <istream>
#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
void CountChar(const std::string& s){
    
    auto s1 = s;

    
}


int main(){

    std::string s{"surendrakumar"};

  //  auto count = std::count_if(s.begin(),s.end(),[&](char c){return (c=='a');});
   // std::cout<<count<<std::endl;

    std::string s1{"AABBBCD"};
   
   auto count1 = std::count_if(s1.begin(),s1.end(),[&](char c){return (c=='A');});
   std::cout<<count1<<std::endl;
    auto it = s1.begin();
   
    int count{};
    std::map<char, int>m{};
     while(it != s1.end()){
      
      auto C =*it;
      count = std::count_if(s1.begin()+count,s1.end(),[&](char c){return (c==C);});
      it +=count;
      m[C] = count;

     }
    std::cout<<m.size()<<std::endl;

    for(const auto&i:m){
        std::cout<<i.first<<" "<<i.second<<std::endl;
    }


    return 0;
}