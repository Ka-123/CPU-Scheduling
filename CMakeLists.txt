cmake_minimum_required(VERSION 3.10)
project(JobScheduler)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add all source files
add_executable(JobScheduler 
    main.cpp 
    input.cpp 
    algorithms.cpp 
    analytics.cpp 
    visuals.cpp 
    Job.h
)

# For thread support used in visuals.cpp (optional but good practice)
find_package(Threads REQUIRED)
target_link_libraries(JobScheduler PRIVATE Threads::Threads)
