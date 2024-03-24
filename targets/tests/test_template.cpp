#include <unity_fixture.h>

TEST_GROUP(Template);

TEST_SETUP(Template)
{

}

TEST_TEAR_DOWN(Template)
{

}

TEST(Template, ShouldPass)
{
    TEST_ASSERT_EQUAL(1, 1);
}

TEST_GROUP_RUNNER(Template)
{
    RUN_TEST_CASE(Template, ShouldPass);
}
