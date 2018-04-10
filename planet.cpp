#include "planet.hpp"

Planet::Planet(){
	int grav = 0;
	int size = 0;
}

Planet::Planet(int x, int y){
	grav = x;
	size = y;
}
int Planet::get_grav() const
{
	return grav;
}

int Planet::set_grav(int x) {
	grav = x;
}

int Planet::set_size(int y) {
	size = y;
}

int Planet::get_size() const{
	return size;
}