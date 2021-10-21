
Класс "Вектор" реализует некоторые операции с векторами в двухмерном пространстве xOy.
Приватные поля класса:
1) Декартовые координаты вектора;
2) Полярные(сферические) координаты. А именно модуль вектора (modul) и угол (angle).
Угол берётся между положительным направлением оси Ox и вектором.
 
При создании объекта класса "Вектор" мы в явной или в неявной форме говорим конструктору, что полученные им данные относятся к одной из двух системе координат.
Это может быть декартовая система (по умолчанию) или полярная (должны указать). 
Объект класса хранит информацию о координатах в двух системах, поэтому необходимо реализовать два метода, которые конвертируют одну систему в другую.
Приватные методы класса:
1) Из декартовой в полярную ( Dec_to_Pol() );
2) Из полярной в декартовую ( Pol_to_Dec() );

Данный класс "Вектор" реализует некоторые операции с векторами, а именно:
1) Сложение веторов;
2) Умножение вектора на число;
3) Умножение вектора на вектор (результат умножения будет возвращать тип struct, т.к. мы хотим записать векторное и скалярное произведения);
4) Инверсия вектора (умножение на -1).


main.cpp:
1) сначала созданы и выведены на консоль два одинаковых вектора v1 и v2, но оба заданы в разных координатах;
2) представлена и выведена на консоль сумма двух одинаковых векторов v1 и v2;
3) представлено и выведено на консоль произведение вектора на число(целое);
4) представлено и выведено на консоль произведение вектора на вектор;
5) представлена и выведена на консоль инверсия вектора.

Примечание: если угол вектора принимает отрицательное значение, это означает, что угол откладывается НЕ против часовой стрелки, а по часовой.

