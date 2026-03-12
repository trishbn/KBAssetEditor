#include <iostream>
#include "renderer.h"
#include "model.h"

int main()
{
    std::cout << "KBAssetEditor started\n";

    Model model;
    model.createTestMesh();

    Renderer renderer;

    renderer.init();
    renderer.upload(model);

    while(renderer.running())
    {
        renderer.draw();
    }

    return 0;
}
