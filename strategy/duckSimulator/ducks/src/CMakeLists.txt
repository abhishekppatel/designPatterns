file(GLOB DUCK_SOURCES "*.cpp")

add_library(ducks ${DUCK_SOURCES})

# Expose include directory to dependents
target_include_directories(ducks 
PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}/../inc
)

target_link_libraries(ducks PRIVATE fly quack)
