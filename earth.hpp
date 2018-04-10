#ifndef earth_hpp
#define module_hpp

#include <stdio.h>
void sample_func();

class earth
{
public:
  earth();
  earth(int pop, int moons);
  int get_pop() const;
  int set_pop() ;
  int get_moons() const;
  int set_moons() ;



private:
  int x, y;
};

#endif