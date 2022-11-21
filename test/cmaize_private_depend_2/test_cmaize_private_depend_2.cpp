#include <catch2/catch_test_macros.hpp>

#include <cmaize_private_depend_2/cmaize_private_depend_2.hpp>

TEST_CASE("cmaize_private_depend_2") {
    SECTION("does_cmaize_private_depend_2_work") {
        REQUIRE(call_cmaize_private_depend_2() == 7);
    }
}
