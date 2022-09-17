cmake_minimum_required(VERSION 3.10)

project(Tutorial VERSION 1.0)

option(USE_FUNC "Use tutorial provided function." OFF)

configure_file(TutorialConfig.h.in TutorialConfig.h)
if(USE_FUNC)
    add_subdirectory(func)

endif(USE_FUNC)

add_executable(Tutorial tutorial.cpp)

target_link_libraries(Tutorial PUBLIC func)

target_include_directories(Tutorial PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          )

target_include_directories(func
                          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
                          )

install(TARGETS Tutorial DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/../programm_rebuilt/TutorialConfig.h"
       DESTINATION include
       )