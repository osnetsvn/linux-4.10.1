/**
 * OSNET control flags.
 */
#ifndef _ASM_X86_OSNET_H
#define _ASM_X86_OSNET_H

#define OSNET_HYPERCALL 0
#define KVM_HC_SET_PIR_ON 9

#define OSNET_DTID_CLOCKEVENTS_PROGRAM_EVENT 1

#define OSNET_TRACE_TIMER_EVENT_HANDLER 0
#define OSNET_TRACE_TICK_PROGRAM_EVENT 0
#define OSNET_TRACE_HRTIMER_INTERRUPT 0
#define OSNET_TRACE_CLOCKEVENTS_PROGRAM_EVENT 0
#define OSNET_TRACE_DTID_OSNET_PROGRAM_PERIODIC_CLOCKEVENT_DELTA 0
#define OSNET_TRACE_DTID_OSNET_PROGRAM_PERIODIC_CLOCKEVENT 0

#endif
