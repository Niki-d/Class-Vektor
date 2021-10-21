#include<iostream>
#include"vektor.h"
#include<cmath>
#define pi 3.14159265358979323846

vektor::vektor()
{
    del_x = 0;
    del_y = 0;
    angle = 0;
    modul = 0;
}

vektor::vektor(double x, double y, char s)
{
    if(s == 'd'){
        del_x = x;
        del_y = y;
        Dec_to_Pol();
    }

    if(s == 'p'){
        modul = x;
        angle = y;
        Pol_to_Dec();
    }

    if(s != 'p' && s != 'd'){
        std::cout << "Enter ERROR !!!";
    }
}

vektor::~vektor()            // т.к. мы не выделяем дин.память, то объект сам уничтожается или не нужно заполнять деконструктор
{

}

vektor vektor::operator*(int num)
{
    return vektor(num * del_x, num * del_y);            //вызов конструктора явно заданного с одним арументом по умолчанию
}

vektor operator*(int num, vektor v)
{
    return v * num; 
}

void vektor::Dec_to_Pol()
{
    modul = sqrt(del_x * del_x + del_y * del_y);                                                           
    angle = atan2(del_y,del_x)*180/pi;                                          // значение в градусах 
}

void vektor::Pol_to_Dec()
{
    del_x = modul * cos(angle*pi/180);
    del_y = modul * sin(angle*pi/180);
}

std::ostream& operator<<(std::ostream& os, vektor& v)
{
    os << "X : " << v.del_x << std::endl << "Y : " << v.del_y << std::endl << "Modul : " << v.modul << std::endl << "Angle : " << v.angle;
    return os;
}

vektor vektor::operator+(vektor& v)
{
    vektor result;
    result.del_x = del_x + v.del_x;
    result.del_y = del_y + v.del_y;
    result.Dec_to_Pol();

    return result;
}

vektor vektor::operator-()
{
    vektor result;
    result.del_x = -del_x;
    result.del_y = -del_y;
    result.Dec_to_Pol();

    return result;
}

multiplication vektor::operator*(vektor& v)
{
    multiplication result;
    result.multi_scalar = del_x * v.del_x + del_y * v.del_y;
    result.multi_vek = modul * v.modul * sin(abs(angle - v.angle) * (pi/180));                          // т.к. sin принимает аргумент в радианной мере, то нужен дополнительный множитель pi/180
    return result;
}