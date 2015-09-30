#include "single.h"

using namespace std;

class UnsortedPlaylist
{
public:
	void initialize();

	void addSong(Single new_song);
	int getlength() const;
	int getmaxlength() const;
	bool Listfull() const;
	Single getSingle(int index) const;
	void deleteSingle();

private:
	Single* songs;
	int current;
	int length;
	int max_songs;
};
