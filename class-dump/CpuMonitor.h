//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountServiceExt-Protocol.h"

@class MMTimer, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CpuMonitor : NSObject <AccountServiceExt>
{
    int m_min_total_cpu_usage;
    int m_continuous_times;
    int m_count;
    float m_tot_cpu;
    int m_higher_min_total_cpu_usage;
    int m_higher_continuous_times;
    int m_higher_count;
    float m_higher_tot_cpu;
    NSMutableDictionary *m_cpu_detail;
    NSMutableDictionary *m_higher_cpu_detail;
    int m_min_main_cpu_usage;
    int m_min_sub_cpu_usage;
    int m_cpu_report_period;
    int m_cpu_count;
    MMTimer *m_cpu_usage_timer;
    int m_cpu_check_period;
    unsigned int main_thread_id;
    NSObject<OS_dispatch_queue> *m_monitorQueue;
    int m_cpu_report_usage;
    int m_cpu_log_tot_usage;
}

- (void).cxx_destruct;
- (id)genCPUDetail:(id)arg1 count:(long long)arg2;
- (void)onUserLogout;
- (void)initParameters;
- (void)startTimer;
- (void)stopTimer;
- (void)cpuUsageReportIfNeed;
- (void)dealloc;
- (void)setupCpuMonitor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

