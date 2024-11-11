#include <iostream>
using namespace std;

void fizzbuzz(int from, int to);

int main() {
    fizzbuzz(1, 100);
}

void fizzbuzz(int from, int to) {
    for (int i{from}; i <= to; i++) {
    i % 15 == 0
    ? cout << "FizzBuzz"
    : i % 5 == 0
    ? cout << "Buzz"        
    : i % 3 == 0 
    ? cout << "Fizz"
    : cout << i;
    cout << "\n";
    }
}
