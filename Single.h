#include <string>

using namespace std;

struct Single
{
	string artist;
	string title;
	float rating;
};

Single getsonginput();

void writetofile(Single song);
