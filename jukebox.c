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
        if (strstr(jukeboxSongs[i], searchTerm))
            printf("Song %i: '%s'\n", i, jukeboxSongs[i]);
    }
}

int main()
{
    char searchTerm[80];
    printf("Search for: ");
    fgets(searchTerm, 80, stdin);
    findSong(searchTerm);
    
    return 0;
}
