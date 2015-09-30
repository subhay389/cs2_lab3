#include <iostream>
#include <string>
#include <fstream>
#include "unsorted.h"

using namespace std;


int main()
{
	UnsortedPlaylist playlist;
	playlist.initialize();
	Single song;
	ifstream in_stream;
	ofstream out_stream;
	in_stream.open("favSongs.txt");
	out_stream.open("tempSongs.txt");
	while (!playlist.Listfull())
	{
		if (playlist.getlength() < 5)
		{
			in_stream >> song.artist;
			in_stream >> song.title;
			in_stream >> song.rating;
			out_stream << song.artist << " ";
			out_stream << song.title << " ";
			out_stream << song.rating << " " << endl;
			playlist.addSong(song);
		}
		else
		{
			song = getsonginput();
			playlist.addSong(song);
			out_stream << song.artist;
			out_stream << song.title;
			out_stream << song.rating;
		}
	}
	in_stream.close();
	out_stream.close();
	playlist.deleteSingle();
	remove("favSongs.txt");
	char oldname[] = "tempSongs.txt";
	char newname[] = "favSongs.txt";
	rename(oldname, newname);
	return 0;
}
