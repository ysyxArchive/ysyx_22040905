#include <am.h>
#include <nemu.h>
#include <klib.h>
#include <klib-macros.h>
void __am_timer_init() {
}
int flag=1;
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  ioe_read (AM_TIMER_UPTIME,&(uptime->us));
  if(flag){printf("%d",(int)(uptime->us));flag=0;}
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
