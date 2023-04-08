#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, operation_type, id;
	cin >> n;

	queue<int> line;

	for (int i = 0; i < n; i++)
	{
		cin >> operation_type >> id;
		switch (operation_type)
		{
		case 1:
			line.push(id);
			break;
		case 2:
			if (id == line.front())
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout << "No" << endl;
			}
			line.pop();
			break;
		}
	}
}