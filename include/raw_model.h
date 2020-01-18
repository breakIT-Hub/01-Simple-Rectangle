#ifndef RAWMODEL_H
#define RAWMODEL_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

class RawModel {
public:
  RawModel();
  RawModel(GLuint vao_id, int vertex_count);
  ~RawModel();
  GLuint GetVaoId();
  GLuint GetVertexCount();

private:
  GLuint vao_id_;
  GLuint vertex_count_;
};

#endif // RAWMODEL_H
