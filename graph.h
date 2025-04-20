#ifndef GRAPH_H
#define GRAPH_H

#include "node.h"
#include "edge.h"
#include <vector>

class Graph
{
 public:
  int nodeCount;
  std::vector<Node> nodes;
  int edgeCount;
  std::vector<Edge> edges;
  std::vector<int> offset;

  vector<int> grid[60][40];
  vector<int> connectedGrid[60][40];
  void generateCost();
  void generateOut();
  int getNodeId(int64_t globalId, int, int);
  int findNode(double lat, double lon);
  int findNodeByCategory(string group, string category, double currentLat, double currentLon, vector<int>* found);
};

#endif// GRAPH_H
