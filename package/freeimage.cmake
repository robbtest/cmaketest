set(PACKAGE freeimage)

set(argument_list)

get_cmake_property(variables VARIABLES)
foreach(variable ${variables}})
  string(REGEX MATCH "^(.*)_OUTPUT_DIRECTORY(.*)$" output_variable "${variable}")
  if(output_variable)
    list(APPEND argument_list "-D${output_variable}=${${output_variable}}")
    unset(output_variable)
    unset(${variable})
  endif()
endforeach()

# print argument_list
foreach(arg ${argument_list})
    message("${arg} - ${${arg}}")
endforeach()

ExternalProject_Add(${PACKAGE}
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/package/${PACKAGE}
  CMAKE_ARGS "${argument_list}"
)
