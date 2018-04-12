#include "planet.hpp"

Planet::Planet(){
	grav = 0;
	size = 0;
}

Planet::Planet(int x, int y){
	grav = x;
	size = y;
}
int Planet::get_grav() const
{
	return grav;
}

void Planet::set_grav(int x) {
	grav = x;
}

void Planet::set_size(int y) {
	size = y;
}

int Planet::get_size() const{
	return size;
}