//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

@class GlitchEventsViewController, NSBox, NSButton, NSComboBox, NSObject, NSString, NSTextField;
@protocol OS_dispatch_source;

@interface PerformanceMonitorToolController : MMWindowController
{
    BOOL _isRecording;
    BOOL _firstSample;
    BOOL _enableMonitorCPUMainThread;
    BOOL _enableMonitorCPUOtherThreads;
    BOOL _enableMonitorMEMFootprint;
    BOOL _enableMonitorMEMResident;
    BOOL _enableMonitorMEMVm;
    float _cpuUsageMainThread;
    float _cpuUsageOtherThreads;
    float _memFootprint;
    float _memResident;
    float _memVm;
    float _diskReadSpeed;
    float _diskWriteSpeed;
    float _cpuGlitchThreshold;
    float _memGlitchThreshold;
    float _diskReadGlitchThreshold;
    float _diskWriteGlitchThreshold;
    unsigned int _main_thread_id;
    GlitchEventsViewController *_glitchEventsViewController;
    NSBox *_boxGlitchTable;
    NSComboBox *_textMonitorInterval;
    NSTextField *_textCPUGlitchThreshold;
    NSTextField *_textMEMGlitchThreshold;
    NSTextField *_textDISKReadGlitchThreshold;
    NSTextField *_textDISKWriteGlitchThreshold;
    NSTextField *_textLogPath;
    NSButton *_chkboxSaveMonitorLog;
    NSButton *_chkboxSaveGlitchLog;
    NSButton *_chkboxCPUMainThread;
    NSButton *_chkboxCPUOtherThreads;
    NSButton *_chkboxMEMFootprint;
    NSButton *_chkboxMEMResident;
    NSButton *_chkboxMEMVm;
    NSTextField *_labelCPUUsage;
    NSTextField *_labelMEMUsage;
    NSTextField *_labelDISKUsage;
    NSTextField *_labelStatus;
    NSButton *_btnStartStop;
    NSString *_logDirectoryPath;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _sampled_count;
    struct __sFILE *_log_file;
    struct __sFILE *_glitch_log_file;
}

