#include <unistd.h>
#include <string.h>

int rand()
{
	static int _count = -1;

	_count++;
	if (_count == 0)
		return 8;
	if (_count == 1)
		return 8;
	if (_count == 2)
		return 7;
	if (_count == 3)
		return 9;
	if (_count == 4)
		return 23;
	if (_count == 5)
		return 74;
	return _count * _count % 30000;
}
