#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Boar.h"
#include "Goblin.h"
#include "Slime.h"
#include <vector>
#include <stdlib.h>
#include <time.h>

void srand(unsigned int seed);
using namespace std;

int main()
{
	//APlayer* Player; //Player�� ����Ŵ
	//new APlayer; // Aplayer�� �����ڸ� ����, �Ҹ� ��Ű���� �ּҰ��� ������ѳ�����
	APlayer* Player = new APlayer();	//�ּҰ��� ������ѳ��� �ش��ϴ� ���� delete�� �� �� �־�
	vector<AGoblin*> Goblins;
	vector<ASlime*> Slimes;
	vector<ABoar*> Boars;
					//overloading �Լ� �̸��� ������ ���ڰ� �ٸ� �� ���ڿ� ���缭 �Լ��� �����ϴ� ����� overloading�̶�� ��
	srand(time(NULL));
	int rnd = rand() % 5;
	int rnd1 = rand() % 5;
	int rnd2 = rand() % 5;

	for (int i = 0; i < rnd; i++)
	{
		Goblins.push_back(new AGoblin);
	}
	for (int i = 0; i < rnd1; i++)
	{
		Slimes.push_back(new ASlime);
	}
	for (int i = 0; i < rnd2; i++)
	{
		Boars.push_back(new ABoar);
	}

	Player->Move();

	for (int i = 0; i < rnd; i++)
	{
		Goblins[i]->Move();
	}
	for (int i = 0; i < rnd1; i++)
	{
		Slimes[i]->Move();
	}
	for (int i = 0; i < rnd2; i++)
	{
		Boars[i]->Move();
	}
	
	for (int i = 0; i < Goblins.size(); i++)
	{
		delete Goblins[i];
	}
	for (int i = 0; i < Slimes.size(); i++)
	{
		delete Slimes[i];
	}
	for (int i = 0; i < Boars.size(); i++)
	{
		delete Boars[i];
	}
	delete Player;					//delete�� ����� �Ҹ��ڰ� ��µ�
	

	return 0;
}