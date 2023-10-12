#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int arr[105][105];

int main(){
    fast();

    int num_test_cases, n, number;
    cin >> num_test_cases;

    for (int i = 0; i < num_test_cases; i++)
    {
        cin >> n;
        for (int j = 1; j <= n*(n-1); j++)
        {
            cin >> number;
            arr[j][number]++;
        }


    }

}