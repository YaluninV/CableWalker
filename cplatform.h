#ifndef CPLATFORM_H
#define CPLATFORM_H
#include <string.h>

class CLog
{

public:
    CLog();

};

CLog::CLog()
{

   ;
}










class CFlyingPlatform
{

public:
    CFlyingPlatform();

int motorquart;

int platformweight;

int capacity;

float FlyingCoordinates[6];

//string Datatable;

CLog Flyinglog;

int up();

int down();

int left();

int right();

int forward();

int backward();

int turn_left();

int turn_right();

int connect();

int selfcoordinates();

};

CFlyingPlatform::CFlyingPlatform()
{

   ;
}


int CFlyingPlatform::up()
{


return (0);
}

int CFlyingPlatform::down()
{


return (0);
}


int CFlyingPlatform::left()
{


return (0);
}

int CFlyingPlatform::right()
{


return (0);
}

int CFlyingPlatform::forward()
{


return (0);
}

int CFlyingPlatform::backward()
{


return (0);
}

int CFlyingPlatform::turn_left()
{


return (0);
}

int CFlyingPlatform::turn_right()
{


return (0);
}

int CFlyingPlatform::connect()
{


return (0);
}

int CFlyingPlatform::selfcoordinates()
{


return (0);
}



class CWheeledPlatform
{

public:
    CWheeledPlatform();

int motorQuant;

float speed;

float FlyingCoordinates[6];

int wforward();

int wbackward();

int selfcoordinates();

int set_speed(float Sp) {speed = Sp; return(0);};



};

CWheeledPlatform::CWheeledPlatform()
{

   ;
}

int CWheeledPlatform::wforward()
{

return (0);
}

int CWheeledPlatform::wbackward()
{

return (0);
}

int CWheeledPlatform::selfcoordinates()
{

return (0);
}


class CPlatform
{

public:
    CPlatform();

};

CPlatform::CPlatform()
{

   ;
}




#endif // CPLATFORM_H
