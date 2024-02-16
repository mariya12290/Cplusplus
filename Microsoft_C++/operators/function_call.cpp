#include <iostream>
#include <vector>


class Point{
    public:
    Point(int i):m_I{i}{}
    int getI(){
        return m_I;
    }
    void setI(int i){
        m_I =i;
    }
    private:
    int m_I{};

};

Point func1(){
    Point p(10);
    return p; 
}
Point* func2(){
    Point *p= new Point(20);
return p;
}
Point& func3(){
     Point *p= new Point(30);
     Point& p1=*p; //needs address on the heap &p gives the address of the p, not the POint on the heap
     return p1;

}


int main(){

std::cout<<func1().getI()<<std::endl;
std::cout<<func2()->getI()<<std::endl;
std::cout<<func3().getI()<<std::endl;


}