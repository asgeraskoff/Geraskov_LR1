#include <iostream>
#include <string>

using namespace std;

int main() {
    unsigned long long X; // Для хранения натурального числа X
    int N; // Для хранения числа разрядов N

    cout << "Введите натуральное число X: ";
    cin >> X;

    // Преобразование числа X в строку для удобной работы с разрядами
    string X_str = to_string(X);

    cout << "Введите число N (меньше количества цифр в числе X): ";
    cin >> N;

    // Проверка корректности ввода
    if (N <= 0 || N >= X_str.length()) {
        cout << "Ошибка: N должно быть больше 0 и меньше количества цифр в числе X (" << X_str.length() << ")." << endl;
        return 1;
    }

    int choice;
    cout << "Выберите действие:\n";
    cout << "1. Найти произведение первых N цифр числа X\n";
    cout << "2. Найти сумму всех цифр числа X\n";
    cout << "Введите ваш выбор (1 или 2): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            unsigned long long product = 1;
            for (int i = 0; i < N; ++i) {
                product *= (X_str[i] - '0'); // Преобразуем символ цифры в число
            }
            cout << "Произведение первых " << N << " цифр числа X: " << product << endl;
            break;
        }

        case 2: {
            unsigned long long sum = 0;
            for (char digit : X_str) {
                sum += (digit - '0'); // Преобразуем символ цифры в число
            }
            cout << "Сумма всех цифр числа X: " << sum << endl;
            break;
        }

        default:
            cout << "Ошибка: неверный выбор действия." << endl;
            break;
    }

    return 0;
}
