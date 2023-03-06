#include <iostream>

using namespace std;

int sum(int a, int b);

int main(void){

    int number1, number2;
    int result;
    cin >> number1 >> number2;

    result = sum(number1, number2);

    cout << result << endl;

    return 0;
}

int sum(int number1, int number2){

    return number1 + number2;

}