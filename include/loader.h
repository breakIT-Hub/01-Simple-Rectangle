#ifndef LOADER_H
#define LOADER_H

#include <vector>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "raw_model.h"

class Loader {
public:
  Loader();
  ~Loader();
  RawModel *LoadToVao(std::vector<float> &positions);
  void CleanUp();
    
private:
  std::vector<GLuint> vaos;
  std::vector<GLuint> vbos;
  GLuint CreateVao();
  void StoreDataInAttributeList(int attribute_number, std::vector<float> &data);
  void UnbindVao();
};

#endif // LOADER_H
