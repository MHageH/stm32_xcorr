#include <nuttx/config.h>

#include <sys/types.h>
#include <sys/ioctl.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <debug.h>
#include <string.h>

#include <nuttx/drivers/pwm.h>
#include <nuttx/analog/adc.h>
#include <nuttx/analog/ioctl.h>

#include "xtract.h"

#ifdef CONFIG_BUILD_KERNEL
 int main(int argc, FAR char *argv[])
#else
 int xtract_main(int argc, char *argv[])
#endif
 {
   printf("\033[1;34m xtract xcorr application \033[0m\n");
   control_main(argc, argv);
  return OK;
 }

static int control_main(int argc, char * argv[]){

	return OK;
}