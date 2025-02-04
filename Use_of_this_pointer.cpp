#include <iostream>
using namespace std;

class Rectangle {
    private:
        int width, height;

    public:
        Rectangle(int width, int height) {
            // Resolve name conflict using this pointer
            this->width = width;
            this->height = height;
        }

        Rectangle& setWidth(int width) {
            this->width = width;
            return *this; // Allows chaining
        }

        Rectangle& setHeight(int height) {
            this->height = height;
            return *this; // Allows chaining
        }

        void display() {
            cout << "Width: " << width << ", Height: " << height << endl;
        }
};

int main() {
    Rectangle rect(10, 20);
    rect.setWidth(15).setHeight(25); // Chaining
    rect.display();
    return 0;
}

