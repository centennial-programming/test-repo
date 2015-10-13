#include <iostream>

void pause(){
	std::cin.sync();
	std::cin.ignore();
}

int main(){
	atexit(pause);
	std::cout << "Hello World!" << std::endl;
	return EXIT_SUCCESS;
}