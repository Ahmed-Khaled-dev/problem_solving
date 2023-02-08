#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	int current_song = 1;
	char audio_character;

	for (int i = 1; i <= N; i++)
	{
		cin >> audio_character;
		if (audio_character == '>')
		{
			if (i != N)
			{
				current_song += 2;
				
			}
			else
			{
				current_song += 1;
			}
		}
		else if (audio_character == '<')
		{
			current_song -= 1;
		}
		else if (audio_character == '*')
		{
			if (i != N)
			{
				current_song += 1;
			}	
		}
	}
	cout << current_song;
}