#include <iostream>
using namespace std;
//простой калькулятор
int main() {
    int a;
    int b;
    int sum;
    //int c;
    cout << "Введите число которые вы хотите сложить. \n";
    cin >> a;
    cout << " Введите другое число которое вы хотите сложить. \n";
    cin >> b;
    sum = a + b;
    cout << "Сумма: " << sum << endl;
    return 0;
}
