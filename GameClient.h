#pragma once

#include <iostream>
#include "Player.h"
#include "EnemyFactory.h"
#include "GameState.h"

using namespace std;

class GameClient{
public:
  //can we remove the GameState* param for GameClient constructor?
    GameClient(GameState* state_in);
    void startGame();
    void printGameState(int player_pos);
    
private:
    Player* player;
    EnemyFactory* factory;
    GameState* state;
    void updateEnemyMap(int player_pos);
};
