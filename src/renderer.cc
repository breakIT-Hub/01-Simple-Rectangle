#include "../include/renderer.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h> 
#include "../include/raw_model.h"


Renderer::Renderer() {

}


Renderer::~Renderer() {

}


void Renderer::Prepare() {
  glClearColor(1, 0, 0, 1);
}


void Renderer::Render(RawModel* model) {
  glBindVertexArray(model->GetVaoId());
  glEnableVertexAttribArray(0);
  glDrawArrays(GL_TRIANGLES, 0, model->GetVertexCount());
  glDisableVertexAttribArray(0);
  glBindVertexArray(0);
}

