#ifndef LOADER_H
#define LOADER_H

#include <vector>
#include "RawModel.h"


class Loader {
  public:
    Loader();
    ~Loader();
    RawModel* loadToVAO(std::vector<float>& positions);
   
  private:
    int createVAO();
    void storeDataInAttributeList(int attribute_number, std::vector<float>& data);
    void unbindVAO();
};

#endif // LOADER_H
