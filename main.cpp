#include <iostream>

using namespace std;

class Hourglass{//створення класу
public:
    float width, height;
    Hourglass();//ініціалізація конструктору без параметрів
    Hourglass(float, float);//ініціалізація конструктору з параметрами
    float get_sides();//ініціалізація методу для отримання значень ширини та висоти пісочного годинника
    float get_area();//ініціалізація методу для обчислення площі пісочного годинника
};

Hourglass::Hourglass(){//екземпляр першого конструктора(без параметрів)
    width = height = 0;
}

Hourglass::Hourglass(float a, float b){//екземпляр другого конструктора(з параметрами а та b)
    width = a;
    height = b;
}

float Hourglass::get_sides(){//метод для вводу значень ширини та висоти
    cout << "Enter the width: ";
    cin >> width;
    cout << "Enter the height: ";
    cin >> height;
}

float Hourglass::get_area(){//метод для обчислення площі пісочного годинника
    float area = (width * height) / 2;
    return area;
}

void print_sqrt(){//функція для виводу усіх даних на екран
    Hourglass hourglass;
    hourglass.get_sides();
    cout << "Width: " << hourglass.width << endl;
    cout << "Height: " << hourglass.height << endl;
    cout << "Area: " << hourglass.get_area() << endl;
}

int main(){
    print_sqrt();
    return 0;
}