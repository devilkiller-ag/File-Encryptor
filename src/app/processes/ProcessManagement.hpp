#ifndef PROCESS_MANAGEMENT_HPP
#define PROCESS_MANAGEMENT_HPP


#include <queue>
#include <memory>
#include "Task.hpp"


class ProcessManagement {
public:
    ProcessManagement();
    bool submitToQueue(std::unique_ptr<Task> task);
    void executeTasks();

private:
    std::queue<std::unique_ptr<Task>> taskQueue;
};


#endif PROCESS_MANAGEMENT_HPP
