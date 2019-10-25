/* user and group to drop privileges to */
static const char *user  = "xel";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#83a598",   /* during input */
	[FAILED] = "#d65d0e",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message =
        "     _                          _\n ,__(^<        >@)_,           (')<       >O___,\n \\___)          (_>)          <~_)         (_=/\n   ||            ||            ||           ||\n  _||____________||____________||___________||_\n  -||------------||------------||-----------||-\n  _||____________||____________||___________||_\n  -||------------||------------||-----------||-\n   ||            ||            ||           ||\n ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "fixed";
