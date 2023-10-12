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

    string citizens;
    long long subsegment_sum = 0, max = -1;
    cin >> citizens;

    for (int i = 0; i < citizens.length(); i++)
    {
        if (citizens[i] == 'a' || citizens[i] == 'e' || citizens[i] == 'i' || citizens[i] == 'o' || citizens[i] == 'u')
        {
            subsegment_sum = 0;
        }
        else
        {
            subsegment_sum++;
        }
        
        if (subsegment_sum > max)
        {
            max = subsegment_sum;
        }
        
    }
    
    cout << max;
    
    return 0;
}