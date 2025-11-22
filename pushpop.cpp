// #include <iostream>
// using namespace std;

// int stack[5], top = -1;

// int main() {
//     int ch, val;
//     do {
//         cout << "\n1.Push  2.Pop  3.Display  4.Exit\nEnter choice: ";
//         cin >> ch;

//         switch (ch) {
//             case 1:
//                 if (top == 4) cout << "Overflow\n";
//                 else {
//                     cout << "Enter value: ";
//                     cin >> val;
//                     stack[++top] = val;
//                     cout << "Pushed " << val << endl;
//                 }
//                 break;
//             case 2:
//                 if (top == -1) cout << "Underflow\n";
//                 else cout << "Popped " << stack[top--] << endl;
//                 break;
//             case 3:
//                 if (top == -1) cout << "Stack Empty\n";
//                 else {
//                     cout << "Stack: ";
//                     for (int i = top; i >= 0; i--) cout << stack[i] << " ";
//                     cout << endl;
//                 }
//                 break;
//             case 4: cout << "Exit \n"; break;
//             default: cout << "Invalid \n";
//         }
//     } while (ch != 4);
// }
// #include <iostream>
// using namespace std;


// #define MAX 5
// int stack[MAX];
// int top = -1;

// void push() {
//     int val;
//     if (top == MAX - 1) {
//         cout << "Stack Overflow!" << endl;
//     } else {
//         cout << "Enter element to push: ";
//         cin >> val;
//         top++;
//         stack[top] = val;
//         cout << val << " pushed successfully." << endl;
//     }
// }

// void pop() {
//     if (top == -1) {
//         cout << "Stack Underflow" << endl;
//     } else {
//         cout << stack[top] << " popped successfully." << endl;
//         top--;
//     }
// }

// void display() {
//     if (top == -1) {
//         cout << "Stack is Empty!" << endl;
//     } else {
//         cout << "Stack elements are: ";
//         for (int i = top; i >= 0; i--) {
//             cout << stack[i] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int choice;
//     do {
//         cout << "\n Stack Menu " << endl;
//         cout << "1. Push" << endl;
//         cout << "2. Pop" << endl;
//         cout << "3. Display" << endl;
//         cout << "4. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: push(); break;
//             case 2: pop(); break;
//             case 3: display(); break;
//             case 4: cout << "Exiting..." << endl; break;
//             default: cout << "Invalid choice!" << endl;
//         }
//     } while (choice != 4);

//     return 0;
// }






3.

