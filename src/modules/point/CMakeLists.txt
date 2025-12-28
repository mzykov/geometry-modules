add_library(point STATIC)

target_sources(point PUBLIC
	FILE_SET CXX_MODULES FILES
	point.ixx
	point_formatters.ixx
	point_types.ixx
)
