#include <iostream>
#include <string>
setlocale(LC_ALL, "Russian");


int main() {
    std::string binNumber;
    std::cout << "Введите число в двоичной системе счисления: ";
    std::cin >> binNumber;

    for (char ch : binNumber) {
        if (ch != '0' && ch != '1') {
            std::cout << "Ошибка,введено не двоичное число :(" << std::endl;
            return;
        }
    }

    if (binNumber.empty()) {
        std::cout << "Ошибка,не было введено число" << std::endl;
        return;
    }

    char lastB = binNumber.back();

    if (lastB == '0') {
        std::cout << "Число нечетное" << std::endl;
    }
    else {
        std::cout << "Число четное" << std::endl;
    }

    return;
}