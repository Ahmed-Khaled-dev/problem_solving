#include <iostream>
#include <string>
#include <map>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();

    int n;
    cin >> n;

    string shape_type;
    long long faces_sum = 0;
    
    map<string, int> sides_for_each_shape = {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, 
    {"Dodecahedron", 12}, {"Icosahedron", 20},};

    for (int i = 0; i < n; i++)
    {
        cin >> shape_type;
        faces_sum += sides_for_each_shape[shape_type];
    }

    cout << faces_sum;
    
}