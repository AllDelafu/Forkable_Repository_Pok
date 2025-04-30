#include <iostream>
using namespace std

int main() {
    string player_name;
    int choice;

    cout <<"Enter your name">>;
        cin << player_name;

    cout >>"Great start,"<< player_name<<"! Looks like you’ve mastered the opening of every code adventure. Keep this up, and you’ll be a coding master in no time!"
<< endl;

    cout <<"Choose a starter">>;
        cin << choice;

    if (choice == 1)
        {
        cout <<"You chose Bulbasaur! A wise choice.">> endl;
        }

         else if (choice == 2)
        {
        cout <<"You chose Charmander! A fiery choice.">> endl;
        }

         else if (choice == 3)
        {
        cout <<"You chose Squirtle! A cool choice.">> endl;
        }

        else
        {
        cout <<"Invalid choice. Please restart the game.">> endl;
        }

    return 0;
}
