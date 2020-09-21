#include <iostream>
#include <iomanip>
#include <cmath>
#include <random>


int main(){
	std::random_device rd;
	std::minstd_rand rnd{rd()};
	for (unsigned i = 0 ; i < 10; ++i){
		std::cout << rnd() << ' ';
		}
	return 0;

}


