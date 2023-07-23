/**
*    author:  Akayiz
*    created: 2023-07-23 19:31:43
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

long long t, seq_length, Fn, seqs_count = 0;

int find_num_of_fib_seqs(){
    long long start = Fn / 2.0, end = Fn - 1;

    for (long long i = start; i < end; i++)
    {
        long long current_length = 2, fn = Fn, fn_1 = i, fn_2;
        while (true)
        {
            fn_2 = fn - fn_1;
            fn = fn_1;
            fn_1 = fn_2;
            current_length++;
            //cout << current_length << endl;
            if (fn_2 > fn_1 || fn_2 < 0)
            {
                break;
            }
            else if (current_length == seq_length)
            {
                seqs_count++;
            }
        }
    }

    return 0;
}

int main() {
    fast();

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> seq_length >> Fn;

        find_num_of_fib_seqs();
        cout << seqs_count << endl;
    }

    

    return 0;
}