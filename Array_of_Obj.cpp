#include<iostream>
class Car{
    public: int reg_no;
    public: void getData(int i){
        std::cout<<"Enter Reg.No. of Car "<<i<<std::endl;
        std::cin>>this->reg_no;
    }
    public: void putData(int i){
        std::cout<<"Car "<<i<<"is : "<<std::endl;
        std::cout<<this->reg_no;
    }
};

int main(){
    Car array_of_cars[3];
    Car *ptr_to_car;
    ptr_to_car = &array_of_cars[0];
    for(int i=0;i<3;i++){
        ptr_to_car->getData(i);
        ptr_to_car++;
    }
    for(int i=0;i<3;i++){
        array_of_cars[i].putData(i);
    }
    return 0;

}