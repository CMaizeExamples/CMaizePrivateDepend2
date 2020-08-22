cmake_minimum_required(VERSION 3.13.4)
project(CMaize_Private_Depend2)

include("${PROJECT_SOURCE_DIR}/cmake/get_cpp.cmake")

#set(CPP_GITHUB_TOKEN f64bff2118e84de749f10dec47ddc97a078e7082)

cpp_find_or_build_dependency(
    CMaizePrivateDepend
    URL github.com/ally3999/CMaizePrivateDepend
    BUILD_TARGET CMaizePrivateDepend
    FIND_TARGET CMaizePrivateDepend::CMaizePrivateDepend
)

cpp_add_library(
    CMaizePrivateDepend2
    SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}"
    INCLUDE_DIR "${CMAKE_CURRENT_LIST_DIR}"
    DEPENDS CMakePrivate CMaizePrivateDepend
)

message("Processing private depend2...")
