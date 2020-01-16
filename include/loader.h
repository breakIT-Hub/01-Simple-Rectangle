#ifndef LOADER_H
#define LOADER_H

#include "raw_model.h"
#include <vector>

class Loader {
public:
  Loader();
  ~Loader();
  RawModel *LoadToVao(std::vector<float> &positions);

private:
  int CreateVao();
  void StoreDataInAttributeList(int attribute_number, std::vector<float> &data);
  void UnbindVao();
};

#endif // LOADER_H
