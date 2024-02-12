#include "gtest/gtest.h"
#include "gmock/gmock.h" 

#include "../header/rectangle.hpp"



// Initializer tests

TEST(RectangleTests, testNullInitializer) {
	Rectangle *aRectangle = new Rectangle();

	ASSERT_NE(aRectangle, nullptr);
}

TEST(RectangleTests, testPositiveInitializer) {
        Rectangle *aRectangle = new Rectangle(2,10);

        ASSERT_NE(aRectangle, nullptr);
}

TEST(RectangleTests, testNegativeInitializer) {

	EXPECT_DEATH(Rectangle(-10,-3), "Sides cannot be negative");
}



// set_xxx tests

/// Positive
TEST(RectangleTests, testPositiveSetWidth) {
        Rectangle *aRectangle = new Rectangle(0,0);

        ASSERT_NE(aRectangle, nullptr);

	aRectangle->set_width(1);

	EXPECT_EQ(aRectangle->perimeter(), 2);
}

TEST(RectangleTests, testPositiveSetHeight) {
        Rectangle *aRectangle = new Rectangle(0,0);

        ASSERT_NE(aRectangle, nullptr);

        aRectangle->set_height(1);

        EXPECT_EQ(aRectangle->perimeter(), 2);
}

/// Negative
TEST(RectangleTests, testNegativeSetWidth) {
        Rectangle *aRectangle = new Rectangle(0,0);

        ASSERT_NE(aRectangle, nullptr);

        EXPECT_DEATH(aRectangle->set_width(-100), "Width cannot be negative");
}

TEST(RectangleTests, testNegativeSetHeight) {
        Rectangle *aRectangle = new Rectangle(0,0);

        ASSERT_NE(aRectangle, nullptr);

        EXPECT_DEATH(aRectangle->set_height(-2), "Height cannot be negative");
}




// Area function

TEST(RectangleTests, testPositiveArea) {
        Rectangle *aRectangle = new Rectangle(3, 4);

        ASSERT_NE(aRectangle, nullptr);

        EXPECT_EQ(aRectangle->area(), 12);
}

TEST(RectangleTests, testNullArea) {
        Rectangle *aRectangle = new Rectangle();

        ASSERT_NE(aRectangle, nullptr);

        EXPECT_EQ(aRectangle->area(), 0);
}



// Perimeter

TEST(RectangleTests, testPositivePerimeter) {
        Rectangle *aRectangle = new Rectangle(3, 4);

        ASSERT_NE(aRectangle, nullptr);

        EXPECT_EQ(aRectangle->perimeter(), 14);
}

TEST(RectangleTests, testNullPerimeter) {
        Rectangle *aRectangle = new Rectangle();

        ASSERT_NE(aRectangle, nullptr);

        EXPECT_EQ(aRectangle->perimeter(), 0);
}
