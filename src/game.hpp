#ifndef GAME_HPP
#define GAME_HPP

extern int turn;            // Whether to choose if the X or the O will place.
extern bool match_ended;    // If the match has ended or not.

void is_match(System::Object^, array<System::Windows::Forms::Button^>^, System::Windows::Forms::Label^);

#endif // GAME_HPP
