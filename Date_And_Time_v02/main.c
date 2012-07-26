/*
 * main.c
 *
 *  Created on: Jul 19, 2012
 *      Author: robotics
 */
// time_demo.c

#include <time.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	char buffer[80];
	time_t curtime, gotime, diftime;
	struct tm *loctime;

	/* get the time the program started running */
	gotime = time(NULL);

	sleep(5);

	// find how much time has gone by sine the program started
	diftime = curtime - gotime;

	/* Convert current time to local time representation */
	loctime = localtime(&curtime);

	/* Print out the date and time in the standard format */
	printf("%s", asctime (loctime));

	/* Convert start time to local time representation. */
	loctime = localtime(&gotime);

	/* Print out the date and time in the standard format. */
	printf("%s", asctime (loctime));

	loctime = localtime(&diftime);

	/* How many seconds transpired */
	strftime(buffer, 80, "Difference is %s seconds.\n", loctime);
	printf("%s", buffer);

	return 0;
}
