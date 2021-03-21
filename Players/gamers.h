#include <iostream>
#include <string>
#include <vector>
#include "../Player.h"
class Gamer: public Area{
  std::vector<Area> available;
  std::vector<Area> conquere;
  int score;
  Area Base;
  std::string name;
  void createPlayer(Area Base) {
    std::cout << "Каково ваше имя?";
    std::cin >> name;
    this->Base = Base
  }
  void attack(int index_area, ){
    Area target = available[index_area];
    if (target.get_question() == true){
      conquere.push_back(target);
    }
  }
};