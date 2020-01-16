#include "../include/loader.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "../include/raw_model.h"

Loader::Loader() {
}

Loader::~Loader() {
}

RawModel* Loader::LoadToVao(std::vector<float>& positions) {
  GLuint vao_id = CreateVao();
  StoreDataInAttributeList(0, positions);
  UnbindVao();
  return new RawModel(vao_id, positions.size()/3);
}

GLuint Loader::CreateVao() {
  GLuint vao_id;
  glGenVertexArrays(1, &vao_id);
  return vao_id;
}

void Loader::StoreDataInAttributeList(int attribute_number, std::vector<float>& data)  {
  GLuint vbo_id = 0;
  glBindBuffer(GL_ARRAY_BUFFER, vbo_id); 
  glBufferData(GL_ARRAY_BUFFER, data.size(), data, GL_STATIC_DRAW); 
}

void Loader::UnbindVao() {
  glBindVertexArray(0);
}


