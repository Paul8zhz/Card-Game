#include "Game_Scene.h"
#include <GLFW/glfw3.h>
#include "Table.h"

Table table;

void Scene::Render() {
  glClearColor(0, 0.05, 0.08, 1);
  glClear(GL_COLOR_BUFFER_BIT);
  table.Render();
}
