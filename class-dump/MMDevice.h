//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMDevice : NSObject
{
    int _isTranslated;
    struct __SCDynamicStore *_store;
    NSString *_architecture;
}

+ (BOOL)isSupportAndroidDevice:(id)arg1;
+ (BOOL)isSupportIOSDevice:(id)arg1;
+ (id)getDeviceBssid;
+ (id)getDeviceSsid;
+ (int)getSysInfo:(unsigned int)arg1;
+ (id)getSysInfoByName:(char *)arg1;
+ (id)currentDevice;
+ (void)initialize;
+ (BOOL)isCatalinaOrLater;
+ (BOOL)isMojaveOrLater;
+ (BOOL)isHighSierraOrLater;
+ (BOOL)isElCapitanBefore;
+ (BOOL)isSierraBefore;
+ (BOOL)isYosemiteOrLater;
+ (BOOL)is10_12OrLater;
+ (BOOL)isElCapitanOrLater;
+ (BOOL)isSupportMiniProgram;
@property(nonatomic) NSString *architecture; // @synthesize architecture=_architecture;
@property(nonatomic) int isTranslated; // @synthesize isTranslated=_isTranslated;
@property(nonatomic) struct __SCDynamicStore *store; // @synthesize store=_store;
- (id)GetBuildProductVersion;
- (id)GetShortSystemVersion;
- (id)GetSystemVersion;
- (id)GetSystemName;
- (int)L3CacheSize;
- (int)L2CacheSize;
- (int)L1DCacheSize;
- (int)L1ICacheSize;
- (int)cacheLine;
- (int)userMemory;
- (int)totalMemory;
- (int)busFrequency;
- (int)cpuFrequency;
- (int)cpuCount;
- (id)platform;
- (int)processIsTranslated;
- (id)GetModelPlatform;
- (id)GetDeviceName;
- (void)dealloc;
- (id)init;

@end

