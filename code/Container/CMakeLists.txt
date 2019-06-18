set(MODULE Container)


set(CPP_LIST
	main_container.cpp
)


add_executable(${MODULE} ${CPP_LIST})

SET_PROPERTY(TARGET ${MODULE} PROPERTY FOLDER "modules")
