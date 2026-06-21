#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> notes;
    int choice;
    string note;

    do {

        cout << "\n1. Add Note\n";
        cout << "2. Show Notes\n";
        cout << "0. Exit\n";

        cin >> choice;
        cin.ignore();

        switch(choice) {

            case 1:
                cout << "Note: ";
                getline(cin, note);
                notes.push_back(note);
                break;

            case 2:
                for(int i = 0; i < notes.size(); i++)
                    cout << i + 1 << ". "
                         << notes[i] << endl;
                break;
        }

    } while(choice != 0);

    return 0;
}
