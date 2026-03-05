#pragma once
#include <iostream>
#include "Player.h"
#include "Monster.h"

class Thief : public Player
{
public:
	Thief(string n) : Player(n, "Thief") {}
	void attack()
	{
		cout << "단검을 던집니다!" << endl;
	}
	void attack(Monster* target)
	{
		int DMG = getATK() / 5 - target->getDEF();

		if (DMG <= 0)
		{
			DMG = 1;
		}

		for (int i = 0; i < 5; ++i)
		{
			cout << target->getName() << "에게 단검으로" << DMG << "데미지를 입혔습니다." << endl;
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