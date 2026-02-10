#ifndef JOB_H
#define JOB_H

#include <vector>

struct Job {
    int id;
    int arrivalTime;
    int burstTime;
    int priority;
    int waitingTime = 0;
    int turnaroundTime = 0;
    int completionTime = 0;
};

// Input functions (Member 2)
std::vector<Job> getJobsFromUserInput();
std::vector<Job> getSampleJobs();

// Algorithm functions (Member 1)
void runFCFS(std::vector<Job>& jobs);
void runPriorityScheduling(std::vector<Job>& jobs);

// Analytics functions (Member 3)
void calculateAnalytics(const std::vector<Job>& jobs);

// Visuals functions (Member 4)
void printGanttChart(const std::vector<Job>& jobs);
void showProgressBar(int current, int total);

#endif // JOB_H
