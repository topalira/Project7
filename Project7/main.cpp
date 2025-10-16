#include<iostream>
#include "Point.h"
using namespace std;

Point operator+ (int a, Point & b)
{
	Point res(a + b.GetX(), a + b.GetY());
	return res;
}

Point operator--(Point & b) // --a
{
	b.SetX(b.GetX() -2);
	b.SetY(b.GetY() -2);
	return b;
}
Point operator--(Point & b, int) // a--
{
	Point temp(b.GetX(),b.GetY());
	b.SetX(b.GetX() -2);
	b.SetY(b.GetY() -2);
	return temp;
}


Point operator- (int a, Point& b)
{
	Point res(a - b.GetX(), a - b.GetY());
	return res;
}
Point operator* (int a, Point& b)
{
	Point res(a * b.GetX(), a * b.GetY());
	return res;
}
Point operator/ (int a, Point& b)
{
	Point res(a / b.GetX(), a / b.GetY());
	return res;
}
Point operator* (Point& b, int a)
{
	Point res(a * b.GetX(), a * b.GetY());
	return res;
}

int main()
{
	Point a(1, 5), b(1, 5);
	a.Print();
	Point d = 10 + a;
	d.Print();
	--d;
	d.Print();

	Point d1 = 15 - a;
	d1.Print();
	Point d2 = 2 * a;
	d2.Print();
	Point d3 = 10 / a;
	d3.Print();
	Point d4 = a * 2;
	d4.Print();
	/*  Реализовать следующие глобальные перегрузки:
	Point a1 = 15-a;
	Point a2 = 2*a;
	Point a3 = 10/a;
	Point a4 = a*2;
	++a1;
	*/

}