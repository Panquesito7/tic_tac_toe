/**
 * Tic Tac Toe game built in C++/CLR and Windows Forms.
 * Copyright (C) 2020-2023 David Leal (halfpacho@gmail.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "menu.hpp"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

void choose_turn(Button^ turn_o, Button^ turn_x, Label^ label3, Button^ backmodeselect, bool mode) {
	if (mode == true) {
		turn_o->Enabled = true;
		turn_o->Visible = true;

		turn_x->Enabled = true;
		turn_x->Visible = true;
		label3->Visible = true;
		backmodeselect->Visible = true;
	}
	else {
		turn_o->Enabled = false;
		turn_o->Visible = false;

		turn_x->Enabled = false;
		turn_x->Visible = false;
		label3->Visible = false;
		backmodeselect->Visible = false;
	}
}

void choose_mode(Button^ multiplayer_mode, Button^ ai_mode, Label^ label4, Button^ turn_o, Button^ turn_x, Button^ backmodeselect, Label^ label3, bool mode) {
	if (mode == true) {
		multiplayer_mode->Enabled = true;
		multiplayer_mode->Visible = true;

		ai_mode->Enabled = true;
		ai_mode->Visible = true;
		label4->Visible = true;

		choose_turn(turn_o, turn_x, label3, backmodeselect, false);
	}
	else {
		multiplayer_mode->Enabled = false;
		multiplayer_mode->Visible = false;

		ai_mode->Enabled = false;
		ai_mode->Visible = false;
		label4->Visible = false;

		choose_turn(turn_o, turn_x, label3, backmodeselect, true);
	}
}
