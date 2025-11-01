file(GLOB FLY_SOURCES "*.cpp")

add_library(fly ${FLY_SOURCES})

# Expose include directory to dependents
target_include_directories(fly 
PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/../inc
)