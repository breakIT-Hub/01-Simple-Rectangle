#include "../include/hello_world.h"

#include "../include/loader.h"
#include "../include/renderer.h"
#include "../include/raw_model.h"
#include "../include/window_manager.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <vector>

int main() {

  WindowManager *window_manager =
      new WindowManager(640, 480, 120, "First Window");
  window_manager->CreateDisplay();

  Loader *loader = new Loader();
  Renderer *renderer = new Renderer();

  std::vector<float> vertices = { -0.5, 0.5,  0, 
                                  -0.5, -0.5, 0, 
                                  0.5,  -0.5, 0,
                                  0.5,  -0.5, 0, 
                                  0.5,  0.5,  0, 
                                  -0.5, 0.5,  0
  };

  RawModel* model = loader->LoadToVao(vertices);

  while (!glfwWindowShouldClose(window_manager->Window())) {
    renderer->Prepare();
    renderer->Render(model);
    window_manager->UpdateDisplay();
  }

  loader->CleanUp();
  window_manager->CloseDisplay();
  delete window_manager;
  return 0;
}
