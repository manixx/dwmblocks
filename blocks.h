static const Block blocks[] = {
	/*Icon*/	/*Command*/																						  /*Update Interval*/	/*Update Signal*/
	{"", 			"pgrep > /dev/null -x xautolock && echo  || echo  ",				10,									0},
	{" ", 		"dwmblocks-memory",																						30,									0},
	{" ",		"dwmblocks-load",																							30,									0},
	{" ", 		"dwmblocks-battery",																					15,									0},
	{"", 			"date '+%a %d.%b %y %H:%M'",																	30,									0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
