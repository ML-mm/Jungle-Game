#ifndef Human_H
#define Human_H
#include "Player.h"
#include <string>

class Human : public Player {
	public:
		Human(string name, COLOR color);

		virtual void make_Move(Board* board);
};


#endif
