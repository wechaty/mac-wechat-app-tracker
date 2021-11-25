//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IExptServiceExt-Protocol.h"

@class NSMutableDictionary;

@interface WCCrashBlockConfigMgr : NSObject <IExptServiceExt>
{
    NSMutableDictionary *_dicMainThreadMonitorCongfig;
}

+ (id)getConfigFilePath;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicMainThreadMonitorCongfig; // @synthesize dicMainThreadMonitorCongfig=_dicMainThreadMonitorCongfig;
- (float)getPowerConsumeCPULimit;
- (BOOL)getShouldGetPowerConsumeStack;
- (BOOL)getShouldGetCPUHighLog;
- (int)getMainThreadCount;
- (unsigned int)getPerStackInterval;
- (int)getDeviceUnder;
- (BOOL)getMainThreadHandle;
- (float)getCPUUsagePercent;
- (unsigned int)getCheckPeriodTime;
- (unsigned int)getRunloopTimeOut;
- (BOOL)getBlockMonitorOpen;
- (void)saveDumpReportConfig;
- (void)loadDumpReportConfig;
- (void)onExptItemListChange;
- (id)getBlockMointorConfiguration;
- (void)dealloc;
- (void)p_setupStrategyWithHeavyAll:(BOOL)arg1;
- (void)setupStrategy;
- (id)init;

@end
