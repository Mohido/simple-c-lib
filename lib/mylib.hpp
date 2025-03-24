#ifndef MATH_OPERATIONS_H
#define MATH_OPERATIONS_H

#ifdef _WIN32
    #ifdef BUILDING_DLL
        #define EXPORT __declspec(dllexport)
    #else
        #define EXPORT __declspec(dllimport)
    #endif
#else
    #define EXPORT
#endif

extern "C"{
    EXPORT int add(int a, int b);
    EXPORT int subtract(int a, int b);
}

#endif
