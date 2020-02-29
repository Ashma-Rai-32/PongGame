#include"enumeDir.h"
#include "cBall.h"



cBall::cBall(int posX, int posY)
{
    originalX = posX;
    originalY = posY;
    x = posX; 
    y = posY;
    direction = eDir::STOP;
}

void cBall::Reset()
{
    x = originalX; y = originalY;
    direction =eDir:: STOP;
}

void cBall::changeDirection(eDir d)
{
    direction = d;
}

void cBall::randomDirection()
{
    direction = (eDir)((rand() % 6) + 1);
}

inline int cBall::getX()
{
    return x;
}

inline int cBall::getY()
{
    return y;
}

inline eDir cBall::getDirection()
{
    return direction;
}
 ostream& operator<<(ostream& o, cBall c)
{
    o << "Ball [" << c.x << "," << c.y << "][" <<c.direction << "]";
    return o;
}

void cBall::Move()
{
    switch (direction)
    {
    case eDir::STOP:
        break;
    case eDir::LEFT:
        x--;
        break;
    case eDir::RIGHT:
        x++;
        break;
    case eDir::UPLEFT:
        x--; y--;
        break;
    case eDir::DOWNLEFT:
        x--; y++;
        break;
    case eDir::UPRIGHT:
        x++; y--;
        break;
    case eDir::DOWNRIGHT:
        x++; y++;
        break;
    default:
        break;
    }
}


