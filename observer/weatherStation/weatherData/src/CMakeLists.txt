file(GLOB SOURCES "*.cpp")

add_library(weatherData ${SOURCES})

# Expose include directory to dependents
target_include_directories(weatherData 
PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}/../inc
)

target_link_libraries(weatherData PUBLIC observerInterface)
