#include "super_calculator_zh.h"

int main()
{
    string a;
    cin >> a;
    string operation;
    cin >> operation;
    string b;
    cin >> b;
    cout << calculationController(a, b, operation);
    return 0;
}
