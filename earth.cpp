#include <iostream>
#include "earth.hpp"
using namespace std;

earth::earth(){
	pop = 0;
	moons = 0;
}

earth::earth(int x, int y){
	pop = x;
	moons = y;
}
int earth::get_pop() const
{
	return pop;
}

void earth::set_pop(int x) {
	pop = x;
}

void earth::set_moons(int y) {
	moons = y;
}

int earth::get_moons() const{
	return moons;
}