#ifndef CBALL_H
#define CBALL_H

#include <iostream>
#include <time.h>
#include <conio.h>
#include<fstream>
#include "enumeDir.h"
using namespace std;






class cBall
{
 
    int x, y;
    int originalX, originalY;
    eDir direction;
public:

    cBall(int posX, int posY);
    void Reset();
    void changeDirection(eDir d);
    void randomDirection();
    inline int getX();
    inline int getY();
    inline eDir getDirection();
    friend ostream& operator<<(ostream& o, cBall c);
    void Move();
  
};

#endif

