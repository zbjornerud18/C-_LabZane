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
int saturn::get_rings() const
{
	return rings;
}

void saturn::set_rings(int x) {
	rings = x;
}

void saturn::set_moons(int y) {
	moons = y;
}

int saturn::get_moons() const{
	return moons;
}