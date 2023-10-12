/**
*    author:  Akayiz
*    created: 2023-05-11 22:05:33
**/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t;
    int books_count, minutes_to_read;
    string skills_gained;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> books_give_skill_1 = {};
        vector<int> books_give_skill_2 = {};
        vector<int> books_give_both_skills = {};
        cin >> books_count;
        for (int i = 0; i < books_count; i++)
        {
            cin >> minutes_to_read >> skills_gained;
            if (skills_gained == "10")
            {
                books_give_skill_1.push_back(minutes_to_read);
            }
            else if (skills_gained == "01")
            {
                books_give_skill_2.push_back(minutes_to_read);
            }
            else if(skills_gained == "11")
            {
                books_give_both_skills.push_back(minutes_to_read);
            } 
        }
        if ((books_give_skill_1.empty() || books_give_skill_2.empty()) && books_give_both_skills.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            if (!books_give_skill_1.empty() && !books_give_skill_2.empty())
            {
                sort(books_give_skill_1.begin(), books_give_skill_1.end());
                sort(books_give_skill_2.begin(), books_give_skill_2.end());
                if (!books_give_both_skills.empty())
                {
                    sort(books_give_both_skills.begin(), books_give_both_skills.end());
                    cout << min(books_give_skill_1[0] + books_give_skill_2[0], books_give_both_skills[0]) << endl;
                } 
                else
                {
                    //cout << books_give_skill_1[0] << " " << books_give_skill_2[0];
                    cout << books_give_skill_1[0] + books_give_skill_2[0] << endl;
                }
            }
            else
            {
                sort(books_give_both_skills.begin(), books_give_both_skills.end());
                //cout << books_give_skill_1[0] << " " << books_give_skill_2[0] << " " << books_give_both_skills[0];
                cout << books_give_both_skills[0] << endl;
            }
        }
    }
    

    return 0;
}