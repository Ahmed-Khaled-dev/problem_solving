#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();

    int num_test_cases;
    int num_dice, sum_of_faces, remaining_sum_of_faces;

    cin >> num_test_cases;
    
    for (int i = 0; i < num_test_cases; i++)
    {
        bool remainder_dice_larger_than_stolen_dice = 0;
        cin >> num_dice >> sum_of_faces >> remaining_sum_of_faces;
        int stolen_dice = sum_of_faces - remaining_sum_of_faces;

        int faces_equal_distribution = remaining_sum_of_faces / (num_dice - 1);
        //cout << faces_equal_distribution << endl;

        int remaining_amount = remaining_sum_of_faces % (num_dice - 1);
        //cout << remaining_amount;

        if (faces_equal_distribution + remaining_amount > stolen_dice)
        {
            remainder_dice_larger_than_stolen_dice = 1;
        }

        for (int j = 0; j < num_dice - 2; j++)
        {           
            if (remainder_dice_larger_than_stolen_dice)
            {
                cout << faces_equal_distribution + ((faces_equal_distribution + remaining_amount) - stolen_dice) << " ";
                remainder_dice_larger_than_stolen_dice = 0;
                remaining_amount -= (faces_equal_distribution + remaining_amount) - stolen_dice;
            }
            else
            {
                cout << faces_equal_distribution << " ";
            }    
        }

        cout << faces_equal_distribution + remaining_amount << " ";

        cout << stolen_dice << " " << endl;
    }
}