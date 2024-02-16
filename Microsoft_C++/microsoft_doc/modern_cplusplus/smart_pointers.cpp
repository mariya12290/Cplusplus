#include <iostream>
#include <memory>


class Base{
    public:
    Base(const int size): m_size{size}{data.reset(new int[size]);} //array of pointers

    void print(){
        for(int i{0};i<m_size;++i ){
            data.get()[i]= i ;
        }
        std::cout<<*(data.get()+2)<<std::endl;
         //std::cout<<*((data.get()))<<std::endl;
    }
    private:
    int m_size{};
    std::unique_ptr<int[]>data{}; //points to null pointer

};

int main(){

   // std::unique_ptr<Base>b =  std::make_unique<Base>(10);
   std::unique_ptr<Base>b (new Base(10));
b->print(); 

// auto b1 = b; //raise error bcoz unique pointer can not be copied, only moved
// b1->print();

std::unique_ptr<Base>moveb{std::move(b)};
moveb->print();
   std::shared_ptr<Base>sharB (new Base(10));

   auto sharB1 = sharB;
   sharB1->print();


//c-style array
   int arr[] = {1,2,3,4,5};

   for(int i{0};i<5;++i){
       std::cout<<arr[i]<<std::endl;
   }
//c-style array pointer
int * ptrarr {arr};

std::cout<<*ptrarr<<std::endl;


    

}