#ifndef MENU_HPP
#define MENU_HPP

void choose_turn(System::Windows::Forms::Button^ turn_o, System::Windows::Forms::Button^ turn_x,
	System::Windows::Forms::Label^ label3, System::Windows::Forms::Button^ backmodeselect, bool);
void choose_mode(System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Label^,
	System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Label^, bool);

#endif // MENU_HPP
