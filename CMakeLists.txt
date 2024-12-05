add_executable(
  hippomocks-master
  example.cpp
)
target_include_directories(hippomocks-master PRIVATE HippoMocks)

add_executable(
  hippomocks-colobot
  example.cpp
)
target_include_directories(hippomocks-colobot PRIVATE hippomocks-from-colobot)
