# log.h

Minimal yet colorful logging lib.

```C
log_info("logging an info message");
log_warn("logging a warn message");
log_debug("logging a debug message");
log_error("logging an error");
```

![screenshot](https://raw.github.com/thlorenz/log.h/master/assets/screenshot.png)

Both `log_err` and `log_warn` append last error (`errno`) to message.

## Installation

    clib install thlorenz/log.h

## Log Level

Set the log level via `#define LOGLEVEL` in order to control what log messages are printed. The default is `4`.

- **info:**   min level **4**
- **debug:**  min level **3**
- **warn:**   min level **2**
- **error:**  min level **1**

*Setting `NDEBUG` will not log debug messages no matter what the log level is.*

## Disabling Colors

```c
#define LOG_NOCOLORS 1
#include "log.h"
/ * log without colors */
```

## License

MIT
