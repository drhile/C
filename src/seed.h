#ifndef __SEED_H__
#define __SEED_H__

#include <stddef.h>
#include <time.h>

void seed(void)
{
	srand(time(NULL));
}

#endif	//	__SEED_H__
