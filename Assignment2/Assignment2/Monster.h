#pragma once
#include <string>
using namespace std;

class Player;

class Monster
{
public:
	Monster(string n)
	{
		setName(n);
		setHP(10);
		setATK(30);
		setDEF(10);
		setSPD(10);
	}
	void attack(Player* target)
	{
		int DMG = getATK() - target->getDEF();

		if (DMG <= 0)
		{
			DMG = 1;
		}

		cout << getName() << "으로부터" << DMG << "의 데미지를 받았습니다." << endl;
		target->setHP(target->getHP() - DMG);

		if (target->getHP() > 0)
		{
			cout << "남은 HP: " << target->getHP() << endl;
		}
		
		else
		{
			cout << "플레이어의 체력이 0이 되어 패배하였습니다..." << endl;
		}
	}
	string getName()
	{
		return name;
	}
	int getHP()
	{
		return HP;
	}
	int getATK()
	{
		return ATK;
	}
	int getDEF()
	{
		return DEF;
	}
	int getSPD()
	{
		return SPD;
	}
	void setName(string n)
	{
		name = n;
	}
	void setHP(int hp)
	{
		HP = hp;
	}
	void setATK(int atk)
	{
		ATK = atk;
	}
	void setDEF(int def)
	{
		DEF = def;
	}
	void setSPD(int spd)
	{
		SPD = spd;
	}
protected:
	string name;
	int HP;
	int ATK;
	int DEF;
	int SPD;
};