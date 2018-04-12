#ifndef planet_hpp
#define planet_hpp

class Planet
{
public:
  Planet();
  Planet(int grav, int size);
  int get_grav() const;
  void set_grav(int x);
  int get_size() const;
  void set_size(int y);



private:
  int grav, size;
};

#endif