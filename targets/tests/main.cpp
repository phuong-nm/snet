#include <unity_fixture.h>

static void runAllTests(void);

int main(int argc, char const *argv[])
{
    return UnityMain(argc, argv, runAllTests);
}

static void runAllTests(void)
{
    RUN_TEST_GROUP(Template);
}
