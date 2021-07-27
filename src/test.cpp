#include "../header/c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}
TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}
TEST(EchoTest, Executable) {
    char* test_val[5]; test_val[0] = "./c-echo"; test_val[1] = "./c-echo"; test_val[2] = "is";test_val[3] = "an";test_val[4] = "executable";
    EXPECT_EQ("./c-echo is an executable", echo(5,test_val));
}
TEST(EchoTest, TrueEmpty) {
    char* test_val[1];
    EXPECT_EQ("", echo(1,test_val));
}
TEST(EchoTest, NumberAndSymbols) {
    char* test_val[4];test_val[0] = "filler"; test_val[1] = "2021"; test_val[2] = "is"; test_val[3] = "now!!";
    EXPECT_EQ("2021 is now!!", echo(4,test_val));
}
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

