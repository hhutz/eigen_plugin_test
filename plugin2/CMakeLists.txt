set(MODULE_NAME plugin2)
set(LIB_NAME ${MODULE_NAME})

set(SOURCES
  Nodelet2.cpp
)

set(HEADERS
  Nodelet2.h
)

add_library(${LIB_NAME}
  ${SOURCES}
  ${HEADERS}
)

target_link_libraries(${LIB_NAME}
  ${catkin_LIBRARIES}
)


