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
  void set_pop(int x) ;
  int get_moons() const;
  void set_moons(int y) ;



private:
  int pop, moons;
};

#endif