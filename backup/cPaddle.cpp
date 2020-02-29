#include "cPaddle.h"
#include "enumeDir.h"
cPaddle::cPaddle()
{
    originalX = 0;
    originalY = 0;
    x = 0;
    y = 0;
    
}

cPaddle::cPaddle(int posX, int posY)
{
    originalX = posX;
    originalY = posY;
    x = posX;
    y = posY;
}

inline void cPaddle::Reset()
{
    x = originalX; y = originalY;
}

inline int cPaddle::getX()
 { return x; }

inline int cPaddle::getY()
{
    { return y; }
}

inline void cPaddle::moveUp()
{  y--; 
}

inline void cPaddle::moveDown()
{ y++; 
}

ostream& operator<<(ostream& o, cPaddle c)
{
        o << "Paddle [" << c.x << "," << c.y << "]";
        return o;
    
    // TODO: insert return statement here
}
