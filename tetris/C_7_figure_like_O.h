#pragma once

#include "C_1_figure_like_I.h"

class C_7_figure_like_O : public C_1_figure_like_I
{

public:

	C_7_figure_like_O();

	void virtual Show();

	void virtual Show_after_rotation(int rotated_left_x, int rotated_top_y);

	void virtual Erase();

	bool virtual Move_down(int current_level);

	bool virtual Move_left();

	bool virtual Move_right();

	bool virtual Rotatable(int & rotated_left_x, int & rotated_top_y, bool & rotated_shift);

	bool virtual Exist_free_place_for_new_figure();

	~C_7_figure_like_O();

};
