#pragma once
#include <string>
#include <vector>
#include "Areas.h"


class Player {
public:
  std::string name;
  int score;
  int location;
  
  std::vector<Area> available;
  std::vector<Area> conquere;

  virtual void attack(int& index);

};
/*

struct Player{
  int  name;
  int  score;
  int  Base;
  int  std::string name;
  void attack();
};
*/
