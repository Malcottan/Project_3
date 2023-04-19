#include <iostream>
using namespace std;

int main() {
    int n, q;
    cout << "Введіть ціле число: ";
    cin >> n;
    q = n;

    // Розбиваємо число на цифри та виводимо їх на екран
    cout << "Цифри числа " << n << ": ";
    int num_digits = 0;
    int sum_digits = 0;
    while (n != 0) {
        int digit = n % 10;
        cout << digit << " ";
        num_digits++;
        sum_digits += digit;
        n /= 10;
    }
    cout << endl;

    // Виводимо кількість цифр та суму цифр числа
    cout << "Кількість цифр: " << num_digits << endl;
    cout << "Сума цифр: " << sum_digits << endl;

    // Змінюємо порядок цифр числа на зворотний
    int reversed = 0;
    q = abs(q); // забезпечуємо, що n буде додатнім
    while (q != 0) {
        reversed = reversed * 10 + q % 10;
        q /= 10;
    }
    cout << "Число n у зворотному порядку: " << reversed << endl;
    return 0;
}