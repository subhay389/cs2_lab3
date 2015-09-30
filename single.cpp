#include <iostream>
#include <fstream>
#include "single.h"

Single getsonginput()
{
	Single new_song;
	string title, artist;
	cout << "Enter song name:\n";
	cin >> new_song.title;
	cout << "Enter artist name:\n";
	cin >> new_song.artist,
		cout << "Enter rating between 0-100:\n";
	cin >> new_song.rating;
	return new_song;
}


void writetofile(Single new_song)
{
	ofstream song_file;
	song_file.open("favSongs.txt");
	song_file << new_song.title << new_song.artist << new_song.rating;
	song_file.close();
}
