#include "GameState.h"
#include "GameClient.h"
#include <iostream>

using namespace std;

int main() {
  GameState* gs = new GameState();
  GameClient gc(gs);
  gc.startGame();
  
  return 0;
}
