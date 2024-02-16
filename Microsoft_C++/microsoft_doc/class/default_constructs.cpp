#include <iostream>
#include <memory>
#include <vector>
class Box{
    public:
  //  Box() = delete;
    Box(int i, int j):m_i{i},m_j{j}{

    }
    void print(){
        std::cout<<m_i*m_j<<std::endl;
    }
    private:
    int m_i{};
    int m_j{};
};


int main(){

    Box b;
    // Box b{1,2};
    // b.print();
    // Box b1[]{{1,1},{2,2},{3,3}};

    // for(int i{0};i<3;++i){
    //     b1[i].print();
    // }

    // Box* b2 = new Box[4]{{4,4},{5,5},{6,6},{7,7}};
    //  for(int i{0};i<4;++i){
    //     b2->print();
    //     b2++;
    // }
    
    // std::vector<std::unique_ptr<Box>>Boxptr;
    // Boxptr.push_back(std::make_unique<Box>(10,10)); //,{20,20},{30,30},{40,40}};

    // std::unique_ptr<Box[]>Boxptr1{new Box[3]{{20,20},{30,30},{40,40}}};

    //  for(int i{0};i<3;++i){
    //     Boxptr1.get()[i].print();
        
    // }
   // Box b3; //error no default constructor exist of


}