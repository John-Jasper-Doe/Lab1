/**
 ******************************************************************************
 * @file   lib.cpp
 * @author MG
 * @date   23/12/2018
 * @brief  The implementation of the functions of the library "helloworld".
 ******************************************************************************
 */


#include "lib.h"
#include "version.h"

std::string version()
{
    return std::to_string(PROJECT_VERSION_MAJOR) + "." +
           std::to_string(PROJECT_VERSION_MINOR) + "." +
           std::to_string(PROJECT_VERSION_PATCH);
}
