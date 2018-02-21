#include <iostream>

#include <CL/cl.hpp>

int main(int argc, const char* argv[]) {

    std::vector<cl::Platform> cl_platforms;

    cl::Platform::get(&cl_platforms);

    if ( cl_platforms.size()==0 ) {
        std::cout << "No OpenCL platforms found!" << std::endl;
        exit(-1);
    }

    std::cout << "Found " << cl_platforms.size() << " OpenCL supported platforms." << std::endl;
    for (int i=0 ; i < cl_platforms.size(); ++i) {
        std::cout << "Platform " << i+1 << " : " << cl_platforms[i].getInfo<CL_PLATFORM_NAME>() << std::endl;
    }

    return 0;
}
