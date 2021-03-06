/*
  level.h
*/

#ifndef LEVEL_H
#define LEVEL_H

#include <string>

#include "global.h"

class Graphics;
struct SDL_Texture; 

class Level
{

 private:

  std::string _mapName;
  Vector2 _spawnPoint;
  Vector2 _size;
  SDL_Texture* _backgroundTexture;

  void loadMap(std::string mapName, Graphics &graphics) ; // loads the map

 public:

  Level();
  Level(std::string mapName, Vector2 spawnPoint, Graphics &graphics);
  ~Level();

  void update(int elapsedTime);
  void draw(Graphics &graphics);
 
};
 



#endif
