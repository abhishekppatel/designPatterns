add_executable(main main.cpp)

# Link against the libraries
target_link_libraries(main 
  PRIVATE 
    ducks
    fly
    quack
)
