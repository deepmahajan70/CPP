#include <iostream>
#include <thread>

using namespace std;

volatile int counter = 0; 

void incrementCounter() {
  for (int i = 0; i < 1000000; ++i) {
    counter++; 
  }
}

int main() {
  thread thread1(incrementCounter); 
  thread thread2(incrementCounter);

  thread1.join();
  thread2.join();

  cout << "Final counter value: " << counter << endl; 

  return 0;
}

// Volatile Keyword:

// In this example, the volatile keyword is used to declare the counter variable.
// volatile tells the compiler that the value of counter can change unexpectedly at any time, even without any explicit assignments within the current code.
// This prevents the compiler from making optimizations that might assume the value of counter remains constant within a certain block of code.
// Multithreading:

// Two threads (thread1 and thread2) are created, each executing the incrementCounter function concurrently.
// Inside incrementCounter, a loop iterates 1 million times, incrementing the counter variable in each iteration.
// Race Condition:

// Without the volatile keyword, the compiler might optimize the code in a way that leads to unexpected behavior in a multithreaded environment.
// For example, the compiler might cache the value of counter in a register and reuse it multiple times, leading to incorrect results when multiple threads are modifying it simultaneously.
// Preventing Optimization:

// By using volatile, the compiler is forced to re-read the value of counter from memory every time it's accessed, ensuring that the latest value is always used, even if the value has been modified by another thread.
// Key Points:

// volatile is crucial for correct behavior in multithreaded programs when shared variables are accessed and modified by multiple threads concurrently.
// It prevents unexpected optimizations that can lead to data races and incorrect results.
// volatile alone does not guarantee thread safety in all cases. Proper synchronization mechanisms (like mutexes or atomic operations) are often necessary for more robust thread safety.