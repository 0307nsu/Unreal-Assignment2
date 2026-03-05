#pragma once
#include <iostream>
#include "Player.h"
#include "Monster.h"

class Warrior : public Player
{
public:
	Warrior(string n) : Player(n, "Warrior") {}
	void attack()
	{
		cout << "검을 휘두릅니다!" << endl;
	}
	void attack(Monster* target)
	{
		int DMG = getATK() - target->getDEF();

		if (DMG <= 0)
		{
			DMG = 1;
		}

		cout << target->getName() << "에게 검으로" << DMG << "데미지를 입혔습니다." << endl;
		target->setHP(target->getHP() - DMG);

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