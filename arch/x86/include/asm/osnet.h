/* OSNET uses these control flags to change the behavior of
 * the host kernel and KVM.
 */
#ifndef _ASM_X86_OSNET_H
#define _ASM_X86_OSNET_H

#define OSNET_ALL_VMEXIT_REASON 999999
#define OSNET_VMCS_READ64 0
#define OSNET_VMCS_WRITE64 0
#define OSNET_HLT 0
#define OSNET_DTID 0
#define OSNET_DTID_LAPIC 0
#define OSNET_DTID_WRMSR 0
#define OSNET_DTID_INTERCEPT_MSR_X2APIC 0
#define OSNET_DTID_HYPERCALL 0
#define OSNET_DTID_SYNC_PIR_VIRR 0

#define OSNET_TRACE_PRINTK 0
#define OSNET_TRACE_CLOCKEVENT 0
#define OSNET_TRACE_HOST_POSTED_INTERRUPT_HANDLER 0
#define OSNET_TRACE_DTID_LAPIC 0
#define OSNET_TRACE_DTID_TARGET_EXPIRATION 0
#define OSNET_TRACE_DTID_SET_PIR_ON 0
#define OSNET_TRACE_DTID_EMULATE_TIMER 0
#define OSNET_TRACE_DTID_HYPERCALL 0
#define OSNET_TRACE_VMEXIT 0
#define OSNET_TRACE_VMEXIT_OVERALL 0
#define OSNET_TRACE_VMEXIT_SECTION 0

#endif
