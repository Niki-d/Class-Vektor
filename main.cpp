#include<iostream>
#include<cmath>
#include"vektor.h"

int main()
{
    vektor* v1 = new vektor(5,5);                                                      // создание вектора в декартовых координатах (по умолчанию)
    vektor* v2 = new vektor(7.07107,45, 'p');                                          // создание вектора в полярных координатах 
    
    std::cout << "\tVektor v1" << std::endl << *v1 << std::endl << std::endl;           
    std::cout << "\tVektor v2" << std::endl << *v2 << std::endl << std::endl;            

    vektor result;
    result = *v1 + *v2;                                                                                      // сложение векторов    
    std::cout << "\tSumma v1 and v2" << std::endl << result << std::endl << std::endl;

    result = (*v1) * 3;                                                                                      // умножение вектора на число
    std::cout << "\tMultiplication v1 and number(int)" << std::endl << result << std::endl << std::endl;

    vektor* v3 = new vektor(5,0);
    vektor* v4 = new vektor(sqrt(3),1);
    multiplication multi;                                                                                    // структура, содержащая векторное и скалярное произведения
    multi = (*v3) * (*v4);                                                                                   // умножение вектора на вектор
    std::cout << "Scalar multiplication v3 and v4 = " << multi.multi_scalar << std::endl;
    std::cout << "Vektor multiplication v3 and v4 = " << multi.multi_vek << std::endl;
    std::cout << std::endl;

    vektor v5(10,10);
    v5 = -v5;
    std::cout << "\tInversion vektor v5" << std::endl << v5 << std::endl << std::endl;
}

