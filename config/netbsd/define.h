/*
 * Icon configuration file for NetBSD
 */

#define UNIX 1
#define LoadFunc

#define CComp "gcc"
#define COpts "-O2 -I/usr/X11R6/include"
#define ICONC_XLIB "-Wl,-R/usr/X11R6/lib -L/usr/X11R6/lib -lX11"