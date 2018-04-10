#include <iostream>
#include "saturn.hpp"
using namespace std;

saturn::saturn(){
	rings = 0;
	moons = 0;
}

saturn::saturn(int x, int y){
	rings = x;
	moons = y;
}
int Planet::get_rings() const
{
	return rings;
}

int Planet::set_rings(int x) {
	rings = x;
}

int Planet::set_moons(int y) {
	moons = y;
}

int Planet::get_moons() const{
	return moons;
}