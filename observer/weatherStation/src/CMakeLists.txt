add_executable(weatherStation main.cpp)

target_link_libraries(weatherStation PRIVATE weatherData displays)