#pragma once
class AActor
{
public:	//interface ����ϴ� ��
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

