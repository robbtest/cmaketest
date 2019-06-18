cmake_minimum_required(VERSION 3.3.2)
project(TestCpp)

set(MODULE_LIST
	Container
	Function
	Initilizerlist
	UniquePtr
)

// open folder filter
SET_PROPERTY(GLOBAL PROPERTY USE_FOLDERS ON)

// set output directory
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_PDB_OUTPUT_DIRECTORY     ${PROJECT_SOURCE_DIR}/pdb)

// suport c++11
set(CMAKE_CXX_STANDARD 11)

// add subcmakelist
foreach(module IN LISTS MODULE_LIST)
    set(subdirectory code/${module})
    if(EXISTS ${PROJECT_SOURCE_DIR}/${subdirectory}/CMakeLists.txt)
        add_subdirectory(${subdirectory})
    else()
        message(AUTHOR_WARNING "No CMakeLists.txt found in ${subdirectory}")
    endif()
endforeach()
