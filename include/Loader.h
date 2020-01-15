#ifndef LOADER_H
#define LOADER_H

#include "RawModel.h"

class Loader {
  public:
	  Loader();
	  Loader(int vao_id, int vertex_count);
	  ~Loader();
    RawModel* loadToVAO(float *positions);
   
  private:
    int createVAO();
    void storeDataInAttributeList(int attribute_number, float *data);
    void unbindVAO();
};

#endif // LOADER_H
