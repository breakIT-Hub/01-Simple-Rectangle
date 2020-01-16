#ifndef WINDOWMANAGER_H
#define WINDOWMANAGER_H

#include <GLFW/glfw3.h>
#include <iostream>
#include <string>

using namespace std;

class WindowManager {
public:
  WindowManager();
  WindowManager(int width, int height, int fps_cap, string title);
  ~WindowManager();
  void CreateDisplay();
  void UpdateDisplay();
  void CloseDisplay();
  GLFWwindow *Window();

private:
  int width_;
  int height_;
  int fps_cap_;
  string title_;
  GLFWwindow *window_;
};

#endif // WINDOWMANAGER_H
