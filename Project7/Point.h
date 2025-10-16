#pragma once// файл дизайна
class Point
{
	// реализация класса
	int x;
	int y;

public:// интерфейс класса, прототипы методов
	Point();
	Point(int a, int b);
	void Init(int a, int b);
	void Init();  // ввод с клавиатуры
	void Print();

	static int count; // создаем статическое поле 

	void SetX(int a)
	{
		x = a;
	}
	void SetY(int a)
	{
		y = a;
	}
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}

};


