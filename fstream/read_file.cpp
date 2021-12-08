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

//https://www.cplusplus.com/doc/tutorial/files/

int main(){

//std::fstream myfile;
// myfile.open("file.txt",std::ios::app);
// myfile<<"Write this to a file again"<<std::endl;
// myfile.close();
std::string line;
std::ofstream myfile1("file.txt");
if(myfile1.is_open()){
    myfile1<<"I am surendra Kumar doing masters in TUKL\n";
    myfile1<<"I am writing it agina\n"; 
}
myfile1.close();
std::ifstream myfile2("file.txt");
if(myfile2.is_open()){
    while(std::getline(myfile2,line)){
        std::cout<<line<<"\n"<<std::endl;
    }


}
myfile2.close()ls
;


    return 0;
}