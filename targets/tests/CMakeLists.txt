project(unit_test)

add_executable(unit_test)
target_sources(unit_test PRIVATE
    main.cpp
    test_template.cpp
)
target_link_libraries(unit_test PUBLIC
    unity
)
