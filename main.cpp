#include <iostream>
#include <stdexcept>

using namespace std;

double calculate(double a, double b, char operation) {
    switch (operation) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b == 0) {
                throw runtime_error("Деление на ноль!");
            }
            return a / b;
        default:
            throw invalid_argument("Неверная операция");
    }
}

int main() {
    double a, b;
    char operation;
    
    while (true) {
        cout << "Введите выражение (например, 5 + 3) или 'q' для выхода: ";
        cin >> a;
        
        if (cin.fail()) {
            if (cin.eof() || cin.get() == 'q') {
                cout << "Выход из программы." << endl;
                break;
            }
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка ввода. Попробуйте снова." << endl;
            continue;
        }
        
        cin >> operation >> b;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка ввода. Попробуйте снова." << endl;
            continue;
        }
        
        try {
            double result = calculate(a, b, operation);
            cout << "Результат: " << result << endl;
        } catch (const exception& e) {
            cout << "Ошибка: " << e.what() << endl;
        }
    }
    
    return 0;
}
