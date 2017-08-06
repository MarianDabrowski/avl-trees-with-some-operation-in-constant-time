cmake_minimum_required(VERSION 3.5)
project(Assigment)

if (NOT CMAKE_BUILD_TYPE)
    message(STATUS "No build type selected, default to Release")
    set(CMAKE_BUILD_TYPE "Release")
endif ()


set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/avltree.h src/node.h src/node.c src/main.c src/avltreeprint.h src/avltreeprint.c src/avltreebalance.h src/avltreebalance.c src/avltreeinsert.h src/avltreeinsert.c src/avltreedelete.h src/avltreedelete.c src/avltreebasic.h src/avltreebasic.c)
add_executable(avltree ${SOURCE_FILES})

# adding Doxygen services: checking if installed and then
find_package(Doxygen)
if (DOXYGEN_FOUND)
    # point the location of Doxygen configuration file and show its target location in the folder, where it compled
    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)

    # adding doc as a target: make doc will result running doxygen
    # there will be printed an appropriate comment
    add_custom_target(doc
            ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
            COMMENT "Generating API documentation with Doxygen"
            )
endif (DOXYGEN_FOUND)