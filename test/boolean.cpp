#include <gtest/gtest.h>

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(booleans, true_is_true) {
	ASSERT_EQ(true, true);
}

TEST(booleans, true_is_not_false) {
	ASSERT_NE(true, false);
}
