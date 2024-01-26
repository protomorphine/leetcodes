function(add_task NAME)
    add_executable("${NAME}"
            main.cpp
            src/tasks/tasks.h
            "src/${NAME}.cpp"
            "test/${NAME}_test.cpp"
    )

    target_compile_features("${NAME}" PRIVATE cxx_std_20)
    target_link_libraries("${NAME}" GTest::gtest_main)
endfunction()