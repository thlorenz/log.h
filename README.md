# log.h

Minimal yet colorful logging lib.

```C
log_info("logging an info message");
log_warn("logging a warn message");
log_debug("logging a debug message");
log_err("logging an error");
```

![screenshot](https://raw.github.com/thlorenz/log.h/master/assets/screenshot.png)

Both `log_err` and `log_warn` append last error (`errno`) to message.

## Installation

    clib install log.h

## License

MIT
