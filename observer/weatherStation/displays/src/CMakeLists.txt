file(GLOB SOURCES "*.cpp")

add_library(displays ${SOURCES})

# Expose include directory to dependents
target_include_directories(displays 
PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}/../inc
)

target_link_libraries(displays 
   PRIVATE 
      observerInterface 
      weatherData)
