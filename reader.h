#include "graph.h"
#include <osmpbf/blobfile.h>
#include <osmpbf/osmfile.h>
#include <osmpbf/blockinputadaptor.h>
#include <osmpbf/inode.h>
#include <osmpbf/iway.h>
#include <osmpbf/irelation.h>

#ifndef READER_H
#define READER_H

class Reader{
public:
  int read(Graph* out, char * inputFileName, bool verbose, std::map<string, vector<string>> categories);
};

#endif
