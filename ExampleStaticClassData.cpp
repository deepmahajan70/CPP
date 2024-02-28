#include<iostream>
#include <string>
class MovieCounter{
    public: 
            //Static Variable, will be shared amung all objects of the class
            static int no_of_added_movies;
            MovieCounter(){
                no_of_added_movies ++;
                showCount();
            }
        void showCount(){
            std::cout <<"Movies Added so far: "<< no_of_added_movies <<std::endl;
        }
            //static member function can be called without creating object of class 
        static void showCountWithoutObject(){
           std::cout <<"This function is called by class name itself...not by object"<<std::endl; 
        }
};
class Movie{
    public: std::string mv_name;

};
void addmovie(std::string mvname){
    Movie m;
    m.mv_name = mvname;
    MovieCounter ic1;
}
int MovieCounter::no_of_added_movies; // because of this statement we can use 'no_of_added_movies' in main also
int main(){
    while(1){
        std::string choice;
        std::cout<<"Want to add movie ? Y / N" ;
        std::cin>>choice;
        if(choice =="y"){
            addmovie("MyMovie");
        }
        else{
            MovieCounter::showCountWithoutObject();//called by class itself...not by object
            break;
        }
    }
return 0;
}