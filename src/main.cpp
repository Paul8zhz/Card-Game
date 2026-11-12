
#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <cstdio>
#include "Game_Scene.h"

void ErrorIssue(int code, const char* description) {
    printf("GLFW Error %d: %s\n", code, description);
}

int main() {
        glfwSetErrorCallback(ErrorIssue);

    if (!glfwInit()) {
        printf("GLFW initialization failed!\n");
        return -1;
    }
    GLFWwindow* Game_Window = glfwCreateWindow(1920, 1080, "Game", NULL, NULL);
    if (!Game_Window) {
        printf("failed to spawn game");
        glfwTerminate();
        return -1;
    }

    Scene Game_Scene;

    glfwMakeContextCurrent(Game_Window);
    glViewport(0, 0, 1920, 1080);
    glfwSetFramebufferSizeCallback(Game_Window, [](GLFWwindow*, int w, int h) {
    glViewport(0, 0, w, h);
    });
    while (!glfwWindowShouldClose(Game_Window)) {
        Game_Scene.Render();
        glfwSwapBuffers(Game_Window);
        glfwPollEvents();
    }
    glfwDestroyWindow(Game_Window);
    glfwTerminate();
    return 0;
}
