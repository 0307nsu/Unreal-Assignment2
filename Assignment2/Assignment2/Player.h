#pragma once
#include <string>
using namespace std;

class Monster;

class Player
{
public:
	Player(string n, string j)
	{
		setName(n);
		setJob(j);
		setHP(10);
		setATK(30);
		setDEF(10);
		setSPD(10);
	}
	virtual void attack() = 0;
	virtual void attack(Monster* target) = 0;
	void printPlayerStatus()
	{
		cout << "--------------------------------" << endl;
		cout << "플레이어 이름: " << getName() << endl;
		cout << "플레이어 직업: " << getJob() << endl;
		cout << "플레이어 체력: " << getHP() << endl;
		cout << "플레이어 공격력: " << getATK() << endl;
		cout << "플레이어 방어력: " << getDEF() << endl;
		cout << "플레이어 스피드: " << getSPD() << endl;
		cout << "--------------------------------" << endl;
	}
	string getName()
	{
		return name;
	}
	string getJob()
	{
		return job;
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
	void setJob(string j)
	{
		job = j;
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
	string job;
	int HP;
	int ATK;
	int DEF;
	int SPD;
};