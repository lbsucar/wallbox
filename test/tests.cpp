#include <gtest/gtest.h>
#include "../include/4/activity4.h"

TEST(test_activities, testCase1){
    ASSERT_EQ(15, activity4Solution(15));
} 

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}