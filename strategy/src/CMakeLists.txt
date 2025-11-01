file(GLOB SOURCES "*.cpp")

add_library(myLib ${SOURCES})

# Expose include directory to dependents
target_include_directories(myLib PUBLIC ../inc)
