#include "settings.h"

int main()
{
    double num1;
    double num2;
    double sum;
    cout << "Input first: ";
    cin >> num1;
    cout << "Input second: ";
    cin >> num2;
    double* p_num1 = &num1;
    double* p_num2 = &num2;
    double* p_sum = &sum;
    double** pp_num1 = &p_num1;
    double** pp_num2 = &p_num2;
    double** pp_sum = &p_sum;

    **pp_sum = **pp_num1 + **pp_num2;
    cout << **pp_num1 << " + " << **pp_num2 << " = " << **pp_sum << "\n\n";



    double height;
    double weight;
    cout << "Input height: ";
    cin >> height;
    cout << "Input weight: ";
    cin >> weight;
    double perfect_w = height - 110;
    double* p_height = &height;
    double* p_weight = &weight;
    double* p_perfect_w = &perfect_w;
    double** pp_height = &p_height;
    double** pp_weight = &p_weight;
    double** pp_perfect_w = &p_perfect_w;

    if (**pp_weight > **pp_perfect_w) {
        cout << "To be in your ideal weight, you need to lose " << **pp_weight - **pp_perfect_w << "kg (" << **pp_perfect_w << "kg)\n";
    }
    else if (**pp_weight < **pp_perfect_w) {
        cout << "To be in your ideal weight, you need to gain " << **pp_perfect_w - **pp_weight << "kg (" << **pp_perfect_w << "kg)\n";
    }
    else {
        cout << "Your weight is perfect!\n";
    }

    Sleep(INFINITE);
}