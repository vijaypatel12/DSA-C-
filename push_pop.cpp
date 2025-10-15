#include <iostream>
using namespace std;
#define MAX 100
class CharStack {
    char stack[MAX];
    int top;
public:
    CharStack() {
        top = -1;
    }
    void push(char ch) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        stack[++top] = ch;
    }
    char pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return '\0';
        }
        return stack[top--];
    }
    void display() {
        for (int i = 0; i <= top; i++) {
            cout << stack[i];
        }
        cout << endl;
    }
    void popSurname() {
         while (top >= 0 && stack[top] != ' ') {
            pop();
        }
         if (top >= 0 && stack[top] == ' ') {
            pop();
        }
    }
    void mergeWithMomName(const char momName[]) {
        for (int i = 0; momName[i] != '\0'; i++) {
            push(momName[i]);
        }
    }
};
int main() {
    CharStack s;
    int choice;
     char fullName[] = "Vijay gurjar ";
    char momName[] = " nammo";
    do {
        cout << "\nMenu:\n";
        cout << "1. Insert full name into stack\n";
        cout << "2. Pop surname from stack\n";
        cout << "3. Merge with mom's name\n";
        cout << "4. Display stack\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            for (int i = 0; fullName[i] != '\0'; i++) {
                s.push(fullName[i]);
            }
            cout << "Full name inserted into stack.\n";
            break;
        case 2:
            s.popSurname();
            cout << "Surname popped from stack.\n";
            break;
        case 3:
            s.mergeWithMomName(momName);
            cout << "Merged with mom's name.\n";
            break;
        case 4:
            cout << "Current stack content: ";
            s.display();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
