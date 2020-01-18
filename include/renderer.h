#ifndef RENDERER_H
#define RENDERER_H

#include "../include/raw_model.h"


class Renderer {

  public:
    Renderer();
    ~Renderer();
    void Prepare();
    void Render(RawModel* model);

  private:

};


#endif // RENDERER_H
