#include "Game_Scene.h"
#include <GLFW/glfw3.h>

void Scene::Render() {
    glClearColor(0, 0.05, 0.08, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);

    glColor4f(1.0f, 0.0f, 0.0f, 0.5f);
    glVertex2f(-0.80f, 0.20f);
    glVertex2f( -0.20f, 0.20f);
    glVertex2f( -0.20f, 0.03f);
    glVertex2f(-0.80f, 0.03f);
    glEnd();
}