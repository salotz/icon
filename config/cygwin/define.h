/*
 * Icon configuration file for Cygwin environment on Microsoft Windows
 */
#define CYGWIN 1
#define NT 1
#define MSDOS 1

#define FAttrib
#define AsmOver

#define CComp "gcc"
#define ExecSuffix ".exe"

#ifdef Graphics
   #define MSWindows
   #define NTConsole
#else					/* Graphics */
   #undef MSWindows
#endif					/* Graphics */

/*
 * Header is used in winnt.h; careful how we define it here
 */
#define Header header

/*
 * Uncomment the following line to compile Icon programs to Windows CMD
 * files. Otherwise, Icon programs will have executable headers.
 */
/* #define ShellHeader */

#ifdef ShellHeader
   #define IcodeSuffix ".cmd"
#else					/* ShellHeader */
   #define IcodeSuffix ".exe"
   #define MaxHdr 5120
#endif					/* ShellHeader */