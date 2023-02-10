#include <iostream>
#include <map>
#include <string>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    bool can_write_letter = 1;
    string heading, text;
    getline(cin, heading);
    getline(cin, text);

    map<char, int> header_char_frequency;

    for (int i = 0; i < heading.length(); i++)
    {
        if (heading[i] != ' ')
        {
            header_char_frequency[heading[i]]++;
        }
    }

    // map<char, int>::iterator it;

    // for (it = header_char_frequency.begin(); it != header_char_frequency.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ')
        {
            if (header_char_frequency[text[i]] != 0)
            {
                header_char_frequency[text[i]]--;
            }
            else
            {
                can_write_letter = 0;
                break;
            }   
        }
    }

    if (can_write_letter)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}