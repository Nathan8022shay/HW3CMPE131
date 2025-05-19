#include "Task.h"

Task::Task(string taskDescription) {
    description = taskDescription;
    completed = false;
}

void Task::markAsDone() {
    completed = true;
}

bool Task::isDone() const {
    return completed;
}

string Task::getDescription() const {
    return description;
}
