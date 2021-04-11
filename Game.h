//
// Created by lepad on 21.03.2021.
//
#include "Player.h"
#include <iostream>
#include <string>
#include <vector>
#include "Areas.h"
#include "Players/gamers.h"
#ifndef TPPROJECT__GAME_H_
#define TPPROJECT__GAME_H_
const int inf = 100000000; //////////////////////
class Game {
public:
  std::vector<Area> area;
  std::vector<Gamer> players;
  std::vector<std::string> themes{"Art","News","Literature","Programming","English","Math","Phisics"};
  int turns;
  void StartGame() {
    std::cout << "Игра началась";
    players.push_back(Gamer(area[1]), Gamer(area[1]));
    std::cout << "Как долго играем?";
    std::cin >> turns;
    for (int i = 0; i < turns; ++i) {
      turn(players[i % players.size()]);
    }

    int max_score = 0;
    int winner;
    for (int i = 0; i < players.size(); ++i) {
      if (max_score < players.score) {
        winner = i;
        max_score = players.score; ////////////////incapsulate
      }
    }
    std::cout << "Победил " << players[winner].name;
  }
  void makeAreas(){
    for(int i = 0; i < 6; ++i){
      area.push_back(Area(themes[i], i));
    }
  }
  void turn(Player player) {
    std::cout << "Выберите область для атаки "
              << "\n";
    for (int i = 0; i < player.available.size(); ++i) {
      std::cout << i << ") " << player.available[i].name << "\n";
    }
    int attaking;
    std ::cin >> attaking;
    player.attack(attaking);
  }
};

#endif // TPPROJECT__GAME_H_
