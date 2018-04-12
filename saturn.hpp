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
  void set_rings(int x) ;
  int get_moons() const;
  void set_moons(int y) ;



private:
  int rings, moons;
};

#endif 