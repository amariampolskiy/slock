/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#262626",   /* after initialization */
	[INPUT] =  "#5F87AF",   /* during input */
	[FAILED] = "#AF5F5F",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#BCBCBC";

/* text size (must be a valid size) */
static const char * font_name = "-bitstream-terminal-medium-r-normal--18-140-100-100-c-110-iso8859-1";
