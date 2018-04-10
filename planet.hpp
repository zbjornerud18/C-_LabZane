#ifndef planet_hpp
#define planet_hpp

class Planet
{
public:
  Planet();
  Planet(int grav, int size);
  int get_grav() const;
  int set_grav() ;
  int get_size() const;
  int set_size() ;



private:
  int x, y;
};

#endif