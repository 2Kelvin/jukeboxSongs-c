#include <stdio.h>
#include <string.h>

// [80] means the individual song string should not exceed 80 characters
char jukeboxSongs[][80] = {
    "A team - Ed Sheeran",
    "Paradise - Coldplay",
    "All the little lights - Passenger",
    "Move on - Mike Posner",
    "Renegades - X Ambassadors",
};

void findSong(char searchTerm[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (strstr(jukeboxSongs, searchTerm))
            printf("Song %i: '%s'\n", i, jukeboxSongs[i]);
    }
}

int main()
{
    return 0;
}
