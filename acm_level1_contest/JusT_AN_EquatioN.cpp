#include <iostream>
#include <string>

using namespace std;

long long numbers[100005];

int main(){
    string equation;
    cin >> equation;

    long long number = 0, numbers_count = 0;
    for (int i = 0; i < equation.length(); i++)
    {
        if (equation[i] == '+')
        {
            numbers[numbers_count] = number;
            numbers_count++;
            number = 0;
        }
        else
        {
            number *= 10;
            number += (int) (equation[i]) - 48;
        }
    }
    numbers[numbers_count] = number;
    numbers_count++;

    unsigned long long sum = 0;
    for (int i = 0; i < numbers_count; i++)
    {
        sum += numbers[i];
    }

    cout << sum;
    
    
}