set(MODULE Function)


set(CPP_LIST
	main_function.cpp
)


add_executable(${MODULE} ${CPP_LIST})

SET_PROPERTY(TARGET ${MODULE} PROPERTY FOLDER "modules")
