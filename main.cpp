#include "Func.h"


void checkLuckyNumber(int number, bool& isLucky) {
    if (number >= 100000 && number <= 999999) {
        int firstThreeDigits = number / 1000;
        int lastThreeDigits = number % 1000;

        int sumFirstThreeDigits = 0;
        int sumLastThreeDigits = 0;


        while (firstThreeDigits > 0) {
            sumFirstThreeDigits += firstThreeDigits % 10;
            firstThreeDigits /= 10;
        }

        while (lastThreeDigits > 0) {
            sumLastThreeDigits += lastThreeDigits % 10;
            lastThreeDigits /= 10;
        }

        isLucky = (sumFirstThreeDigits == sumLastThreeDigits);
    }
    else {
        isLucky = false;
    }
}
int main() {
    system("chcp 1251");
    system("cls");
    int num;
    bool isLuckyResult;

    std::cout << "Введіть шестизначне число для перевірки: ";
    std::cin >> num;

    checkLuckyNumber(num, isLuckyResult);

    if (isLuckyResult) {
        std::cout << num << " є 'щасливим' числом." << std::endl;
    }
    else {
        std::cout << num << " не є 'щасливим' числом." << std::endl;
    }

    return 0;
}
