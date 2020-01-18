#include "../include/raw_model.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>

RawModel::RawModel() {
  this->vao_id_ = 0;
  this->vertex_count_ = 0;
};

RawModel::RawModel(GLuint vao_id, int vertex_count) {
  this->vao_id_ = vao_id;
  this->vertex_count_ = vertex_count;
}

GLuint RawModel::GetVaoId() {
  return this->vao_id_;
}

GLuint RawModel::GetVertexCount(){
  return this->vertex_count_;
}


