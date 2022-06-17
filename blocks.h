static const Block blocks[] = {
	/*Icon*/	/*Command*/																						/*Update Interval*/	/*Update Signal*/
	{"", 			"pgrep > /dev/null -x xautolock && echo  || echo  ",	10,									0},
	{" ", 		"~/.local/bin/dwmblocks/temp",													30,									0},
	{" ", 		"~/.local/bin/dwmblocks/memory",												30,									0},
	{" ", 		"~/.local/bin/dwmblocks/load",													30,									0},
	{" ", 		"~/.local/bin/dwmblocks/battery",												15,									0},
	{"", 			"date '+%a %d.%b %y %H:%M'",														30,									0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
