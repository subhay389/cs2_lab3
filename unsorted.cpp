#include "unsorted.h"
#include <iostream>

using namespace std;

void UnsortedPlaylist::initialize()
{
	cout << "Number of songs in the Playlist?";
	cin >> max_songs;
	songs = new Single[max_songs];
	current = 0;
	length = 0;
}


void UnsortedPlaylist::addSong(Single new_song)
{
	songs[length] = new_song;
	length++;
}


int UnsortedPlaylist::getlength() const
{
	return length;
}

bool UnsortedPlaylist::Listfull() const
{
	return (length == max_songs);
}


Single UnsortedPlaylist::getSingle(int index) const
{
	return songs[index];
}

void UnsortedPlaylist::deleteSingle()
{
	Single song;
	char reply;
	for (int i = 0; i<max_songs; i++)
	{
		song = getSingle(i);
		cout << "Is this the song you want to delete(Y/N)?\n";
		cout << "Artist: " << song.artist << endl;
		cout << "Title: " << song.title << endl;
		cin >> reply;
		if (reply == 'y' || reply == 'Y')
		{
			for (int j = i + 1; j < max_songs; j++)
			{
				songs[j - 1] = songs[j];
			}
			max_songs--;
		}
	}
}
