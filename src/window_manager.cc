#include "../include/window_manager.h"

#include <cstdio>
#include <string>
#include <iostream>
#include <glad/glad.h>

using namespace std; 

WindowManager::WindowManager() {
	this->width_= 640;
	this->height_ = 480;
	this->fps_cap_ = 120;
	this->title_ = "Project69";
	this->window_ = nullptr;
}

WindowManager::WindowManager(int width, int height, int fps_cap, string title) {
  this->width_ = width;
  this->height_ = height;
  this->fps_cap_ = fps_cap;
  this->title_ = title;
  this->window_ = nullptr;
}

WindowManager::~WindowManager() {
	glfwTerminate();
	this->window_ = nullptr;
	printf("Terminating process");
}

void WindowManager::CreateDisplay() {

	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	window_ = glfwCreateWindow(width_, height_, &title_[0], NULL, NULL);

	if (window_ == NULL) {
		printf("Something went wrong");
    CloseDisplay();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window_);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		printf("Failed to initialize GLAD");
    CloseDisplay();
		exit(EXIT_FAILURE);
	}

	glViewport(0, 0, 800, 600);
}

void WindowManager::UpdateDisplay() {
  glfwSwapBuffers(window_);

}

void WindowManager::CloseDisplay() {
	glfwDestroyWindow(window_);
  glfwTerminate();
  window_ = nullptr;
}

GLFWwindow* WindowManager::Window() {
  return window_;
}
