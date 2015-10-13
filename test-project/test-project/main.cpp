#include <iostream>

void pause(){
	std::cin.sync();
	std::cin.ignore();
}

int main(){
	atexit(pause);
	for (int n=0;n<5;++n){
		std::cout << "Hello World!" << std::endl;
	}
	return EXIT_SUCCESS;
}