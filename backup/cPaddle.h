#pragma once
#include"cBall.h"
#include "enumeDir.h"
class cPaddle
{
    
    private:
        int x, y;
        int originalX, originalY;
    public:
        cPaddle();
       
        cPaddle(int posX, int posY);
       
        inline void Reset();
        inline int getX();
        inline int getY();
        inline void moveUp();
        inline void moveDown();
        friend ostream& operator<<(ostream& o, cPaddle c);
       
    
};

