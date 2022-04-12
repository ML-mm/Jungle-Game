#ifndef Player_H
#define Player_H
#include <vector>
#include <string>
#include "Board.h"
#include "Animal.h"


using namespace std;

class Player {
	private:
		string name;
		COLOR color;
		vector<Animal*> pieces;
	public:
		void set_Name(char* name);
		void set_Color(COLOR color);
		void add_Pieces(Animal* piece);

		string get_Name();
		COLOR get_Color();
		void  remove_Pieces(Animal* piece);
		Animal* get_Piece(int position);
		int count_Pieces();
		
		virtual void make_Move(Board* board);

		Player(string name, COLOR color);
};












#endif
