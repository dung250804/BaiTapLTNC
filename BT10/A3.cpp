#include <iostream>

using namespace std;

struct point
{
	double x;
	double y;
};

point mid_point(const point &a, const point &b)
{
	point c;
	c.x = (a.x + b.x)/2;
	c.y = (a.y + b.y)/2;
	return c;
}

void print(point a)
{
	cout <<"(" << a.x << "," << a.y << ")";
}

int main ()
{
	point a;
	point b;
	cin >> a.x >> a.y >> b.x >> b.y;
	point c = mid_point(a, b);
	print(c);
}

