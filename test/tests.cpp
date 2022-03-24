/* Copyright (C) Luis Beltran Sucar Segarra - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Luis Sucar <luis.sucar@gmail.com>, March 2022
 */
#include <gtest/gtest.h>
#include "../include/3/activity3.h"
#include "../include/4/activity4.h"
#include "../include/5/activity5.h"

TEST(test_activities, activity3SolutionTest1){
    bool result = false;
    result = isOrederedPair(1, 2, 3, 3, 3, 3);
    ASSERT_TRUE(result);
} 

TEST(test_activities, activity4SolutionTest1){
    ASSERT_EQ(15, activity4Solution(15));
} 

TEST(test_activities, activity5SolutionTest1){
    ASSERT_EQ("source.exe", activity5Solution());
} 

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}