#define MAX_HAND 6
#include <GLFW/glfw3.h>

class Table {
private:
  int Cards[MAX_HAND];
public:
  void Render() {
    glBegin(GL_LINE_LOOP);

    glColor4f(1.0f, 0.0f, 0.0f, 0.5f);
    glVertex2f(-0.70f, 0.40f);
    glVertex2f(0.70f, 0.40f);
    glVertex2f(0.70f, 0.03f);
    glVertex2f(-0.70f, 0.03f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor4f(0.0f, 1.0f, 0.0f, 0.5f);
    glVertex2f(-0.70f, -0.40f);
    glVertex2f(0.70f, -0.40f);
    glVertex2f(0.70f, -0.03f);
    glVertex2f(-0.70f, -0.03f);
    glEnd();
  }
};
