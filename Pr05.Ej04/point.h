/*
 * point.h
 *
 *  Created on: 23 abr. 2020
 *      Author: Aritz
 */

#ifndef POINT_H_
#define POINT_H_

class Point {
private:
	float x, y;

public:
	Point(int x, int y);
	void setX(float x);
	void setY(float y);
	float getX() const;
	float getY() const;
	void sumar(const Point &p);
};

#endif /* POINT_H_ */
