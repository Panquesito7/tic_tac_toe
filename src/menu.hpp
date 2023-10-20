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

#ifndef MENU_HPP
#define MENU_HPP

void choose_turn(System::Windows::Forms::Button^ turn_o, System::Windows::Forms::Button^ turn_x,
	System::Windows::Forms::Label^ label3, System::Windows::Forms::Button^ backmodeselect, bool);
void choose_mode(System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Label^,
	System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Label^, bool);

#endif // MENU_HPP
