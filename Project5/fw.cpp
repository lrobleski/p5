#include <curses.h>
#include <limits>
#include "fw.hpp"

using namespace std;

Rocket::Rocket()
{
	age = 0;
	age_limit = numeric_limits<int>::max();
	trigger_age = numeric_limits<int>::max();
	position.x = 0;
	position.y = 0;
	force.x = 0;
	force.y = 0;
}

void Rocket::SetTriggerAge(int i)
{
	trigger_age = i;
}

void Rocket::SetAgeLimit(int i)
{
	age_limit = i;
}

// void SetPosition(Rocket &other)

void Rocket::SetPosition(float x, float y)
{
	position.x = x;
	position.y = y;

	// For set position?
	// position.x = (rand() % COLS) + 1;
	// position.y = LINES;
}

void Rocket::SetForce(float x, float y)
{
	force.x = x;
	force.y = y;
}

void Rocket::Draw()
{
	mvaddstr(position.y, position.x, "*");
}

/* void Rocket::Step(vector<Rocket *> &v) {

	Rocket tempRocket;
for (unsigned int i = 0; i < v.size(); i++) {
		tempRocket = v.at(i);
	}
	SetPosition(x,y);
	age++;

} */

/* void Rocket::Trigger(std::vector<Rocket *> &v)
{
	if(IsTriggered(v->at(i)))
}*/

// int GetAge()
// bool IsAlive()

bool Rocket::IsTriggered()
{
	if (age >= trigger_age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// void Rocket::SetGravity(float g){ gravity = g;}

// static void SetLogFile(std::ofstream *log_file)
// static void SetVector(std::vector<Rocket *> *)