+ (id)getCurrentDateTimeString;
- (void).cxx_destruct;
@property(nonatomic) struct __sFILE *glitch_log_file; // @synthesize glitch_log_file=_glitch_log_file;
@property(nonatomic) struct __sFILE *log_file; // @synthesize log_file=_log_file;
@property(nonatomic) unsigned long long sampled_count; // @synthesize sampled_count=_sampled_count;
@property(nonatomic) unsigned int main_thread_id; // @synthesize main_thread_id=_main_thread_id;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) BOOL enableMonitorMEMVm; // @synthesize enableMonitorMEMVm=_enableMonitorMEMVm;
@property(nonatomic) BOOL enableMonitorMEMResident; // @synthesize enableMonitorMEMResident=_enableMonitorMEMResident;
@property(nonatomic) BOOL enableMonitorMEMFootprint; // @synthesize enableMonitorMEMFootprint=_enableMonitorMEMFootprint;
@property(nonatomic) BOOL enableMonitorCPUOtherThreads; // @synthesize enableMonitorCPUOtherThreads=_enableMonitorCPUOtherThreads;
@property(nonatomic) BOOL enableMonitorCPUMainThread; // @synthesize enableMonitorCPUMainThread=_enableMonitorCPUMainThread;
@property(nonatomic) float diskWriteGlitchThreshold; // @synthesize diskWriteGlitchThreshold=_diskWriteGlitchThreshold;
@property(nonatomic) float diskReadGlitchThreshold; // @synthesize diskReadGlitchThreshold=_diskReadGlitchThreshold;
@property(nonatomic) float memGlitchThreshold; // @synthesize memGlitchThreshold=_memGlitchThreshold;
@property(nonatomic) float cpuGlitchThreshold; // @synthesize cpuGlitchThreshold=_cpuGlitchThreshold;
@property(nonatomic) float diskWriteSpeed; // @synthesize diskWriteSpeed=_diskWriteSpeed;
@property(nonatomic) float diskReadSpeed; // @synthesize diskReadSpeed=_diskReadSpeed;
@property(nonatomic) float memVm; // @synthesize memVm=_memVm;
@property(nonatomic) float memResident; // @synthesize memResident=_memResident;
@property(nonatomic) float memFootprint; // @synthesize memFootprint=_memFootprint;
@property(nonatomic) float cpuUsageOtherThreads; // @synthesize cpuUsageOtherThreads=_cpuUsageOtherThreads;
@property(nonatomic) float cpuUsageMainThread; // @synthesize cpuUsageMainThread=_cpuUsageMainThread;
@property(nonatomic) BOOL firstSample; // @synthesize firstSample=_firstSample;
@property(retain, nonatomic) NSString *logDirectoryPath; // @synthesize logDirectoryPath=_logDirectoryPath;
@property(nonatomic) BOOL isRecording; // @synthesize isRecording=_isRecording;
@property __weak NSButton *btnStartStop; // @synthesize btnStartStop=_btnStartStop;
@property __weak NSTextField *labelStatus; // @synthesize labelStatus=_labelStatus;
@property __weak NSTextField *labelDISKUsage; // @synthesize labelDISKUsage=_labelDISKUsage;
@property __weak NSTextField *labelMEMUsage; // @synthesize labelMEMUsage=_labelMEMUsage;
@property __weak NSTextField *labelCPUUsage; // @synthesize labelCPUUsage=_labelCPUUsage;
@property __weak NSButton *chkboxMEMVm; // @synthesize chkboxMEMVm=_chkboxMEMVm;
@property __weak NSButton *chkboxMEMResident; // @synthesize chkboxMEMResident=_chkboxMEMResident;
@property __weak NSButton *chkboxMEMFootprint; // @synthesize chkboxMEMFootprint=_chkboxMEMFootprint;
@property __weak NSButton *chkboxCPUOtherThreads; // @synthesize chkboxCPUOtherThreads=_chkboxCPUOtherThreads;
@property __weak NSButton *chkboxCPUMainThread; // @synthesize chkboxCPUMainThread=_chkboxCPUMainThread;
@property __weak NSButton *chkboxSaveGlitchLog; // @synthesize chkboxSaveGlitchLog=_chkboxSaveGlitchLog;
@property __weak NSButton *chkboxSaveMonitorLog; // @synthesize chkboxSaveMonitorLog=_chkboxSaveMonitorLog;
@property __weak NSTextField *textLogPath; // @synthesize textLogPath=_textLogPath;
@property __weak NSTextField *textDISKWriteGlitchThreshold; // @synthesize textDISKWriteGlitchThreshold=_textDISKWriteGlitchThreshold;
@property __weak NSTextField *textDISKReadGlitchThreshold; // @synthesize textDISKReadGlitchThreshold=_textDISKReadGlitchThreshold;
@property __weak NSTextField *textMEMGlitchThreshold; // @synthesize textMEMGlitchThreshold=_textMEMGlitchThreshold;
@property __weak NSTextField *textCPUGlitchThreshold; // @synthesize textCPUGlitchThreshold=_textCPUGlitchThreshold;
@property __weak NSComboBox *textMonitorInterval; // @synthesize textMonitorInterval=_textMonitorInterval;
@property __weak NSBox *boxGlitchTable; // @synthesize boxGlitchTable=_boxGlitchTable;
@property(retain, nonatomic) GlitchEventsViewController *glitchEventsViewController; // @synthesize glitchEventsViewController=_glitchEventsViewController;
- (void)onPathChooseClicked:(id)arg1;
- (void)onStartStopClicked:(id)arg1;
- (void)sampleIO;
- (void)sampleMem;
- (void)sampleCPU;
- (void)touchTimer:(BOOL)arg1;
- (void)writeLog:(struct __sFILE *)arg1 andText:(id)arg2;
- (void)dealloc;
- (void)windowDidLoad;
- (id)initWithWindowNibName:(id)arg1;

@end

