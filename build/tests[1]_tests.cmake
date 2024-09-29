add_test( Add.Simple [==[/home/wark90/C++/Vega/Vega_Software_Cpp/build/tests]==] [==[--gtest_filter=Add.Simple]==] --gtest_also_run_disabled_tests)
set_tests_properties( Add.Simple PROPERTIES WORKING_DIRECTORY [==[/home/wark90/C++/Vega/Vega_Software_Cpp/build]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( tests_TESTS Add.Simple)
