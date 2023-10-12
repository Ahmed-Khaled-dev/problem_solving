#include <iostream>
#include <string>

using namespace std;

int main(){
    long long t, n, sum;
    string binary_num;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> binary_num;
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (binary_num[j] == '0')
            {
                sum++;
            } 
        }
        cout << sum << endl;
    }
    
}