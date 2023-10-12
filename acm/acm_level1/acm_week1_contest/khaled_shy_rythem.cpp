#include <iostream>
#include <cmath>

using namespace std;

const unsigned long long int UPPER_LIMIT = 100000;

int main(void)
{
    long long int n, a, b, lx, rx, ly, ry;
    double x, y;
    double ax, by;
    int found_solution = 0;


    cin >> n;
    cin >> a;
    cin >> b;
    cin >> lx;
    cin >> rx;
    cin >> ly;
    cin >> ry;

    /*
    n = 5;
    a = 2;
    b = 1;
    lx = 2;
    rx = 4;
    ly = 1;
    ry = 2;
    */


    for (int c = 0; c < UPPER_LIMIT; c++)
    {
        //cout << c << " ";
        if (b == a) {
            c = 2 * n;
            cout << c;
            found_solution = 1;
            return 0;
        }
        else {
            y = (double)((c - a * n) / (b - a));
        }

        //cout << y << " ";
        x = (double)n - y;
        //cout << x << " ";

        ax = (double)a * x;
        //cout << ax << " ";
        by = (double)b * y;
        //cout << by << " ";

        if (ax <= rx && ax >= lx && by <= ry && by >= ly)
        {
            cout << c;
            found_solution = 1;
            return 0;
        }
        //cout << endl;
    }

    if (!found_solution) {
        cout << "-1";
    }
}