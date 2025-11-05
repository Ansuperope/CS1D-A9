/***************************************************************************
 * bfs.h - Part 2
 *------------------------------------------------------------------------
 * Header file for Breadth-First Search (BFS) algorithm
 **************************************************************************/
#ifndef BFS_H
#define BFS_H

#include <iostream>
#include <vector>

void addEdge(std::vector<std::vector<int>> &mat, int cityA, int cityB, int dis) {
    mat[cityA][cityB] = dis;
    mat[cityB][cityA] = dis;
}

// OUTPUT MATRIX - test to see if worked
// void displayMatrix (std::vector<std::vector<int>> &mat) {
//     int v = mat.size();

//     for (int cityA = 0; cityA < v; cityA++) {
//         for (int cityB = 0; cityB < v; cityB++) {
//             std::cout << mat[cityA][cityB] << " ";
//         }
//         std::cout << std::endl;
//     }
// }

class BFS {
public:
    std::vector<int> visited;
    std::vector<int> order;
private:
};

#endif // BFS_H