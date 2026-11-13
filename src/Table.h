#define MAX_HAND 6
#include "Object.h"

class Table : public Object{
private:
  int Cards[MAX_HAND];

public:
    void update(float deltaTime) override;
    void Render() override;
};
