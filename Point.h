//
// Created by eliana on 1/10/19.
//

#ifndef EVENDERCH2_POINT_H
#define EVENDERCH2_POINT_H


class Point {
public:
    int x;

    int y;

    Point(int x, int y) : x(x), y(y) {}

    virtual int getPointX();

    virtual int getPointY();
};


#endif //EVENDERCH2_POINT_H