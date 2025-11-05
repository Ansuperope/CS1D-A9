/***************************************************************************
 * bfs.h - Part 2
 *------------------------------------------------------------------------
 * Header file for Breadth-First Search (BFS) algorithm
 **************************************************************************/
#ifndef BFS_H
#define BFS_H

#include "data.h"

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <unordered_map>

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


// BFS
void bfs(const std::vector<std::vector<int>> &mat, int start) {
    int v = mat.size();

    if (v == 0) return;
    std::vector<bool> visited(v, false);            // univisited cities
    std::vector<int> parent(v, -1);
    std::queue<int> order;                          // cities in order
    std::unordered_map<int, std::string> edgeType;  // stores city edge type
    int discoverDis = 0;            // distances for discover

    order.push(start);
    visited[start] = true;

    while (!order.empty()) {
        int ver = order.front(); 
        order.pop();

        // find neihbors of vertex
        std::vector<std::pair<int,int>> neighbors;
        for (int j = 0; j < v; ++j) {
            int weight = mat[ver][j];
            // treat 0 as "no edge" — change if your sentinel differs
            if (weight != 0) neighbors.emplace_back(weight, j);
        }

        // sort ascending by weight, tie-break by index
        std::sort(neighbors.begin(), neighbors.end(),
                  [](const std::pair<int,int>& cityA, const std::pair<int,int>& cityB){
                      if (cityA.first != cityB.first) return cityA.first < cityB.first;
                      return cityA.second < cityB.second;
                  });

        // enqueue unvisited neighbors in ascending-weight order
        for (auto &p : neighbors) {
            int weight = p.first;
            int neigh = p.second;
            // discovery
            if (!visited[neigh]) {
                visited[neigh] = true;
                order.push(neigh);

                // save type
                parent[neigh] = ver;
                edgeType[ver] = "Discovery";
                std::cout << "Discovery: ";
                printCity(ver);
                std::cout << " -> ";
                printCity(neigh);
                std::cout << "\n";

                discoverDis += weight;
            }
            // cross
            else {
                edgeType[ver] = "Cross";
                std::cout << "Cross: ";
                printCity(ver);
                std::cout << " -> ";
                printCity(neigh);
                std::cout << "\n";
            }
        }
    }
    std::cout << "\nTotal Distance Traveled: " << discoverDis << std::endl;
}

#endif // BFS_H