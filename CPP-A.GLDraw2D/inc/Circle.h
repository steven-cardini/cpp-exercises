/*
 * Circle.h
 *
 *  Created on: 09.04.2016
 *      Author: cst
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Figure.h"
#include "Point.h"

using namespace std;


class CCircle : virtual public CFigure {
  private:
    CPoint PM;
    double R;

  public:
    static unsigned long ulCount;
    static void listCount();

    CCircle();
    CCircle(double, double, double);
    CCircle(CPoint, double);
    CCircle(CPoint, CPoint);
    CCircle(const CCircle&);
    CCircle operator+(const CCircle&);
    ~CCircle();

    void set(double, double, double);
    void set(CPoint, CPoint);
    void list(void);
	  void draw(void);
};


#endif /* CIRCLE_H_ */
