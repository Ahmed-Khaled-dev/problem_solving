#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    long long sum = 0, largest_calories = 0;
    string calorie;

    while (true)
    {
        getline(cin, calorie);
        //cout << calorie << endl;
        if (calorie == "q")
        {
            break;
        }
        else if (calorie.empty())
        {
            //cout << "empty";
            if (sum > largest_calories)
            {
                largest_calories = sum;
                //cout << "\n" << "This is the largest calorie here:" << largest_calories << "----";
            }
            sum = 0;
            continue;
        }
        else
        {
            long long calorie_number = stoi(calorie);
            sum = sum + calorie_number;
        }
        //cout << largest_calories;
    }
    cout << largest_calories << endl;
    return 0;