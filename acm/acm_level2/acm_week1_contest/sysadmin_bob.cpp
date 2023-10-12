/**
*    author:  Akayiz
*    created: 2023-04-03 23:51:39
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

    string comma_email, original_email;
    int at_counter = 0;
    bool error = 0;
    cin >> original_email;

    comma_email = original_email;

    for (int i = 0; i < original_email.length(); i++)
    {
        if (original_email[i] == '@')
        {
            at_counter++;
        }
    }
    
    for (int i = 0; i < comma_email.length(); i++)
    {
        if (at_counter > 1)
        {
            if (comma_email[i] == '@')
            {
                at_counter--;
                if (comma_email[i + 1] != '@' && comma_email[i + 2] != '@' && i != 0 && comma_email[i - 1] != '@')
                {   
                    comma_email.insert(i+2, ",");
                }
                else
                {
                    error = 1;
                    break;
                }
            }
        }  
        else if (i + 1 == comma_email.length() && comma_email[i] == '@')
        {
            error = 1;
        }      
    }
    if (error)
    {
        cout << "No solution";
        return 0;
    }
    cout << comma_email;

    // int j = 0;
    // for (int i = 0; i < comma_email.length(); i++)
    // {
    //     //cout << comma_email[i] << " " << original_email[i - j] << endl;
    //     if (comma_email[i] == ',')
    //     {
    //         j++;
    //     }
    // }
    // if (j != at_counter)
    // {
        
    // }
    // cout << comma_email;

    return 0;
}