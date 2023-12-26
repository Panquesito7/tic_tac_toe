#include "menu.hpp"
#include "game.hpp"

#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// TicTacToe summary
	/// </summary>
	public ref class TicTacToe : public System::Windows::Forms::Form
	{
	public:
		TicTacToe(void)
		{
			InitializeComponent();
			//
			//TODO: add constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up the resources being used.
		/// </summary>
		~TicTacToe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ multiplayer_mode;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ restartgame;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Button^ ai_mode;

	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ turn_o;
	private: System::Windows::Forms::Button^ turn_x;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ backmodeselect;

	private: System::ComponentModel::IContainer^ components;











	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method to support the Designer.
		/// You cannot modify the content of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TicTacToe::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->multiplayer_mode = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->restartgame = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ai_mode = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->turn_o = (gcnew System::Windows::Forms::Button());
			this->turn_x = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->backmodeselect = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(59, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tic Tac Toe";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->label1, L"Click to know more about Tic Tac Toe.");
			this->label1->Click += gcnew System::EventHandler(this, &TicTacToe::label1_Click);
			this->label1->MouseLeave += gcnew System::EventHandler(this, &TicTacToe::label1_MouseLeave);
			this->label1->MouseHover += gcnew System::EventHandler(this, &TicTacToe::label1_MouseHover);
			// 
			// multiplayer_mode
			// 
			this->multiplayer_mode->Cursor = System::Windows::Forms::Cursors::Hand;
			this->multiplayer_mode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->multiplayer_mode->ForeColor = System::Drawing::SystemColors::ControlText;
			this->multiplayer_mode->Location = System::Drawing::Point(28, 82);
			this->multiplayer_mode->Name = L"multiplayer_mode";
			this->multiplayer_mode->Size = System::Drawing::Size(112, 30);
			this->multiplayer_mode->TabIndex = 1;
			this->multiplayer_mode->Text = L"Multiplayer";
			this->multiplayer_mode->UseVisualStyleBackColor = true;
			this->multiplayer_mode->Click += gcnew System::EventHandler(this, &TicTacToe::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(80, 58);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(31, 25);
			this->button2->TabIndex = 8;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Location = System::Drawing::Point(117, 120);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(31, 25);
			this->button9->TabIndex = 1;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Location = System::Drawing::Point(80, 120);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(31, 25);
			this->button8->TabIndex = 2;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(80, 89);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(31, 25);
			this->button5->TabIndex = 5;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Location = System::Drawing::Point(117, 89);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(31, 25);
			this->button6->TabIndex = 4;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Location = System::Drawing::Point(154, 89);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(31, 25);
			this->button7->TabIndex = 3;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(154, 58);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(31, 25);
			this->button4->TabIndex = 6;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(117, 58);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(31, 25);
			this->button3->TabIndex = 7;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Location = System::Drawing::Point(154, 120);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(31, 25);
			this->button10->TabIndex = 0;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &TicTacToe::button_click);
			// 
			// restartgame
			// 
			this->restartgame->Cursor = System::Windows::Forms::Cursors::Hand;
			this->restartgame->Location = System::Drawing::Point(187, 156);
			this->restartgame->Name = L"restartgame";
			this->restartgame->Size = System::Drawing::Size(88, 31);
			this->restartgame->TabIndex = 9;
			this->restartgame->Text = L"Restart game";
			this->restartgame->UseVisualStyleBackColor = true;
			this->restartgame->Visible = false;
			this->restartgame->Click += gcnew System::EventHandler(this, &TicTacToe::restart_game);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 15);
			this->label2->TabIndex = 10;
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
			// ai_mode
			// 
			this->ai_mode->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ai_mode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ai_mode->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ai_mode->Location = System::Drawing::Point(146, 82);
			this->ai_mode->Name = L"ai_mode";
			this->ai_mode->Size = System::Drawing::Size(112, 30);
			this->ai_mode->TabIndex = 12;
			this->ai_mode->Text = L"A.I.";
			this->ai_mode->UseVisualStyleBackColor = true;
			this->ai_mode->Click += gcnew System::EventHandler(this, &TicTacToe::button12_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->ToolTipTitle = L"Tic Tac Toe";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(69, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 15);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Who shall start first\?";
			this->label3->Visible = false;
			// 
			// turn_o
			// 
			this->turn_o->Cursor = System::Windows::Forms::Cursors::Hand;
			this->turn_o->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->turn_o->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->turn_o->Location = System::Drawing::Point(51, 89);
			this->turn_o->Name = L"turn_o";
			this->turn_o->Size = System::Drawing::Size(75, 23);
			this->turn_o->TabIndex = 14;
			this->turn_o->Text = L"O";
			this->turn_o->UseVisualStyleBackColor = true;
			this->turn_o->Visible = false;
			this->turn_o->Click += gcnew System::EventHandler(this, &TicTacToe::turn_Click);
			// 
			// turn_x
			// 
			this->turn_x->Cursor = System::Windows::Forms::Cursors::Hand;
			this->turn_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->turn_x->ForeColor = System::Drawing::Color::Red;
			this->turn_x->Location = System::Drawing::Point(146, 89);
			this->turn_x->Name = L"turn_x";
			this->turn_x->Size = System::Drawing::Size(75, 23);
			this->turn_x->TabIndex = 15;
			this->turn_x->Text = L"X";
			this->turn_x->UseVisualStyleBackColor = true;
			this->turn_x->Visible = false;
			this->turn_x->Click += gcnew System::EventHandler(this, &TicTacToe::turn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(90, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 15);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Choose mode";
			// 
			// backmodeselect
			// 
			this->backmodeselect->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backmodeselect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backmodeselect->Location = System::Drawing::Point(65, 127);
			this->backmodeselect->Name = L"backmodeselect";
			this->backmodeselect->Size = System::Drawing::Size(156, 23);
			this->backmodeselect->TabIndex = 17;
			this->backmodeselect->Text = L"Go back to mode select";
			this->backmodeselect->UseVisualStyleBackColor = true;
			this->backmodeselect->Visible = false;
			this->backmodeselect->Click += gcnew System::EventHandler(this, &TicTacToe::button15_Click);
			// 
			// TicTacToe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 194);
			this->Controls->Add(this->backmodeselect);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->turn_x);
			this->Controls->Add(this->turn_o);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ai_mode);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->multiplayer_mode);
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
			this->Controls->Add(this->restartgame);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"TicTacToe";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tic Tac Toe";
			this->Load += gcnew System::EventHandler(this, &TicTacToe::TicTacToe_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Array containing the buttons to place O and X.
	array<Button^>^ buttons = gcnew array<Button^>(11);

	private: System::Void button_click(System::Object^ sender, System::EventArgs^ e) { // Buttons to place O and X
		is_match(sender, buttons, label2);
	}
	private: System::Void restart_game(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure you want to end the current match?", "Restart game", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);

		if (System::Windows::Forms::DialogResult::No == result)
		{
			return;
		} // Else, continue.

		// The text buttons (O and X).
		for (int i = 2; i <= 10; i++) {
			Controls["button" + i]->Enabled = false;
			Controls["button" + i]->Visible = false;
			Controls["button" + i]->Text = "";
		}

		restartgame->Visible = false; // The restart game button.

		match_ended = false;  // Match has been restarted, therefore it hasn't ended.
		label2->Text = ""; // Remove winner text.

		// Choose turn buttons.
		choose_turn(turn_o, turn_x, label3, backmodeselect, true);
	}
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(this,
		"Tic Tac Toe game, v0.2.0 (initial release)\n"
		"Copyright (C) 2020-2023 David Leal (halfpacho@gmail.com)\n"
		"\nThis project is licensed under GNU General Public License v3.0\n"
		"Visit https://www.gnu.org/licenses/gpl-3.0.en.html for more information about the license.", "About", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(this, "This mode is not available yet. Coming soon!", "Coming soon!", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	choose_mode(multiplayer_mode, ai_mode, label4, turn_o, turn_x, backmodeselect, label3, false);
}
private: System::Void turn_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = safe_cast<Button^>(sender);

	if (button->Text == "O") {
		turn = 0;
	}
	else if (button->Text == "X") {
		turn = 1;
	}

	// Hide the buttons to choose the turn.
	choose_turn(turn_o, turn_x, label3, backmodeselect, false);

	for (int i = 2; i <= 10; i++) {
		Controls["button" + i]->Enabled = true;
		Controls["button" + i]->Visible = true;
	}
	backmodeselect->Visible = false;
	restartgame->Visible = true;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	choose_mode(multiplayer_mode, ai_mode, label4, turn_o, turn_x, backmodeselect, label3, true);
}
private: System::Void TicTacToe_Load(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 2; i < buttons->Length; i++) {
		buttons[i] = safe_cast<Button^>(Controls["button" + i]);
	}
}
private: System::Void label1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	label1->Font = gcnew System::Drawing::Font(label1->Font, FontStyle::Underline | FontStyle::Bold);
	label1->ForeColor = System::Drawing::Color::Blue;

}
private: System::Void label1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label1->Font = gcnew System::Drawing::Font(label1->Font, FontStyle::Regular | FontStyle::Bold);
	label1->ForeColor = System::Drawing::Color::Black;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show(this, "You're going to be redirected to https://en.wikipedia.org/wiki/Tic-tac-toe. Continue?", "Redirect", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);

	if (System::Windows::Forms::DialogResult::Yes == result) {
		System::Diagnostics::Process::Start("https://en.wikipedia.org/wiki/Tic-tac-toe");
	}
}
};
}
