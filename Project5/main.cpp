/*	Project:    Project 5
	Name:       Lisa Aschauer
    Partner:    Kathleen Cochran
    Class:      CSC 1820 - Section 2
*/

#include <thread>
#include <chrono>
#include <vector>
#include <ctime>
#include <ncurses.h>

#include "fw.hpp"
// #include "streamer.hpp"
// #include "palmtree.hpp"
// #include "fleet.hpp"

using namespace std;

/*float frand()
{
	return float(rand()) / float(RAND_MAX) - 0.5f;
}*/

int main(int argc, char *argv[])
{
	// float initial_up_force = 4.0;
	// srand((unsigned int)time(nullptr));
	// Fleet fleet;

	/*if (argc > 1)
	{
		// initial_up_force = stof(argv[1]);
	}*/

	initscr();
	curs_set(0);

	// Rocket::SetGravity(-0.2);

	while (true)
	{
		erase();
		// fleet.Birth(initial_up_force);
		// fleet.Step();
		// fleet.Draw();
		// fleet.Cull();
		box(stdscr, 0, 0);
		mvaddstr(0, 1, " RETRO FIREWORKS ");
		refresh();
		this_thread::sleep_for(chrono::milliseconds(40));
	}
	curs_set(1);
	endwin();
	return 0;
}