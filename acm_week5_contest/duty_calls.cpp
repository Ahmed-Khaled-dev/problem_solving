#include <iostream>
#include <set>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t, size, op_count, op_type;
    long long element;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        multiset<long long> elements;
        // multiset<long long>::iterator it2;
        // for (it2 = elements.begin(); it2 != elements.end(); it2++)
        // {
        //     cout << *it2 << " ";
        // }

        cin >> size >> op_count;
        for (int j = 0; j < size; j++)
        {
            cin >> element;
            elements.insert(element);
        }

        for (int j = 0; j < op_count; j++)
        {
            cin >> op_type;
            //multiset<long long>::iterator it2;
            switch (op_type)
            {
            case 1:
                cin >> element;
                elements.insert(element);
                // for (it2 = elements.begin(); it2 != elements.end(); it2++)
                // {
                //     cout << *it2 << " ";
                // }
                // cout << "I am in 1" << endl;
                break;
            case 2:
                cin >> element;
                multiset<long long>::iterator it_erase = elements.find(element);
                if (!(it_erase == elements.end()))
                {
                    elements.erase(it_erase);
                }
                // for (it2 = elements.begin(); it2 != elements.end(); it2++)
                // {
                //     cout << *it2 << " ";
                // }
                // cout << "I am in 2" << endl;
                break;
            }
        }
        
        cout << elements.size() << endl;
        multiset<long long>::iterator it;
        for (it = elements.begin(); it != elements.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    
    return 0;
}