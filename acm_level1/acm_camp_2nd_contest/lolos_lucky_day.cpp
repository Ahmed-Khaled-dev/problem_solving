/**
*    author:  Akayiz
*    created: 2023-02-14 20:23:43
**/

#include <iostream>
#include <string>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    long long n;
    cin >> n;

    long long sum4 = 0, sum7 = 0;
    string number4;
    string number7;
    while (sum4 < n)
    {
        number4.push_back('7');
        sum4 += 7;
        //cout << number << endl;
        if (sum4 == n)
        {
            break;
        }
        number4.pop_back();
        sum4 -= 7;
        //cout << number << endl;
        number4.push_back('4');
        sum4 += 4;
        //cout << number << endl;
        if (sum4 == n)
        {
            break;
        }
        //cout << number << endl;
    }

    while (sum7 < n)
    {
        number7.push_back('4');
        sum7 += 4;
        //cout << number << endl;
        if (sum7 == n)
        {
            break;
        }
        number7.pop_back();
        sum7 -= 4;
        //cout << number << endl;
        number7.push_back('7');
        sum7 += 7;
        //cout << number << endl;
        if (sum7 == n)
        {
            break;
        }
        //cout << number << endl;
    }
    
    if (sum7 == n && sum4 == n)
    {
        if (number7.length() < number4.length())
        {
            cout << number7;
        }
        else
        {
           cout << number4; 
        }   
    }
    else if (sum7 == n)
    {
        cout << number7;
    }
    else if (sum4 == n)
    {
        cout << number4;
    }
    else
    {
        cout << "-1";
    }
    
    return 0;
}