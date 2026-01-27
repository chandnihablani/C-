#include <iostream>
using namespace std;

int main() {
    int bookID[100], n = 0, choice, id, found;

    do {
        cout << "\n===== LIBRARY SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter Book ID: ";
            cin >> bookID[n];
            n++;
            cout << "Book added successfully.\n";
        }

        else if(choice == 2) {
            if(n == 0)
                cout << "No books available.\n";
            else {
                for(int i = 0; i < n; i++)
                    cout << "Book ID: " << bookID[i] << endl;
            }
        }

        else if(choice == 3) {
            cout << "Enter Book ID to search: ";
            cin >> id;
            found = 0;
            for(int i = 0; i < n; i++) {
                if(bookID[i] == id) {
                    cout << "Book found!\n";
                    found = 1;
                    break;
                }
            }
            if(found == 0)
                cout << "Book not found.\n";
        }

        else if(choice == 4) {
            cout << "Thank you!\n";
        }

        else {
            cout << "Invalid choice.\n";
        }

    } while(choice != 4);

    return 0;
}

