# calmingSweep
# Traveling Salesman Problem Solution

This program solves the Traveling Salesman Problem using a basic algorithm. It aims to find the shortest possible route that visits a given set of cities exactly once and returns to the starting city.

# Features

- Random generation of initial tours
- Crossover operation for generating new tours from parent tours
- Mutation operation for introducing random changes to a tour
- Fitness calculation based on the total distance of a tour
- Selection operation for creating the next generation of tours

# Getting Started
# Prerequisites
- C++ compiler with C++11 support

# Building and Running the Program
1. Clone the repository or download the source code files.
2. Open a terminal and navigate to the directory containing the source code.
3. Compile the program using the following command:
g++ -std=c++11 main.cpp -o tsp_solver

4. Run the program:
./tsp_solver

5. Follow the on-screen instructions to provide the necessary input, such as the number of cities and their coordinates.

# Usage

Upon running the program, the user is required to a number of cities and their coordinates. The program creates an initial population of tours and iteratively evolves on them using crossover and mutation operations. The process continues until the program reaches a stopping point, for instance if the maximum number of generations are made.

The program outputs the best tour found and its corresponding distance, providing a solution to the Traveling Salesman Problem for the given input.

# Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.

# License

This project is licensed under the MIT License.
