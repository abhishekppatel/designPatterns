add_subdirectory(weatherStation)

add_library(observerInterface INTERFACE)

target_include_directories(observerInterface INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)