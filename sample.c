/* turn off colors BEFORE including log.h */
/* #define LOG_NOCOLORS 1 */

#include "log.h"

int main(void) {
  log_info("logging an info message");
  log_warn("logging a warn message");
  log_debug("logging a debug message");
  log_error("logging an error");
  return 0;
}
