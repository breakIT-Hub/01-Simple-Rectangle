#include "../include/loader.h"

#include <vector> 
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "../include/raw_model.h"

Loader::Loader() {
  vaos.push_back(0);
  vbos.push_back(0);
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
  vaos.push_back(vao_id);
  return vao_id;
}

void Loader::StoreDataInAttributeList(int attribute_number, std::vector<float>& data)  {
  GLuint vbo_id = 0;
  glGenBuffers(1, &vbo_id);
  vbos.push_back(vbo_id);
  glBindBuffer(GL_ARRAY_BUFFER, vbo_id); 
  glBufferData(GL_ARRAY_BUFFER, data.size(), &data, GL_STATIC_DRAW);
  glVertexAttribPointer(attribute_number, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glBindBuffer(GL_ARRAY_BUFFER, 0); 
}

void Loader::CleanUp() {
  glDeleteVertexArrays(vaos.size(), (const GLuint*) &vaos);
  glDeleteBuffers(vbos.size(), (const GLuint*) &vbos);
}

void Loader::UnbindVao() {
  glBindVertexArray(0);
}


