#pragma once// ���� �������
class Point
{
	// ���������� ������
	int x;
	int y;

public:// ��������� ������, ��������� �������
	Point();
	Point(int a, int b);
	void Init(int a, int b);
	void Init();  // ���� � ����������
	void Print();

	static int count; // ������� ����������� ���� 

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


