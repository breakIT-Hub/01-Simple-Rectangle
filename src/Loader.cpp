#include "../include/Loader.h"

Loader::Loader() {
  this->vao_id_ = 0;
  this->vertex_count_ = 0;
}

Loader::Loader(int vao_id, int vertex_count) {
  this->vao_id_ = vao_id;
  this->vertex_count_ = vertex_count;
}

RawModel* Loader::loadToVao(float *positions) {
  return nullptr;``
}



