#include "Job.h"
#include <iostream>
#include <vector>

std::vector<Job> getJobsFromUserInput() {
    int n;
    std::cout << "Enter number of jobs: ";
    std::cin >> n;

    std::vector<Job> jobs;
    for (int i = 0; i < n; ++i) {
        Job j;
        j.id = i + 1;
        std::cout << "Job " << j.id << " Arrival Time: ";
        std::cin >> j.arrivalTime;
        std::cout << "Job " << j.id << " Burst Time: ";
        std::cin >> j.burstTime;
        std::cout << "Job " << j.id << " Priority (lower is higher): ";
        std::cin >> j.priority;
        jobs.push_back(j);
    }
    return jobs;
}

std::vector<Job> getSampleJobs() {
    return {
        {1, 0, 5, 2},
        {2, 1, 3, 1},
        {3, 2, 8, 3},
        {4, 3, 6, 4}
    };
}
