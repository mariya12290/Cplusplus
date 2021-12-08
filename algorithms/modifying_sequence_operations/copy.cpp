#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <utility>
#include <memory>
#include <exception>
#include <functional>
#include <bitset>
#include <map>
#include <iterator>
#include <iomanip>
#include <sstream>
#include <array>
#include <forward_list>
#include <iterator>
#include <set>
#include <stack>
#include <deque>

int* copy1(int* first1, int *last1, int*first2){
    while(first1!= last1){
        *first2 = *first1;
        std::cout<<*first2<<std::endl;
        ++first1;++first2;
    }
    return first2;
}

int main(){

int* v1[4]{1,2,3,4};
int* v2[4];


auto it = copy1(v1,v1+4,v2);
std::cout<<*it<<std::endl;


    return 0;
}