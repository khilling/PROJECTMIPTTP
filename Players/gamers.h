#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "../Player.h"
class Gamer: public Player{
public:
  std::vector<Area> available;
  std::vector<Area> conquere;
  int score;
  Area Base;
  std::string name;
  Gamer (Area &Base): Base(Base) {
    std::cout << "Каково ваше имя?";
    std::cin >> name;
    score = 0;

  }
  void attack(int index_area){
    Area target = available[index_area];
    if (target.question->get_question()){
      conquere.push_back(target);
    }
  }
};
