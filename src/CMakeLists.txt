add_subdirectory(modules)

add_executable(yet_another_pet main.cpp)
target_link_libraries(yet_another_pet PRIVATE point)
