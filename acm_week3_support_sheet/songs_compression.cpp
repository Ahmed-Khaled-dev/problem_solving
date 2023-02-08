#include <iostream>
#include <algorithm>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int num_of_songs, flash_capacity, original_size, compressed_size, num_compressed = 0, difference[100005];
long long sum_compressed = 0, sum_original = 0;

int main() {
    fast();

    cin >> num_of_songs >> flash_capacity;

    for (int i = 0; i < num_of_songs; i++)
    {
        cin >> original_size >> compressed_size;
        sum_compressed += compressed_size;
        sum_original += original_size;
        difference[i] = original_size - compressed_size;
    }

    sort(difference, difference + num_of_songs);
    reverse(difference, difference + num_of_songs);

    if (sum_compressed > flash_capacity)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < num_of_songs; i++)
        {
            if (sum_original <= flash_capacity)
            {
                break;
            }
            else
            {
                sum_original -= difference[i];
                num_compressed++;
            }
        }
        cout << num_compressed;
    }
}