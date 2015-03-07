#ifndef UTIL_H
#define UTIL_H

void set_verbose_on();
void set_debug_on();

void verbose(const char * fmt, ...);
void debug(const char * fmt, ...);

#endif