add_executable(weatherStation main.cpp)

# TODO Check if this is needed at last.
target_link_libraries(weatherStation PRIVATE observerInterface)