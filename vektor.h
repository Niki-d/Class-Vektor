#pragma once

struct multiplication
{
    double multi_vek;
    double multi_scalar;
};


class vektor
{
private:
    //декартовые данные
    double del_x;
    double del_y;
    //полярные данные
    double angle;
    double modul;

    void Dec_to_Pol();
    void Pol_to_Dec();
public: 
    vektor();                                      //конструктор(по умолчанию)
    ~vektor();                                     //деструктор
    vektor(double x, double y, char s = 'd');      //конструктор явно заданный, причем один из аргументов задан по умолчанию, т.е. при вызове можно опустить этот аргумент

    vektor operator*(int num);                     //умножение на число
    friend vektor operator*(int num, vektor v);
    friend std::ostream& operator<<(std::ostream& os, vektor& v);
    vektor operator+(vektor& v);
    vektor operator-();
    multiplication operator*(vektor& v);

};