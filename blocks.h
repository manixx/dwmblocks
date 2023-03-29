static const Block blocks[] = {
	{"",   "pgrep > /dev/null -x xss-lock && echo  || echo  ", 10, 0},
	{" ", "dwmblocks-memory",                                    30, 0},
	{" ", "dwmblocks-load",                                      30, 0},
	{" ", "dwmblocks-battery",                                   15, 0},
	{"",   "date '+%a %d.%b %y %H:%M'",                           30, 0},
};
static char delim[] = " | ";
static unsigned int delimLen = 5;
