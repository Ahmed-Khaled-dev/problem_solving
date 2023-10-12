#include <iostream>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

char arr[100005];

int check_if_vowel(char x) {
    char char_lower = tolower(x);
    if (char_lower == 'a' || char_lower == 'e' || char_lower == 'i' || char_lower == 'o' || char_lower == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    fast();

    long long N, Q, vowels = 0, I;
    char C;
    cin >> N >> Q;

    for (long long i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (check_if_vowel(arr[i]))
        {
            vowels++;
        }
    }

    for (long long i = 0; i < Q; i++)
    {
        cin >> I >> C;
        //cout << I << "\n" << C << "\n" << j << "\n" << Q << "\n";

        if (!check_if_vowel(arr[I]) && check_if_vowel(C))
        {
            vowels++;
        }
        else if (check_if_vowel(arr[I]) && !check_if_vowel(C))
        {
            vowels--;
        }

        arr[I] = C;

        if (vowels > (N - vowels))
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }
}