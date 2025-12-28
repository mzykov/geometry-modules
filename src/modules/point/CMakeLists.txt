add_library(point STATIC)

target_sources(point PUBLIC
	FILE_SET CXX_MODULES FILES
	point.ixx
	point_formatters.ixx
	point_functions.ixx
	point_globalvars.ixx
	point_types.ixx
)

target_sources(point PRIVATE
	point.cpp
	point_functions.cpp
)
