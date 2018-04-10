#ifndef saturn_hpp
#define saturn_hpp

#include <stdio.h>
void sample_func();

class saturn
{
public:
  saturn();
  saturn(int rings, int moons);
  int get_rings() const;
  int set_rings() ;
  int get_moons() const;
  int set_moons() ;



private:
  int x, y;
};

#endif 