add_executable(myApp main.cpp)

# Link against the library
target_link_libraries(myApp PRIVATE myLib)
