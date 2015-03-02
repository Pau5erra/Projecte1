#ifndef POINT
#define POINT

class Point
{
public:
	float x, y;
public:

	Point();
	Point(float, float);

	void setZero();
	void negate();

	bool isxyZero() const;

	float distanceTo(const Point&) const;

	const Point& operator+ (const Point&) const;
	const Point& operator- (const Point&) const;
	const Point& operator+= (const Point&);
	const Point& operator-= (const Point&);
	const Point& operator= (const Point);
	bool operator== (const Point&) const;
	bool operator!= (const Point&) const;


private:
};
#endif