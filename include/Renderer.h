#ifndef PATHTRACING_RENDERER_H
#define PATHTRACING_RENDERER_H

#if __INTELLISENSE__
#undef __ARM_NEON
#undef __ARM_NEON__
#endif
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <memory>
#include <eigen3/Eigen/Eigen>
#include <cstdlib>
#include <algorithm>
#include <chrono>
#include <mutex>
#include <thread>


#include "Scene.h"

/*
    Main renderer, output as a ppm
*/
class Renderer
{
public:
    Renderer(std::unique_ptr<Scene> in_scene, std::string in_outputPath);
    Renderer(const Renderer& renderer) = delete;
    Renderer(Renderer&& renderer) = delete;

    /*
        Main render function
    */
    void render();
    unsigned int getFramebufferPosFromXY(unsigned int x, unsigned int y);
    void renderWithTimestampLogged();
private:
    std::unique_ptr<Scene> scene;
    std::string outputPath;

};


#endif