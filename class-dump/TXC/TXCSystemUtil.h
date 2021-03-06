//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXCSystemUtil : NSObject
{
}

+ (BOOL)isLowPerformanceDevice;
+ (id)deviceModelVersion;
+ (float)getAppMemoryUsage;
+ (id)getStreamIDFromStreamUrl:(id)arg1;
+ (BOOL)isVersionNoLessThan:(id)arg1;
+ (BOOL)isVersionNoGreaterThan:(id)arg1;
+ (BOOL)isVersionLessThan:(id)arg1;
+ (BOOL)isVersionGreaterThan:(id)arg1;
+ (id)getSystemVersion;
+ (id)getDevUUID;
+ (id)getPackageName;
+ (id)createUUID;
+ (id)getDeviceName;
+ (id)getUserId;
+ (int)getNetworkType;
+ (float)getSysCpuUsage;
+ (float)getAppCpuUsage;

@end

