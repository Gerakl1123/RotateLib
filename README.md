# RotateLib
Библеотека для разворота двумернхы массивов на 90 и 180 предоставлю тестовый код и как еще подключить

//code test.cpp
#include "Rotate.h"

int main() {
    int rows = 3, cols = 3;
    Rotate rv(rows, cols, 100);

    cout << "Original matrix:\n";
    rv.PrintDisplay();

    rv.Rotate90();
    cout << "Matrix after 90 degree rotation:\n";
    rv.PrintDisplay();

    rv.Rotate180();
    cout << "Matrix after 180 degree rotation:\n";
    rv.PrintDisplay();

    return 0;
}
//end

если вы используете Vusial Studio Comminuty то ваш стандартный путь выглядет так C:\Users\ВАШ_ЮЗЕР\source\repos\Проект\Проект в моем случае C:\Users\German\source\repos\test\test

![изображение](https://github.com/user-attachments/assets/b0d029a7-d316-4044-8059-ffccf4c412ab)


если используете другую IDE просто киньте .h файл к вашему основному проекту cpp
далее подключите ее
 #include "rotate.h"
