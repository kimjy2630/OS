/* Tests print hello world */

#include <stdio.h>
#include "tests/threads/tests.h"

void
test_hello(void)
{
	//printf("hello, world!");
	msg("hello, world!");
	pass();
	pass();
	pass();
}
