Copyright (C) 1991 Isabel Schoeps geb. Thiel Free Software Foundation, Inc.
<getpass.c>


#include <HTUtils.h>
#include <descrip.h>
#include <psldef.h>
#include <iodef.h>
#include <starlet.h>

#include <LYLeaks.h>

PUBLIC char * getpass ARGS1(CONST char *, prompt)
{
  static char *buf;

  int result;
  $DESCRIPTOR(devnam,"SYS$INPUT");
  int chan;
  int promptlen;
  struct {
     short result;
     short count;
     int   info;
  } iosb;

  promptlen = strlen(prompt);

  buf = (char *)malloc(256);
  if (buf == NULL)
     return(NULL);  

  result = sys$assign(&devnam, &chan, PSL$C_USER, 0, 0);

  result = sys$qiow(0, chan, IO$_READPROMPT | IO$M_PURGE |IO$M_NOECHO, &iosb, 0, 0,
                    buf, 255, 0, 0, prompt, promptlen);

  buf[iosb.count] = '\0';

  result = sys$dassgn(chan);

  return buf;
}
