#include <iostream>
#include <typeinfo>

class Animal {
public:
  virtual ~Animal() = default; // virtual destructor required for RTTI(Run Time Type Information)
};

class Dog : public Animal {
public:
  void bark() {
    std::cout << "Woof!" << std::endl;
  }
};

class Cat : public Animal {
public:
  void meow() {
    std::cout << "Meow!" << std::endl;
  }
};

int main() {
  // Create an Animal pointer pointing to a Dog object
  Animal* animalPtr = new Dog;

  // Try to downcast to a Dog* pointer using dynamic_cast
  Dog* dogPtr = dynamic_cast<Dog*>(animalPtr);

  // Check if the downcast was successful
  if (dogPtr) {
    // Call the Dog's method
    dogPtr->bark();
  } else {
    std::cout << "Error: Cannot downcast to Dog." << std::endl;
  }

  // Try to downcast to a Cat* pointer (should fail)
  Cat* catPtr = dynamic_cast<Cat*>(animalPtr);
  if (catPtr) {
    std::cout << "Error: Unexpected successful downcast to Cat." << std::endl;
  } else {
    std::cout << "Correctly identified not a Cat." << std::endl;
  }

  // Print the actual type of the object at runtime
  std::cout << "Actual type: " << typeid(*animalPtr).name() << std::endl;

  delete animalPtr; // Remember to delete the allocated object

  return 0;
}

// Explanation
// We define three classes: Animal as the base class, and Dog and Cat as derived classes.
// We create an Animal pointer animalPtr and assign it a new Dog object.
// We try to downcast animalPtr to a Dog* pointer using dynamic_cast. 
     //If the object pointed to is actually a Dog, the downcast succeeds and dogPtr becomes non-null. 
     //Otherwise, it remains null.
// We check if the downcast was successful and call the bark method if it was.
// We attempt to downcast to a Cat* pointer, which should fail since the object is actually a Dog. 
  // This demonstrates that dynamic_cast only succeeds for valid conversions.
// We use typeid to print the actual type of the object pointed to by animalPtr at runtime.
// Finally, we deallocate the memory using delete.
// This program illustrates how dynamic_cast can be used for safe downcasting in inheritance hierarchies, ensuring type safety and handling potential cast failures.