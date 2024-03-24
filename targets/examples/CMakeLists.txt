project(examples)

add_executable(hello_world)
target_sources(hello_world PRIVATE
    hello_world.cpp
)
