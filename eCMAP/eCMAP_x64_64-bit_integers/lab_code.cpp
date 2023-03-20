#include <iostream>                       

extern "C" long long asm_factorial(int number);

long long int factorial(int number) {
    long long int result = 1;
    if (number > 1) {
        do {
            result *= number;
            number--;
        } while (number > 0);
    }
    return result;
};


int main() {

    std::cout << factorial(13) << "\n";
    std::cout << asm_factorial(13) << "\n";

};