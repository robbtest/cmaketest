set(MODULE UniquePtr)


set(CPP_LIST
	main_uniquePtr.cpp
)


add_executable(${MODULE} ${CPP_LIST})

SET_PROPERTY(TARGET ${MODULE} PROPERTY FOLDER "modules")
