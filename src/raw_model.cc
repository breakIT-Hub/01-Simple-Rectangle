#include "../include/raw_model.h"

RawModel::RawModel() {
  this->vao_id_ = 0;
  this->vertex_count_ = 0;
};

RawModel::RawModel(int vao_id, int vertex_count) {
  this->vao_id_ = vao_id;
  this->vertex_count_ = vertex_count;
}

int RawModel::getVaoID() {
  return this->vao_id_;
}

int RawModel::getVertexCount(){
  return this->vertex_count_;
}


