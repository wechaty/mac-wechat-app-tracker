//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MatrixPluginConfig.h"

@class NSArray, NSString, WCBlockMonitorConfiguration;
@protocol WCCrashBlockMonitorDelegate;

@interface WCCrashBlockMonitorConfig : MatrixPluginConfig
{
    BOOL _enableCrash;
    BOOL _enableBlockMonitor;
    NSString *_appVersion;
    NSString *_appShortVersion;
    id <WCCrashBlockMonitorDelegate> _blockMonitorDelegate;
    CDUnknownFunctionPointerType _onHandleSignalCallBack;
    CDUnknownFunctionPointerType _onAppendAdditionalInfoCallBack;
    WCBlockMonitorConfiguration *_blockMonitorConfiguration;
    unsigned long long _reportStrategy;
    NSArray *_customStrategy;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *customStrategy; // @synthesize customStrategy=_customStrategy;
@property(nonatomic) unsigned long long reportStrategy; // @synthesize reportStrategy=_reportStrategy;
@property(retain, nonatomic) WCBlockMonitorConfiguration *blockMonitorConfiguration; // @synthesize blockMonitorConfiguration=_blockMonitorConfiguration;
@property(nonatomic) CDUnknownFunctionPointerType onAppendAdditionalInfoCallBack; // @synthesize onAppendAdditionalInfoCallBack=_onAppendAdditionalInfoCallBack;
@property(nonatomic) CDUnknownFunctionPointerType onHandleSignalCallBack; // @synthesize onHandleSignalCallBack=_onHandleSignalCallBack;
@property(nonatomic) __weak id <WCCrashBlockMonitorDelegate> blockMonitorDelegate; // @synthesize blockMonitorDelegate=_blockMonitorDelegate;
@property(nonatomic) BOOL enableBlockMonitor; // @synthesize enableBlockMonitor=_enableBlockMonitor;
@property(nonatomic) BOOL enableCrash; // @synthesize enableCrash=_enableCrash;
@property(copy, nonatomic) NSString *appShortVersion; // @synthesize appShortVersion=_appShortVersion;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (id)init;

@end

