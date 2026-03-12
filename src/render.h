#pragma once
#include <GL/gl.h>
#include "model.h"

class Renderer
{
public:

    bool init();
    void upload(const Model& model);
    void draw();

    bool running();

private:

    GLuint vao=0;
    GLuint vbo=0;
    GLuint ebo=0;

    size_t indexCount=0;
};
