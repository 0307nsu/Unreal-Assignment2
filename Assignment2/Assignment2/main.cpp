#include <iostream>
#include <string>
#include <limits>
#include "Player.h"
#include "Warrior.cpp"
#include "Magician.cpp"
#include "Thief.cpp"
#include "Archer.cpp"
#include "Monster.h"

using namespace std;

int main()
{
	Player* player = nullptr;
	Monster* monster = new Monster("슬라임");
	int num;
	string name;

	cout << "플레이어의 이름을 입력하세요: ";
	cin >> name;

	while (true)
	{
		cout << "1.전사 / 2.마법사 / 3.도적 / 4.궁수" << endl;
		cin >> num;
		if (num == 1)
		{
			player = new Warrior(name);
			break;
		}

		else if (num == 2)
		{
			player = new Magician(name);
			break;
		}

		else if (num == 3)
		{
			player = new Thief(name);
			break;
		}

		else if (num == 4)
		{
			player = new Archer(name);
			break;
		}

		else
		{
			cout << "올바른 입력값이 아닙니다. 다시 입력하세요." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}

	player->attack();
	player->printPlayerStatus();

	while (true)
	{
		player->attack(monster);
		if (monster->getHP() <= 0) break;
		monster->attack(player);
		if (player->getHP() <= 0) break;
	}
	
	if (player != nullptr)
	{
		delete(player);
	}

	if (monster != nullptr)
	{
		delete(monster);
	}

	return 0;
}