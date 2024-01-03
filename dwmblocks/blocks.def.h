//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        {""  , "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g"      , 30 , 0} ,
        {""  , "/home/andrzej/suckless/dwmblocks/scripts/bandwidth"                  , 5  , 4} ,
        {"V:" , "/home/andrzej/suckless/dwmblocks/scripts/volume"                     , 5  , 0} ,
	{"B1:"  , "/home/andrzej/suckless/dwmblocks/scripts/timerunning"		     , 10  , 0} ,
	{"B2:"  , "/home/andrzej/suckless/dwmblocks/scripts/battery" 		     , 10  , 0} ,
        {""  , "/home/andrzej/suckless/dwmblocks/scripts/clock"                      , 5  , 0} ,
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
