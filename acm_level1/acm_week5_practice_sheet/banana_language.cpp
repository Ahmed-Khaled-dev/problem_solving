#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	string word;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int capital_transforms = 0, small_transforms = 0;
		cin >> word;
		//cout << word.length() << endl;
		for (int j = 0; j < word.length(); j++)
		{
			if (word[j] >= 'a' && word[j] <= 'z')
			{
				small_transforms++;
			}
			else
			{
				capital_transforms++;
			}
		}

		cout << min(capital_transforms, small_transforms) << endl;
	}
}