#include <list>
#include <iostream>
using namespace std;

void addNewRow(list<list<int>>& spreadsheet, list<int>& addrow) {
    spreadsheet.push_back(addrow);
    cout<<"\n-Row Added\n" << endl;
}

void deleteRow(list<list<int>>& spreadsheet, int rowNo) {
    int count = 1;
    for (auto i = spreadsheet.begin(); i != spreadsheet.end(); i++) {
        if (rowNo == count) {
            spreadsheet.erase(i);
            cout<<"\n-Row Deleted\n" << endl;
            return;
        }
        count++;
    }
    cout<<"\n-Row Not Found\n" << endl;
}

void display(list<list<int>>& spreadsheet) {
    if(spreadsheet.empty())
    {
        cout<<"\nlist is empty\n" << endl;
    }
    else
    {
       for (auto row : spreadsheet) {
          for (auto val : row) {
            cout << val << " ";
          }
          cout << endl;
       }
    }
}

int main() {
    list<list<int>> spreadsheet;
    char choice;
    while(choice !='d'){
     cout << "----------Welcome----------\n"
         << "a) Add New Row\n"
         << "b) Delete Row\n"
         << "c) Display Spreadsheet\n"
         << "d) Exit.\n"
         << "Enter Your Choice : ";
     cin >> choice;
     if (choice == 'a') {
        list<int> addrow;
        int no_ofvalues = 0, value;
        cout << "Enter NO. of Elements = ";
        cin >> no_ofvalues;
        cout<<"Enter Values = ";
        for (int i = 0; i < no_ofvalues; i++) {
            cin >> value;
            addrow.push_back(value);
        }
        addNewRow(spreadsheet, addrow);
     } 
     else if (choice == 'b') {
        int row_num;
        cout << "Row Number = ";
        cin >> row_num;
        deleteRow(spreadsheet, row_num);
     } 
     else if (choice == 'c') {
        display(spreadsheet);
     }
     else if (choice == 'd')
     {
         return 0;
     }
     else {
        cout << "Invalid input";
     }
    }
    return 0;
}
