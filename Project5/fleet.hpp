#pragma once
#include <vector>
#include <ncurses.h>
#include "fw.hpp"
#include "streamer.hpp"
#include "palmtree.hpp"

class Fleet
{
  public:
	void Cull();

	void Birth(float initial_up_force);

	void Step();

	void Draw();

  private:
	Rocket *RocketFactory(float initial_up_force);

	std::vector<Rocket *> rockets;
};