#include "../include/hello_world.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "../include/window_manager.h"

int main() {

  WindowManager *window_manager =
      new WindowManager(640, 480, 120, "First Window");
  window_manager->CreateDisplay();

  window_manager->UpdateDisplay();

  window_manager->CloseDisplay();
  delete window_manager;
  return 0;
}
