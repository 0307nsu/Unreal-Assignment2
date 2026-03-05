#pragma once
#include <iostream>
#include "Player.h"
#include "Monster.h"

class Archer : public Player
{
public:
	Archer(string n) : Player(n, "Archer") {}
	void attack()
	{
		cout << "화살을 쏩니다!" << endl;
	}
	void attack(Monster* target)
	{
		int DMG = getATK() / 3 - target->getDEF();

		if (DMG <= 0)
		{
			DMG = 1;
		}

		for (int i = 0; i < 3; ++i)
		{
			cout << target->getName() << "에게 화살로" << DMG << "데미지를 입혔습니다." << endl;
			target->setHP(target->getHP() - DMG);
		}

		if (target->getHP() > 0)
		{
			cout << target->getName() << "의 남은 HP: " << target->getHP() << endl;
		}

		else
		{
			cout << "축하합니다! 승리하였습니다!" << endl;
		}
	}
};