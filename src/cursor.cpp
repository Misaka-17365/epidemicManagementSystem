#include <stdio.h>
#include "cursor.h"

const wchar_t* title = L"������ع���";
// ���ڴ�С

_cursor cursor;
_cursor::_cursor()
{
	cursorHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	coord.X = 0;
	coord.Y = 0;


	// ���Ʊ���
	SetConsoleTitle(title);
	// ���ƴ��ڴ�С
	system("mode con cols=80 lines=30");
}

// �ı����λ��
void _cursor::changePosition(SHORT x, SHORT y)
{
	this->coord.X = x;
	this->coord.Y = y;
	SetConsoleCursorPosition(cursorHandle, this->coord);
}

// �ı�����ͱ�����ɫ
void _cursor::changeColor(int a)
{
	SetConsoleTextAttribute(this->cursorHandle, a | 0x0008);
}


// ���ƿ��ľ���
void _cursor::drawRec(int a, int b, const char* s)
{

	for (int i = 0; i < a; i++)
	{
		printf("%s", s);
		this->changePosition(coord.X, coord.Y + b);
		printf("%s", s);
		this->changePosition(coord.X + strlen(s), coord.Y - b);
	}
	changePosition(coord.X - a, coord.Y);
	for (int i = 0; i < b; i++)
	{
		printf("%s", s);
		this->changePosition(coord.X + a * strlen(s), coord.Y);
		printf("%s", s);
		this->changePosition(coord.X - a * strlen(s), coord.Y + 1);
	}
	this->changePosition(coord.X + a * strlen(s), coord.Y);
	printf("%s", s);
}

void _cursor::drawLine(int a, const char* s)
{
	for (int i = 0; i < a; i++)
	{
		printf("%s", s);
		this->changePosition(coord.X + strlen(s), coord.Y);
	}
}

void _cursor::drawRow(int a, const char* s)
{
	for (int i = 0; i < a; i++)
	{
		printf("%s", s);
		this->changePosition(coord.X, coord.Y + 1);
	}
}
