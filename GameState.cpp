#include "GameState.h"

GameState::GameState(){
  initSettings();
}

void GameState::initSettings(){
  int diff = 0;
  cout<<"Enter Number of Difficulty(1:ez,2:med,3:hard): ";
  cin>>diff;
  switch(diff){
  case 1:
    enemyDifficulty = difficultyEnum::EASY;
    numEnemies = 30;
  case 2:
    enemyDifficulty = difficultyEnum::MEDIUM;
    numEnemies = 20;
  case 3:
    enemyDifficulty = difficultyEnum::HARD;
    numEnemies = 10;
  }
  roundsRemaining = 10;
  fieldWidth = 40;
}

void GameState::resetState(){

}

difficultyEnum GameState::getDifficulty() {
    return enemyDifficulty;
}

int GameState::getRoundsRemaining() {
    return roundsRemaining;
}

int GameState::getFieldWidth(){
    return fieldWidth;
}

int GameState::decrementRounds() {
    return --roundsRemaining;
}

int GameState::getNumEnemies() {
    return numEnemies;
}
