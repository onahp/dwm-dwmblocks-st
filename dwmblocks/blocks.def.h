//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Memory: " , "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	10,		0},

	{"" , "acpi",	300,		0},

	{"CPU: "     , "sensors | awk '/Core 0/ {print $3}'", 30,		0},

	{"IP(L): " , "ip address show enp4s0 | grep inet | sed -n '1p' | awk '{print $2}'",					5,		0},

	{"IP(E): " , "curl ifconfig.me",           300,		0},

	{""        , "date '+%b %d (%a) %I:%M%p'", 5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
