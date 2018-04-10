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
int Planet::get_pop() const
{
	return pop;
}

int Planet::set_pop(int x) {
	pop = x;
}

int Planet::set_moons(int y) {
	moons = y;
}

int Planet::get_moons() const{
	return moons;
}