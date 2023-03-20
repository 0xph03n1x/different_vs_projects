#include <iostream>

extern "C" int asm_factorial(int number);

int factorial(int number) {
    int result = 1;
    while (number > 1) {
        
        result *= number;
        number--;
    }
    return result;
}
int main() {

    std::cout << factorial(6) << "\n";
    std::cout << asm_factorial(6) << "\n";

};
