/***************************************************************************
 * main.cpp
 *--------------------------------------------------------------------------
 * By Aspen Cristobal and Amy
 *--------------------------------------------------------------------------
 * Main source file for Breadth-First Search (BFS) algorithm
 **************************************************************************/
#include <iostream>
#include <string>
#include <vector>

#include "bfs.h"
#include "data.h"

//using namespace std;

int main() {
    const int SIZE = cities.size();

    /***********************************************************************
    * DATA
    ***********************************************************************/
    

    /***********************************************************************
    * PART 1 - DFS Implementation
    ***********************************************************************/

    /***********************************************************************
    * PART 2 - BFS Implementation
    ***********************************************************************/
    std::vector<std::vector<int>> adjMat(SIZE, std::vector<int>(SIZE, 0));

    addEdge(adjMat, SE, SF, 807);
    addEdge(adjMat, SE, DEN, 1331);
    addEdge(adjMat, SE, CHI, 2097);
    addEdge(adjMat, SF, DEN, 1267);
    addEdge(adjMat, SF, LA, 381);
    addEdge(adjMat, DEN, LA, 1015);
    addEdge(adjMat, DEN, KC, 599);
    addEdge(adjMat, DEN, CHI, 1003);
    addEdge(adjMat, CHI, BO, 983);
    addEdge(adjMat, CHI, NY, 787);
    addEdge(adjMat, CHI, KC, 533);
    addEdge(adjMat, LA, DEN, 1015);
    addEdge(adjMat, LA, KC, 1663);
    addEdge(adjMat, LA, DA, 1435);
    addEdge(adjMat, KC, DA, 496);
    addEdge(adjMat, KC, AT, 864);
    addEdge(adjMat, KC, NY, 1260);
    addEdge(adjMat, NY, BO, 214);
    addEdge(adjMat, NY, AT, 888);
    addEdge(adjMat, AT, MI, 661);
    addEdge(adjMat, AT, HO, 810);
    addEdge(adjMat, HO, MI, 1187);
    
    std::cout << "Part B - BFS\n";
    bfs(adjMat, DEN);

    return 0;
} // END main