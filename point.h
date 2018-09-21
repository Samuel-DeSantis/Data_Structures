#ifndef _POINT_H
#define _POINT_H

#include <iostream>


class Point
{
	public:
		Point(int x, int y); // Constructor
		~Point(void);		 // Destructor

		Point operator+(Point );
		Point operator-(Point );



		friend istream operator>>(istream &, Point &);
		friend ostream operator<<(ostream &, Point &);
	private:


}

#endif