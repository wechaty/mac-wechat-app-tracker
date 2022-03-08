//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMLeaksMonitorDelegate;

@interface MMLeaksMonitor : NSObject
{
    BOOL m_bIsMonitorRunning;
    BOOL m_bMonitorShouldRun;
    BOOL m_bShouldThrowsOomException;
    BOOL m_bShouldBreakWindowDraggingInfinityLoop;
    double m_dMonitorWaitInterval;
    unsigned int m_uiMinRealMemoryConsumeToReportInMB;
    unsigned int m_uiMinTotalMemoryConsumeToReportInMB;
    unsigned int m_uiMinTotalMemoryConsumeToThrowsExceptionInMB;
    unsigned int m_uiMemoryConsumeReportInterval;
    unsigned long long m_totalPhysicalMemory;
    unsigned int m_uiLastMemoryConsumeReportTime;
    int m_uiLastPageFaults;
    unsigned int m_uiReportThreshold;
    BOOL _isInNSAppSendEvent;
    unsigned int _main_thread_id;
    unsigned long long _runLoopTotalCount;
    id <MMLeaksMonitorDelegate> _delegate;
    NSString *_identifier;
    NSString *_processName;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned int main_thread_id; // @synthesize main_thread_id=_main_thread_id;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <MMLeaksMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long runLoopTotalCount; // @synthesize runLoopTotalCount=_runLoopTotalCount;
@property(nonatomic) BOOL isInNSAppSendEvent; // @synthesize isInNSAppSendEvent=_isInNSAppSendEvent;
- (id)getRAMUsage;
- (unsigned long long)getRAMTotal;
- (void)loadABTestParameters;
- (void)loadAppParameters;
- (void)setWeAppScene:(id)arg1 processName:(id)arg2;
- (void)postMemoryWarnningIfNeed:(unsigned int)arg1 compressedMemory:(unsigned int)arg2 virtualMemory:(unsigned int)arg3 physicalMemory:(unsigned int)arg4;
- (void)checkHugeMemoryLeakCycle;
- (void)onMonitorThreadStartCallback;
- (void)stopMonitor;
- (void)startMonitor;
- (id)init;

@end

