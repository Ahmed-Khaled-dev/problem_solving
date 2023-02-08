#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long binary_search(long long end, long long q, long long arr[100005], long long start, char array_state) {
    fast();

    if (array_state == 'I')
    {
        long long low = start, high = end - 1, mid = 0;

        while (low <= high)
        {
            mid = (low + high) / 2;
            if (q > arr[mid])
            {
                low = mid + 1;
            }
            else if (q < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
    else if (array_state == 'D')
    {
        long long low = end - 1, high = start, mid = 0;

        while (low >= high)
        {
            mid = (low + high) / 2;
            if (q > arr[mid])
            {
                low = mid - 1;
            }
            else if (q < arr[mid])
            {
                high = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
    return -1;
}

long long arr1[100005];
long long arr2[100005];

int main() {
    fast();

    int n, q;
    cin >> n >> q;
    int n1 = 0;
    char array_state = 'I';
    bool complex = 0;
    bool decreasing = 0;

    for (int i = 0; i < n; i++)
    {
        if (!complex)
        {
            cin >> arr1[i];
        }
        else
        {
            cin >> arr2[i];
        }

        if (i == 1 && arr1[1] < arr1[0])
        {
            array_state = 'D';
            decreasing = 1;
            // D = Decreasing
        }
        else if (i > 1 && arr1[i] < arr1[i - 1] && !complex && !decreasing)
        {
            array_state = 'C';
            complex = 1;
            n1 = i;
            arr2[i] = arr1[i];
            // C = Complex (increasing -> decreasing)
        }
    }

    long long query;
    long long result, result2;

    for (long long i = 0; i < q; i++)
    {
        cin >> query;
        if (array_state == 'I')
        {
            result = binary_search(n, query, arr1, 0, 'I');
            if (result == -1)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes " << result + 1 << "\n";
            }
        }
        else if (array_state == 'D')
        {
            //sort(arr1, arr1 + n);
            result = binary_search(n, query, arr1, 0, 'D');
            if (result == -1)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes " << result + 1 << "\n";
            }
        }
        else
        {
            //sort(arr2, arr2 + n);
            result = binary_search(n1, query, arr1, 0, 'I');
            if (result == -1)
            {
                result2 = binary_search(n, query, arr2, n1, 'D');
                if (result2 == -1)
                {
                    cout << "No" << endl;
                }
                else
                {
                    cout << "Yes " << result2 + 1 << "\n";
                }
            }
            else
            {
                cout << "Yes " << result + 1 << "\n";
            }
        }
    }
}