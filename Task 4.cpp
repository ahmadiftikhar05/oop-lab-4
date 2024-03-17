#include <list>
#include <iostream>
#include <vector>
using namespace std;

void addnewtask(list<list<string>>& todo_list, string addtask) {
    list<string> newtask;
    newtask.push_back(addtask);
    todo_list.push_back(newtask);
    cout << "\n-Task Added\n" << endl;
}

void deleteRow(list<list<string>>& todo_list, int taskNo) {
    int count = 1;
    for (auto i = todo_list.begin(); i != todo_list.end(); ++i) {
        if (taskNo == count) {
            todo_list.erase(i);
            cout << "\n-Task Deleted\n" << endl;
            return;
        }
        count++;
    }
    cout << "\n-Task Not Found\n" << endl;
}

void display(list<list<string>>& todo_list) {
    for (auto row : todo_list) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    list<list<string>> todo_list;
    char choice = ' ';
    while (choice != 'd') {
        cout << "----------Welcome----------\n"
             << "a) Add New Task\n"
             << "b) Delete Task\n"
             << "c) Display Tasks List\n"
             << "d) Exit.\n"
             << "Enter Your Choice : ";
        cin >> choice;
        string task;
        if (choice == 'a') {
            cout << "Enter task = ";
            cin.ignore();
            getline(cin, task);
            addnewtask(todo_list, task);
        } else if (choice == 'b') {
            int task_num;
            cout << "Enter Task Number = ";
            cin >> task_num;
            deleteRow(todo_list, task_num);
        } else if (choice == 'c') {
            display(todo_list);
        } else if (choice == 'd') {
            return 0;
        } else {
            cout << "\n-Invalid input\n" << endl;
        }
    }
    return 0;
}
