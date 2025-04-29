#include "server.h"
#include "search.h"
#include "reader.h"
#include "graph.h"
#include "result.h"
#include <boost/foreach.hpp>

ptree markersPtree(vector<Node> markers){
  ptree markerTree;
  for (auto marker: markers){
    ptree child;
    child.put("lat", marker.lati);
    child.put("lon", marker.loni);
    ptree tags;
    for (auto tag: marker.tags){
      tags.put(tag.first, tag.second);
    }
    child.addChild("tags",tags);
    markerTree.pushBack(makePair("", child));
  }
  return markerTree;
}
