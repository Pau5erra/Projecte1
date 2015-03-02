#include "Math.h"
#include "Point.h"

Point::Point()
{
	setZero();
}

Point::Point(float _x, float _y)
{
	x = _x;
	y = _y;
}

float Point::distanceTo(const Point& a) const
{
	return hypot((x - a.x), (y - a.y));
}

void Point::setZero()
{
	x = y = 0.0f;
}

bool Point::isxyZero() const
{
	return x == 0 && y == 0;
}

void Point::negate()
{
	x = -x;
	y = -y;
}

const Point& Point::operator+ (const Point& a) const
{
	Point tmp;
	tmp.x = x + a.x;
	tmp.y = y + a.y;

	return tmp;
}

const Point& Point::operator- (const Point& a) const
{
	Point tmp;
	tmp.x = x - a.x;
	tmp.y = y - a.y;

	return tmp;
}

const Point& Point::operator+= (const Point& a)
{
	x += a.x;
	y += a.y;

	return (*this);
}

const Point& Point::operator-= (const Point& a)
{
	x -= a.x;
	y -= a.y;
}

const Point& Point::operator= (const Point a)
{
	x = a.x;
	y = a.y;
}

bool Point::operator== (const Point& a) const
{
	return a.x == x && a.y == y;
}

bool Point::operator!= (const Point& a) const
{
	return a.x != x || a.y != y;
}