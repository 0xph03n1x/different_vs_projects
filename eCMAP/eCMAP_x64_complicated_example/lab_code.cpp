#include <iostream>

extern "C" long long asm_factorial(long long number);
extern "C" void asm_copy_reversed(const char* source, char* dest);

long long factorial(long long number) {
	long long result = 1;
	long long number = 1;
	if (number > 1) {
		do {
			result *= number;
			number--;
		} while (number > 0);
	}
	return result;
};

void copy_reversed(const char* source, char* dest)
{
	int source_len = strlen(source);
	for (int i = source_len; i > 0; i--) {
		dest[i - 1] = source[source_len - i];
	};
	dest[source_len] = NULL;
};


int main() {
	const char* sample = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//maximum number of characters allowed in sample is 1000 - 1 = 999
	char reversed[1000];
	std::cout << factorial(13) << "\n";
	std::cout << asm_factorial(13) << "\n";
	reversed[0] = NULL;
	copy_reversed(sample, reversed);
	std::cout << reversed << "\n";
	asm_copy_reversed(sample, reversed);
	std::cout << reversed << "\n";
};