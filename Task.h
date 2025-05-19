/*
 * Task.h
 *
 *  Created on: May 18, 2025
 *      Author: nprij
 */

#ifndef TASK_H
#define TASK_H

#include <string>

using namespace std;

class Task {
public:
    Task(string taskDescription);
    void markAsDone();
    bool isDone() const;
    string getDescription() const;

private:
    string description;
    bool completed;
};

#endif /* TASK_H_ */
