#include<iostream>

class Box{
    private: int height;
             int width;
             int length;
    public:
            //constructor with no arguments ==> Default Constructor
            Box(){
                std::cout <<"Default Constructor is Called "<<std::endl;
                height = 1;
                width = 1;
                length = 1;
            }
            //constructor with 1 argument
            Box(int a){
                std::cout <<"Constructor with 1 argument is Called "<<std::endl;
                height = width = length = a;
            }
            //constructor with 2 argument
            Box(int l, int h){
                std::cout <<"Constructor with 2 argument is Called "<<std::endl;
                width = length = l;
                height = h;
            }
            //constructor with 3 argument
            Box(int l, int h, int w){
                std::cout <<"Constructor with 3 argument is Called "<<std::endl;
                width = w;
                length = l;
                height = h;
            }
            public:
             ~Box(){
                    std::cout <<"Distructor is Called "<<std::endl;
            }    
    void showDetails(){
        std::cout << "Box Height is: " <<height <<std::endl;
        std::cout << "Box Width is: " <<width <<std::endl;
        std::cout << "Box Length is: " <<length <<std::endl<<std::endl;
    }
};

int main(){
    Box b0; // this will call constructor without argument
    Box b1(4); // this will call constructor with 1 argument
    Box b2(8,10); // this will call constructor with 2 argument
    Box b3(12,15,17); // this will call constructor with 3 argument
    b0.showDetails();
    b1.showDetails();
    b2.showDetails();
    b3.showDetails();
    return 0;
}