add_subdirectory(displays)
add_subdirectory(src)
add_subdirectory(weatherData)

add_library(observerInterface INTERFACE)

target_include_directories(observerInterface INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)