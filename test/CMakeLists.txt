INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/src/dnn)

aux_source_directory(. TEST_DIR)

add_executable(unit_tests ${TEST_DIR})

target_link_libraries(unit_tests GTest::GTest GTest::Main dnn)

# To run google test by filter, use --gtest_fileter=xxx*