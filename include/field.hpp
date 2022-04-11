#ifndef MINESWEEPER_FIELD_HPP
#define MINESWEEPER_FIELD_HPP

class Square {
	public:
		int id;
		bool isDiscovered;
		bool isBomb;

		Square(bool isBomb_input, int id_input) {
			isBomb = isBomb_input;
			id = id_input;
		}
};

#endif // MINESWEEPER_FIELD_HPP