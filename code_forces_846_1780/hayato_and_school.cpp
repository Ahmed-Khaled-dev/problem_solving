#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int indexodd[305], indexeven[305];

int main() {
    fast();

    int num_test_cases, arr_size, number;

    cin >> num_test_cases;
    for (int i = 0; i < num_test_cases; i++)
    {
        int odd_sum = 0, even_sum = 0;

        cin >> arr_size;
        for (int j = 0; j < arr_size; j++)
        {
            cin >> number;
            if (number % 2 == 0)
            {
                indexeven[even_sum] = j + 1;
                even_sum++;     
            }
            else
            {
                indexodd[odd_sum] = j + 1;
                odd_sum++;
            }
        }

        if (odd_sum >= 3)
        {
            cout << "YES" << endl;
            cout << indexodd[0] << " " << indexodd[1] << " " << indexodd[2] << endl;
        }
        else if (odd_sum >= 1 && even_sum >= 2)
        {
            cout << "YES" << endl;
            cout << indexodd[0] << " " << indexeven[0] << " " << indexeven[1] << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}