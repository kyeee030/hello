#ifndef SOLDIERENEMY_HPP
#define SOLDIERENEMY_HPP
#include "Enemy.hpp"

class SoldierEnemy : public Enemy {
public:
	static const int cost = 2;
	SoldierEnemy(int x, int y);
};
#endif // SOLDIERENEMY_HPP
