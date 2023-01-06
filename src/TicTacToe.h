/**
 * Tic Tac Toe game, implemented in C++/CLI/CLR using Windows forms.
 * Copyright (C) 2020-2022 David Leal (halfpacho@gmail.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <iostream>  /// for `uint16_t` 
#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de TicTacToe
	/// </summary>
	public ref class TicTacToe : public System::Windows::Forms::Form
	{
	public:
		TicTacToe(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se están usando.
		/// </summary>
		~TicTacToe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;











	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este m�todo con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(59, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tic Tac Toe";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &TicTacToe::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(80, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 30);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Start game!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TicTacToe::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(95, 65);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(95, 65);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 1;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(95, 65);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 2;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(95, 65);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 5;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(95, 65);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 4;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(95, 65);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 3;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(95, 65);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(95, 65);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(95, 65);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 0;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(95, 58);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(88, 31);
			this->button11->TabIndex = 9;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &TicTacToe::restart_game);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(11, 15);
			this->label2->TabIndex = 10;
			this->label2->Text = L" ";
			this->label2->Click += gcnew System::EventHandler(this, &TicTacToe::label2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->helpToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &TicTacToe::aboutToolStripMenuItem_Click);
			// 
			// TicTacToe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 194);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"TicTacToe";
			this->Text = L"Tic Tac Toe";
			this->Load += gcnew System::EventHandler(this, &TicTacToe::TicTacToe_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		uint16_t turn = 0; // Whether to choose if the X or the O will place.
		bool match_ended = false; // If the match has ended or not.
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { // "Start game!" button
		this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
		this->button1->Location = System::Drawing::Point(80, 58);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(0, 0);
		this->button1->Text = L"";

		/**
		 * @brief Initialize buttons when clicking "Start game!"
		 */

		 // 
		 // button11 ("Restart game" button)
		 // 
		this->button11->Location = System::Drawing::Point(184, 149);
		this->button11->Name = L"button11";
		this->button11->Size = System::Drawing::Size(88, 31);
		this->button11->TabIndex = 9;
		this->button11->Text = L"Restart game";
		this->button11->UseVisualStyleBackColor = true;
		this->button11->Click += gcnew System::EventHandler(this, &TicTacToe::restart_game);

		 // 
		 // button2
		 // 
		this->button2->Location = System::Drawing::Point(80, 50);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(31, 25);
		this->button2->TabIndex = 2;
		this->button2->Text = L" ";
		this->button2->UseVisualStyleBackColor = true;
		this->button2->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
		// 
		// button3
		// 
		this->button3->Location = System::Drawing::Point(117, 50);
		this->button3->Name = L"button3";
		this->button3->Size = System::Drawing::Size(31, 25);
		this->button3->TabIndex = 3;
		this->button3->Text = L" ";
		this->button3->UseVisualStyleBackColor = true;
		this->button3->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
		// 
		// button4
		// 
		this->button4->Location = System::Drawing::Point(154, 50);
		this->button4->Name = L"button4";
		this->button4->Size = System::Drawing::Size(31, 25);
		this->button4->TabIndex = 4;
		this->button4->Text = L" ";
		this->button4->UseVisualStyleBackColor = true;
		this->button4->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
		// 
		// button5
		// 
		this->button5->Location = System::Drawing::Point(80, 81);
		this->button5->Name = L"button5";
		this->button5->Size = System::Drawing::Size(31, 25);
		this->button5->TabIndex = 5;
		this->button5->Text = L" ";
		this->button5->UseVisualStyleBackColor = true;
		this->button5->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
		// 
		// button6
		// 
		this->button6->Location = System::Drawing::Point(117, 81);
		this->button6->Name = L"button6";
		this->button6->Size = System::Drawing::Size(31, 25);
		this->button6->TabIndex = 6;
		this->button6->Text = L" ";
		this->button6->UseVisualStyleBackColor = true;
		this->button6->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
		// 
		// button7
		// 
		this->button7->Location = System::Drawing::Point(154, 81);
		this->button7->Name = L"button7";
		this->button7->Size = System::Drawing::Size(31, 25);
		this->button7->TabIndex = 7;
		this->button7->Text = L" ";
		this->button7->UseVisualStyleBackColor = true;
		this->button7->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
		// 
		// button8
		// 
		this->button8->Location = System::Drawing::Point(80, 112);
		this->button8->Name = L"button8";
		this->button8->Size = System::Drawing::Size(31, 25);
		this->button8->TabIndex = 8;
		this->button8->Text = L" ";
		this->button8->UseVisualStyleBackColor = true;
		this->button8->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
		// 
		// button9
		// 
		this->button9->Location = System::Drawing::Point(117, 112);
		this->button9->Name = L"button9";
		this->button9->Size = System::Drawing::Size(31, 25);
		this->button9->TabIndex = 9;
		this->button9->Text = L" ";
		this->button9->UseVisualStyleBackColor = true;
		this->button9->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
		// 
		// button10
		// 
		this->button10->Location = System::Drawing::Point(154, 112);
		this->button10->Name = L"button10";
		this->button10->Size = System::Drawing::Size(31, 25);
		this->button10->TabIndex = 10;
		this->button10->Text = L" ";
		this->button10->UseVisualStyleBackColor = true;
		this->button10->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TicTacToe_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button_click(System::Object^ sender, System::EventArgs^ e) { // Buttons to place O and X
		Button^ Numbers = safe_cast<Button^>(sender);

		if ((match_ended) || (Numbers->Text != " ")) { // Check if string is empty. If so, do not change anything.
			return;
		}

		if (turn == 0) {
			Numbers->Text = "O";
			Numbers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			Numbers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			turn = 1;
		}

		else if (turn == 1) {
			Numbers->Text = "X";
			Numbers->ForeColor = System::Drawing::Color::Red;
			Numbers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			turn = 0;
		}

		/**
		 * @brief The system to determine if it's a match or not
		 * We'll first determine if the O wins. After that, we'll check the X
		 */
		 // 																			  // O O O
		if ((button2->Text == "O") && (button3->Text == "O") && (button4->Text == "O")) { //
																						  //
			match_ended = true;
			label2->Text = "The O won the game!";
		}
		//																					   //
		else if ((button5->Text == "O") && (button6->Text == "O") && (button7->Text == "O")) { // O O O
																							   //
			match_ended = true;
			label2->Text = "The O won the game!";
		}
		//																						//
		else if ((button8->Text == "O") && (button9->Text == "O") && (button10->Text == "O")) { //
																								// O O O
			match_ended = true;
			label2->Text = "The O won the game!";
		}

		// 																				  // O
		if ((button2->Text == "O") && (button5->Text == "O") && (button8->Text == "O")) { // O
																						  // O
			match_ended = true;
			label2->Text = "The O won the game!";
		}
		//																					   //   O
		else if ((button3->Text == "O") && (button6->Text == "O") && (button9->Text == "O")) { //   O
																							   //   O
			match_ended = true;
			label2->Text = "The O won the game!";
		}
		//																						//     O
		else if ((button4->Text == "O") && (button7->Text == "O") && (button10->Text == "O")) { //     O
																								//     O
			match_ended = true;
			label2->Text = "The O won the game!";
		}

		//																						// O
		else if ((button2->Text == "O") && (button6->Text == "O") && (button10->Text == "O")) { //   O
																								//     O
			match_ended = true;
			label2->Text = "The O won the game!";
		}

		//																					   //     O
		else if ((button4->Text == "O") && (button6->Text == "O") && (button8->Text == "O")) { //   O
																							   // O
			match_ended = true;
			label2->Text = "The O won the game!";
		}

		/**
		 * @brief The system to determine
		 * if it's a match or not (for the X)
		 * We'll determine if the X wins.
		 */
		 // 																			  // X X X
		if ((button2->Text == "X") && (button3->Text == "X") && (button4->Text == "X")) { //
																						  //
			match_ended = true;
			label2->Text = "The X won the game!";
		}
		//																					   //
		else if ((button5->Text == "X") && (button6->Text == "X") && (button7->Text == "X")) { // X X X
																							   //
			match_ended = true;
			label2->Text = "The X won the game!";
		}
		//																						//
		else if ((button8->Text == "X") && (button9->Text == "X") && (button10->Text == "X")) { //
																								// X X X
			match_ended = true;
			label2->Text = "The X won the game!";
		}

		// 																				  // X
		if ((button2->Text == "X") && (button5->Text == "X") && (button8->Text == "X")) { // X
																						  // X
			match_ended = true;
			label2->Text = "The X won the game!";
		}
		//																					   //   X
		else if ((button3->Text == "X") && (button6->Text == "X") && (button9->Text == "X")) { //   X
																							   //   X
			match_ended = true;
			label2->Text = "The X won the game!";
		}
		//																						//     X
		else if ((button4->Text == "X") && (button7->Text == "X") && (button10->Text == "X")) { //     X
																								//     X
			match_ended = true;
			label2->Text = "The X won the game!";
		}

		//																						// X
		else if ((button2->Text == "X") && (button6->Text == "X") && (button10->Text == "X")) { //   X
																								//     X
			match_ended = true;
			label2->Text = "The X won the game!";
		}

		//																					   //     X
		else if ((button4->Text == "X") && (button6->Text == "X") && (button8->Text == "X")) { //   X
																							   // X
			match_ended = true;
			label2->Text = "The X won the game!";
		}


	}
	private: System::Void restart_game(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure you want to end match?", "Restart game", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);

		if (System::Windows::Forms::DialogResult::No == result)
		{
			// "No" or "Cancel" button.
			return;
		}
		else
		{
			// "Yes" button.

			match_ended = false;  // Match has been restarted, therefore it's not ended.
			turn = 0; // Make the O go first.

			label2->Text = " "; // Reset winner text to default settings.

			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(80, 50);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(31, 25);
			this->button2->TabIndex = 2;
			this->button2->Text = L" ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(117, 50);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(31, 25);
			this->button3->TabIndex = 3;
			this->button3->Text = L" ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(154, 50);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(31, 25);
			this->button4->TabIndex = 4;
			this->button4->Text = L" ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(80, 81);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(31, 25);
			this->button5->TabIndex = 5;
			this->button5->Text = L" ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(117, 81);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(31, 25);
			this->button6->TabIndex = 6;
			this->button6->Text = L" ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(154, 81);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(31, 25);
			this->button7->TabIndex = 7;
			this->button7->Text = L" ";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(80, 112);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(31, 25);
			this->button8->TabIndex = 8;
			this->button8->Text = L" ";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(117, 112);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(31, 25);
			this->button9->TabIndex = 9;
			this->button9->Text = L" ";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(154, 112);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(31, 25);
			this->button10->TabIndex = 10;
			this->button10->Text = L" ";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
		}
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(this,
		"Tic Tac Toe game, v0.1 (initial release)\n"
		"Copyright (C) 2020-2021 David Leal (halfpacho@gmail.com)\n"
		"\nThis project is licensed under GNU General Public License v3.0\n"
		"Visit https://www.gnu.org/licenses/gpl-3.0.en.html for more information about the license.", "About", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
