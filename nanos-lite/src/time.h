#ifndef __TIME_H__ 
#define __TIME_H__ 
struct timeval { 
    long tv_sec; /* Seconds. */ 
    long tv_usec; /* Microseconds. */ 
}; 
struct timezone { 
    int tz_minuteswest; /* Minutes west of GMT. */ 
    int tz_dsttime; /* Nonzero if DST is ever in effect. */ 
}; 
#endif