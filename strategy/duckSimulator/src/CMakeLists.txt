add_executable(duckSimulator main.cpp)

# Link against the libraries
target_link_libraries(duckSimulator 
  PRIVATE 
    ducks
    fly
    quack
)
