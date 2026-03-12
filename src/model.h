#pragma once
#include <vector>

struct Vertex
{
    float x,y,z;
};

class Model
{
public:

    std::vector<Vertex> vertices;
    std::vector<unsigned int> indices;

    void createTestMesh();
};
