#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

char pi[35] = { '3', '1', '4', '1', '5', '9', '2', '6', '5', '3', '5', '8', '9', '7', '9', '3', '2', '3', '8', '4', '6', '2', '6', '4', '3', '3', '8', '3',
'2', '7' };

char digits[35];

int main() {
    fast();

    int num_test_cases;
    cin >> num_test_cases;

    for (int i = 0; i < num_test_cases; i++)
    {
        int common_sum = 0;
        cin >> digits;
        for (int j = 0; j < 30; j++)
        {
            if (digits[j] == pi[j])
            {
                common_sum++;
            }
            else
            {
                break;
            }
        }
        cout << common_sum << endl;
    }
}