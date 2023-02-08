#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n, action_type, book_id;
	cin >> n;

	stack<int> books;

	for (int i = 0; i < n; i++)
	{
		cin >> action_type;
		switch (action_type)
		{
		case 1:
			cin >> book_id;
			books.push(book_id);
			break;
		case 2:
			if (!books.empty())
			{
				books.pop();
			}
			break;
		case 3:
			if (!books.empty())
			{
				cout << books.top() << endl;
			}
			break;
		}
	}
}