#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    string items[] = {"Rock", "Paper", "Scissors"};
    string user;
    int computer;

    cout << "Enter Rock, Paper or Scissors: ";
    cin >> user;

    srand(time(NULL));
    computer = rand() % 3;

    cout << "You chose: " << user << endl;
    cout << "Computer chose: " << items[computer] << endl;

    if (user == items[computer]) {
        cout << "Result: Draw" << endl;
    }
    else if ((user == "Rock" && items[computer] == "Scissors") ||
             (user == "Paper" && items[computer] == "Rock") ||
             (user == "Scissors" && items[computer] == "Paper")) {
        cout << "Result: You Win!" << endl;
    }
    else {
        cout << "Result: Computer Wins!" << endl;
    }

    return 0;
}
