//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountServiceExt-Protocol.h"

@class MMTimer, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface VisualizationMonitor : NSObject <AccountServiceExt>
{
    BOOL m_shouldStopReport;
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
    NSObject<OS_dispatch_queue> *m_monitorQueue;
    int m_cpu_report_usage;
    int m_cpu_log_tot_usage;
    unsigned int main_thread_id;
    MMTimer *m_memory_timer;
    float m_memory_period;
    NSString *_identifier;
    NSString *_processName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)genCPUDetail:(id)arg1 count:(long long)arg2;
- (void)FFAddRecvFavZZ:(BOOL)arg1;
- (void)onUserLogout;
- (void)initWechatParameters;
- (void)initWeAppParameters;
- (void)setWeAppScene:(id)arg1 processName:(id)arg2;
- (void)memoryVisualization;
- (void)stopMemTimer;
- (void)startMemTimer;
- (void)cpuUsageReportIfNeed;
- (void)stopCPUTimer;
- (void)startCPUTimer;
- (void)setupVisulization;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
