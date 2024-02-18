#include<iostream>
#include <string>
class MovieCounter{
    public: static int no_of_added_movies;
            MovieCounter(){
                no_of_added_movies ++;
                showCount();
            }
        void showCount(){
        std::cout <<"Movies Added so far: "<< no_of_added_movies <<std::endl;
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
int MovieCounter::no_of_added_movies = 0;
int main(){
    addmovie("Hum");
    MovieCounter ic2;
    return 0;
}