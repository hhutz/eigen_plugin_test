set(MODULE_NAME plugin1)
set(LIB_NAME ${MODULE_NAME})

set(SOURCES
  Nodelet1.cpp
)

set(HEADERS
  Nodelet1.h
)

add_library(${LIB_NAME}
  ${SOURCES}
  ${HEADERS}
)

target_link_libraries(${LIB_NAME}
  ${catkin_LIBRARIES}
)


