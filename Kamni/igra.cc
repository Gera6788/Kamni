#include <iostream>
#include <iomanip>
#include <chrono>
#include <random>


int main(){
	using clk = std::chrono::system_clock;

	std::minstd_rand rnd{unsigned(clk::now().time_since_epoch().count())};
	for (unsigned i = 0 ; i < 10; ++i){
		std::cout << rnd() << ' ';
		}
	return 0;

}


