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

#ifndef GAME_HPP
#define GAME_HPP

extern int turn;
extern bool match_ended;

void is_match(System::Object^, array<System::Windows::Forms::Button^>^, System::Windows::Forms::Label^);

#endif // GAME_HPP
