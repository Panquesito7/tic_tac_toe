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

#include "game.hpp"
#include <vector>
#include <string>
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

int turn = 0;
bool match_ended = false;

/**
 * @brief The function to determine if it's a match or not
 * Also updates the text of the buttons when clicking on them,
 * the current turn, and a label that shows who's the winner.
 * @param sender The item that triggered the event
 * @param buttons An array containing various buttons
 * @param label2 The label that shows who's the winner
 * @return void
*/
void is_match(System::Object^ sender, array<Button^>^ buttons, Label^ label2) {
	Button^ button = safe_cast<Button^>(sender);

	// Check if string is empty. If so, do not change anything.
	if ((match_ended) || (button->Text != "")) {
		return;
	}

	if (turn == 0) {
		button->Text = "O";
		button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(192)));
		button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		turn = 1;
	}

	else if (turn == 1) {
		button->Text = "X";
		button->ForeColor = System::Drawing::Color::Red;
		button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		turn = 0;
	}

	/**
	 * @brief The system to determine if it's a match or not
	 * We'll determine whether the O or X won with in a `for` loop.
	 */
	std::vector<std::string> buttons_text = { "X", "O" };

	for (int i = 0; i < buttons_text.size(); i++) {
		String^ text = gcnew String(buttons_text[i].c_str());

		// The comments below also apply to the X.
																										// O O O
		if ((buttons[2]->Text == text) && (buttons[3]->Text == text) && (buttons[4]->Text == text)) {   //
																									    //
			match_ended = true;
			label2->Text = "The " + text + " won the game!";
		}
																											//
		else if ((buttons[5]->Text == text) && (buttons[6]->Text == text) && (buttons[7]->Text == text)) {  // O O O
																											//
			match_ended = true;
			label2->Text = "The " + text + " won the game!";
		}
																											//
		else if ((buttons[8]->Text == text) && (buttons[9]->Text == text) && (buttons[10]->Text == text)) { //
																											// O O O
			match_ended = true;
			label2->Text = "The " + text + " won the game!";
		}
																									  // O
		if ((buttons[2]->Text == text) && (buttons[5]->Text == text) && (buttons[8]->Text == text)) { // O
																									  // O
			match_ended = true;
			label2->Text = "The " + text + " won the game!";
		}
																										   //   O
		else if ((buttons[3]->Text == text) && (buttons[6]->Text == text) && (buttons[9]->Text == text)) { //   O
																										   //   O
			match_ended = true;
			label2->Text = "The " + text + " won the game!";
		}
																											//     O
		else if ((buttons[4]->Text == text) && (buttons[7]->Text == text) && (buttons[10]->Text == text)) { //     O
																											//     O
			match_ended = true;
			label2->Text = "The " + text + " won the game!";
		}
																											// O
		else if ((buttons[2]->Text == text) && (buttons[6]->Text == text) && (buttons[10]->Text == text)) { //   O
																											//     O
			match_ended = true;
			label2->Text = "The " + text + " won the game!";
		}
																										   //     O
		else if ((buttons[4]->Text == text) && (buttons[6]->Text == text) && (buttons[8]->Text == text)) { //   O
																										   // O
			match_ended = true;
			label2->Text = "The " + text + " won the game!";
		}
	}

	// Is it a tie?
	int count = 0;
	for (int i = 2; i < buttons->Length; i++) {
		if (buttons[i]->Text != "") {
			count++;
		}
	}

	if ((count == 9) && (match_ended != true)) {
		match_ended = true;
		label2->Text = "It's a tie! No one won.";
	}
}
