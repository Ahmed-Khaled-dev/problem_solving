#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();

    int x, y, z;
    cin >> x >> y >> z;

    if (x >= y && y >= z)
    {
        cout << x << y << z;
    }
    else if (x >= z && z >= y)
    {
        cout << x << z << y;
    }
    else if (y >= x && x >= z)
    {
        cout << y << x << z;
    }
    else if (y >= z && z >= x)
    {
        cout << y << z << x;
    }
    else if (z >= x && x >= y)
    {
        cout << z << x << y;
    }
    else if (z >= y && y >= x)
    {
        cout << z << y << x;
    }
}