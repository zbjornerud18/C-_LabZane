#include <iostream>
#include "planet.hpp"
#include "earth.hpp"
#include "saturn.hpp"




using namespace std;
int main (){
	int x, y;

	cout << "Enter x and y value for gravity and size: ";
	cin >> x >> y;

	Planet pl(x,y);

	cout << "gravity is " << pl.get_grav() << ", size is " << pl.get_size();

	earth ea(x,y);
	cout << "population is " << ea.get_pop() << ", amount of moons are  " << ea.get_moons();


	saturn sa(x,y);
	cout << "rings are " << sa.get_rings() << ", amount of moons are  " << sa.get_moons();


	return 0;
}