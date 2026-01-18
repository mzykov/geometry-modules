add_library(distance STATIC)

target_sources(distance PUBLIC
	FILE_SET CXX_MODULES FILES
	distance.ixx
	distance_functions.ixx
)

target_sources(distance PRIVATE
	distance.cpp
	distance_functions.cpp
)

target_link_libraries(distance PRIVATE
	point
)
