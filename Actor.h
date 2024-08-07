#pragma once
class AActor
{
public:	//interface 대면하는 애
	AActor();
	~AActor();

	void Move();

	int GetHP() { return HP; }
	void SetHP(int NewHP)
	{
		if (NewHP >= 0)
		{
			HP = NewHP;
		}
	}
protected:
	int HP;

private:
	
};

