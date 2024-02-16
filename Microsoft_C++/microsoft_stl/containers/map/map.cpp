#include <iomanip>
#include <iostream>
#include <map>
#include <string>



int main(){

    std::map<std::string, int>m{{"suri",1},{"kumar",2},{"mariya",3}};

auto it = m.find("suri");
std::cout<<it->second<<std::endl;

m.insert({"arala",4});
m["spandu"] = 6;

std::cout<<m.size()<<std::endl;

const auto& [itr, flag]= m.emplace("appa",100);

if(flag){
    std::cout<<"app is inserted into a map"<<std::endl;
}

return 0;
}