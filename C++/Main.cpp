#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// " " : ������������ ã�ƺ���
// < > : �����Ϸ��� ������ �������� ã�ƺ���
// Basic : �迭 �ε����� 1���� ������


using namespace std;

#define LEFT  75
#define RIGHT 77
#define UP    72 
#define DOWN  80 


//void : ���°� ������ ���� �ʴ�.
// stack
// ���α׷�ī����(PC)

int map[10][10]{
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,2},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1},

};
//����

int PlayerX = 1;
int PlayerY = 1;

int Input()
{
	int KeyInput = getch();

	return KeyInput;

}
void Tick(int _KeyInput)
{
	switch (_KeyInput)
	{
	case RIGHT:
	{
		PlayerX++;
		break;
	}
	case LEFT:
	{
		PlayerX--;
		break;
	}
	case UP:
	{
		PlayerY--;
		break;
	}
	case DOWN:
	{
		PlayerY++;
		break;
	}
	default:
		break;
	}
	
}

void Draw()
{
	system("cls");

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (i == PlayerX && j == PlayerY)
				cout << "@";
			else
				cout << map[i][j];

		}
		cout << endl;
	}


}

int main()
{

	while (1)
	{
		int keyInput = Input();
		Tick(keyInput);
		Draw();	
		if (PlayerX == 1 && PlayerY == 9)
		{
			system("cls");
			cout << "Ż��" << endl;
			break;
		}
	}

	return 0;

} 