#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> tasks;
    int choice;
    string task;

    while(true) {
        cout << "\n--- TO DO LIST ---\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Remove Task\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if(choice == 1) {
            cout << "Enter task: ";
            getline(cin, task);
            tasks.push_back(task);
            cout << "Task added!\n";
        }

        else if(choice == 2) {
            cout << "\nYour Tasks:\n";
            for(int i = 0; i < tasks.size(); i++) {
                cout << i+1 << ". " << tasks[i] << endl;
            }
        }

        else if(choice == 3) {
            int num;
            cout << "Enter task number to remove: ";
            cin >> num;

            if(num > 0 && num <= tasks.size()) {
                tasks.erase(tasks.begin() + num - 1);
                cout << "Task removed!\n";
            } else {
                cout << "Invalid task number.\n";
            }
        }

        else if(choice == 4) {
            cout << "Exiting program.\n";
            break;
        }

        else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}