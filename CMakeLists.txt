project(clib-lib VERSION 0.0.1 LANGUAGES CXX)

# compiled library
add_library(clib-lib STATIC)  # or SHARED
add_library(clib::lib ALIAS clib-lib)

# source files
file(GLOB_RECURSE sources CONFIGURE_DEPENDS "src/*.cpp")
file(GLOB_RECURSE headers CONFIGURE_DEPENDS "include/*.hpp")

target_sources(clib-lib
    PRIVATE ${sources}
    PUBLIC  ${headers}
)

# include path
target_include_directories(clib-lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
