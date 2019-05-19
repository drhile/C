#ifndef __MSG_H__
#define __MSG_H__

#define error	"error"
#define warning "warning"
#define notice  "notice"

#include <stdio.h>

void msg(const char* level, const char* msg)
{
	if(level == error)
		fprintf(stderr, "%s: %s\n", level, msg);
	else if(level == warning || level == notice)
		printf("%s: %s\n", level, msg);
	else
		return;
}

#endif	//	__MSG_H__
