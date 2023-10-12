/**
*    author:  Akayiz
*    created: 2023-07-09 16:18:44
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

long long songs_duration[100005];

int main() {
    fast();

    int songs_count;
    cin >> songs_count;

    unsigned long long seconds_elapsed;
    cin >> seconds_elapsed;

    for (unsigned long long i = 0; i < songs_count; i++)
    {
        cin >> songs_duration[i];
    }

    // Creating prefix sum array
    for (unsigned long long i = 1; i < songs_count; i++)
    {
        songs_duration[i] += songs_duration[i - 1]; 
    }

    long long seconds_elpased_without_repeating = seconds_elapsed % songs_duration[songs_count - 1];

    // Finding which song i am in

    long long low = 0, high = songs_count - 1;
    long long current_song_index, time_elapsed_in_current_song;
    // while (low <= high)
    // {
    //     long long mid = (high + low) / 2;
    //     if (seconds_elpased_without_repeating < songs_duration[mid])
    //     {
    //         high = mid - 1;
    //         current_song_index = mid;
    //     }
    //     else
    //     {
    //         low = mid + 1;
    //     }
    // }
    
    current_song_index = upper_bound(songs_duration, songs_duration + songs_count, seconds_elpased_without_repeating) - songs_duration;
    if (current_song_index == 0)
    {
        time_elapsed_in_current_song = seconds_elpased_without_repeating;
    }
    else
    {
        time_elapsed_in_current_song =  seconds_elpased_without_repeating - songs_duration[current_song_index - 1];
    }
    cout << current_song_index + 1 << " " << time_elapsed_in_current_song;

    // for (int i = 0; i < songs_count; i++)
    // {
    //     if (seconds_elpased_without_repeating < songs_duration[i])
    //     {
    //         long long time_elapsed_in_current_song;
    //         if (i == 0)
    //         {
    //             time_elapsed_in_current_song = seconds_elpased_without_repeating;
    //         }
    //         else
    //         {
    //             time_elapsed_in_current_song =  seconds_elpased_without_repeating - songs_duration[i - 1];
    //         }
    //         cout << i + 1 << " " << time_elapsed_in_current_song;
    //         break;
    //     }   
    // }

    return 0;
}