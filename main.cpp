#include "define.hpp"
#include <iostream>

#if __cplusplus == 202002L
#pragma message("C++20 standard")
#elif __cplusplus == 201703L
#pragma message("C++17 standard")
#elif __cplusplus == 201402L
#pragma message("C++14 standard")
#elif __cplusplus == 201103L
#pragma message("C++11 standard")
#else
#pragma message("C++98 or earlier standard")
#endif

int main(int argc, char const *argv[])
{
    #if defined(__GNUC__)
    printf("GCC version: %d.%d.%d\n", __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
    #elif defined(__clang__)
    printf("Clang version: %d.%d.%d\n", __clang_major__, __clang_minor__, __clang_patchlevel__);
    #elif defined(_MSC_VER)
    printf("MSVC version: %d\n", _MSC_VER);
    #elif defined(__INTEL_COMPILER)
    printf("Intel compiler version: %d\n", __INTEL_COMPILER);
    #else
    printf("Unknown compiler\n");
    #endif
    std::cout<<PROJECT_NAME<<std::endl;
    return 0;
}
