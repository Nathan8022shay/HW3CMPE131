//============================================================================
// Name        : main.cpp
// Author      : Nathan Prijatel
// Version     : 05/18/2025
// Copyright   : Your copyright notice
// Description : main file of task manager
//============================================================================

#include <iostream>
#include <vector>
#include "Task.h"

using namespace std;

void showAllTasks(const vector<Task>& taskList) {
    cout << "\nYour To-Do List:\n";
    for (size_t i = 0; i < taskList.size(); ++i) {
        cout << i + 1 << ". " << taskList[i].getDescription();
        if (taskList[i].isDone()) {
            cout << " [Completed]";
        }
        cout << "\n";
    }
}

int main() {
    vector<Task> taskList;
    int userChoice;

    do {
        cout << "\nTask Manager:\n";
        cout << "1. Add New Task\n";
        cout << "2. View All Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";
        cin >> userChoice;

        if (userChoice == 1) {
            cin.ignore();
            string newTask;
            cout << "Enter the task's description: ";
            getline(cin, newTask);
            taskList.emplace_back(newTask);

        } else if (userChoice == 2) {
            showAllTasks(taskList);

        } else if (userChoice == 3) {
        	size_t taskNumber;
        	cout << "Enter the task number you would like to mark as complete: ";
        	cin >> taskNumber;
        	if (taskNumber > 0 && taskNumber <= taskList.size()) {
        	    taskList[taskNumber - 1].markAsDone();
                cout << "Marked as completed.\n";
            } else {
                cout << "Not a valid task number.\n";
            }
        }

    } while (userChoice != 0);

    cout << "Goodbye!\n";
    return 0;
}

