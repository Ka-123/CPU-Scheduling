#include "Job.h"
#include <iostream>
#include <vector>
#include <iomanip>

void calculateAnalytics(const std::vector<Job>& jobs) {
    if (jobs.empty()) return;

    double totalWaiting = 0;
    double totalTurnaround = 0;

    std::cout << "\n--- Job Statistics ---\n";
    std::cout << std::left << std::setw(5) << "ID" 
              << std::setw(10) << "Arrival" 
              << std::setw(10) << "Burst" 
              << std::setw(10) << "Wait" 
              << std::setw(15) << "Turnaround" 
              << std::setw(15) << "Completion" << "\n";

    for (const auto& job : jobs) {
        totalWaiting += job.waitingTime;
        totalTurnaround += job.turnaroundTime;
        std::cout << std::left << std::setw(5) << job.id 
                  << std::setw(10) << job.arrivalTime 
                  << std::setw(10) << job.burstTime 
                  << std::setw(10) << job.waitingTime 
                  << std::setw(15) << job.turnaroundTime 
                  << std::setw(15) << job.completionTime << "\n";
    }

    std::cout << "\nAverage Waiting Time: " << std::fixed << std::setprecision(2) << totalWaiting / jobs.size() << "\n";
    std::cout << "Average Turnaround Time:" << totalTurnaround / jobs.size() << "\n";
}
