#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int dollars_box_prices[100005];
int items_count[100005];
int pounds_items_price[1000005];

int binary_search(int num_boxes, int box_price) {
    long long low = 0, high = num_boxes - 1, mid;
    long long ans = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;
    }
}

int main() {
    fast();

    int num_boxes, q;
    cin >> num_boxes;

    for (int i = 0; i < num_boxes; i++)
    {
        cin >> dollars_box_prices[i];
        cin >> items_count[i];
        for (int j = i; j < items_count[j]; j++)
        {
            cin >> pounds_items_price[j];
        }
    }

    cin >> q;
    long long current_dollars, current_pounds;

    sort(dollars_box_prices, dollars_box_prices + num_boxes);

    for (int i = 0; i < q; i++)
    {
        cin >> current_dollars >> current_pounds;

    }
}