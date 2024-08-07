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
	//APlayer* Player; //Player를 가리킴
	//new APlayer; // Aplayer의 생성자만 실행, 소멸 시키려면 주소값을 저장시켜놔야해
	APlayer* Player = new APlayer();	//주소값을 저장시켜놔야 해당하는 값을 delete를 할 수 있어
	vector<AGoblin*> Goblins;
	vector<ASlime*> Slimes;
	vector<ABoar*> Boars;
					//overloading 함수 이름은 같은데 인자가 다를 때 인자에 맞춰서 함수를 적용하는 방식이 overloading이라고 함
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
	delete Player;					//delete를 해줘야 소멸자가 출력됨
	

	return 0;
}