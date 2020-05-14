#include "main.h"


int find_str_entry(std::string in, std::string str) {
	int goods = 0;
	int counter = 0;
	for (int i = 0, j = 0, len = in.length(); i < len; i++) {
		if (str[j++] == in[i]) {
			goods++;
			if (goods == str.length()) {
				return i - str.length() + 1;
			}
		}
		else {
			i = ++counter;
			j = 0;
			goods = 0;
		}
	}
	return -1;
}

int main() {
	setlocale(LC_ALL, "RUS");
	std::string in = "Hello world";
	std::cout << "base string: " << in << std::endl;
	std::cout << "entry of 'небу': " << find_str_entry(in, "world") << std::endl;
	std::cout << "entry of 'андрей': " << find_str_entry(in, "not exist") << std::endl;
	std::cin.get();
}