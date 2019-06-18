set(MODULE Initilizerlist)


set(CPP_LIST
	main_initilizerlist.cpp
)


add_executable(${MODULE} ${CPP_LIST})

SET_PROPERTY(TARGET ${MODULE} PROPERTY FOLDER "modules")
