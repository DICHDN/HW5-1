/*
# Задача 1. Фигуры. Количество сторон
В этом задании вы построите первую простую иерархию классов для заданной предметной области.

Предметная область выглядит следующим образом: есть сущность фигура. Фигуры бывают двух типов: треугольник и четырёхугольник. У фигуры есть количество сторон. Для неизвестной фигуры будем считать это количество равным нулю. У треугольника три стороны, у четырёхугольника четыре стороны. У любой фигуры мы хотим узнавать количество её сторон, но мы не должны быть способны **изменить** количество сторон для заданной фигуры извне.

Задача: спроектировать и реализовать классы, описывающие предметную область. Продемонстрируйте их работу: создайте по одному экземпляру каждого класса и выведите информацию о количестве его сторон на консоль.

### Пример работы программы
#### Консоль
```
Количество сторон:
Фигура: 0
Треугольник: 3
Четырёхугольник: 4
```

*/



#include <iostream>
#include <windows.h>
#include <string>

class figura
{
protected:
    int field1;
    std::string name;

public:
    figura()
    {
        this->field1 = 0;
        this->name = "точка";
    }
    int get_sides_count() 
    { 
        return field1;    
    }
    std::string get_name()
    {
        return name;
    }
};
class triangle : public figura
{
public:
    triangle()
    {
        this->field1 = 3;
        this->name = "треугольник";
    }
};
class quadrilateral : public figura
{
public:
    quadrilateral()
    {
        this->field1 = 4;
        this->name = "четырехугольник";
    }
};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    figura dot;
    triangle tri;
    quadrilateral quadro;

    std::cout << "Простая фигура с количеством сторн " << dot.get_sides_count() << " - это "  << dot.get_name() << std::endl;
    std::cout << "Простая фигура с количеством сторн " << tri.get_sides_count() << " - это " << tri.get_name() << std::endl;
    std::cout << "Простая фигура с количеством сторн " << quadro.get_sides_count() << " - это " << quadro.get_name() << std::endl;


    return 0;
}

