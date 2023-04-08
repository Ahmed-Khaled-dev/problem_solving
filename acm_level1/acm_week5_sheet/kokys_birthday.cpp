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

    string initial_string;
    getline(cin, initial_string);

    int operations_count, operation_type, char1_index, char2_index;
    cin >> operations_count;


    for (int i = 0; i < operations_count; i++)
    {
        cin >> operation_type;
        cin >> char1_index;
        char1_index -= 1;
        switch (operation_type)
        {
        case 1:
            initial_string[char1_index] = toupper(initial_string[char1_index]);
            break;
        case 2:
            initial_string[char1_index] = tolower(initial_string[char1_index]);
            break;
        case 3:
            cin >> char2_index;
            char2_index -= 1;
            char char1_value = initial_string[char1_index];
            initial_string[char1_index] = initial_string[char2_index];
            initial_string[char2_index] = char1_value;
            break;
        }
    }
    
    cout << initial_string;
    return 0;
}