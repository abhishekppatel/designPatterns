file(GLOB SOURCES "*.cpp")

add_library(quack ${SOURCES})

# Expose include directory to dependents
target_include_directories(quack 
PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}/../inc
)