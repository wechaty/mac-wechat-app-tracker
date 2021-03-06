//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LiveSdkInfo, NSDictionary, NSError, NSImageView, NSString, TRTCQualityInfo;

@protocol LVTrtcMgrExt <NSObject>

@optional
- (void)onLiveTaskVideoFrameFreeze:(unsigned long long)arg1 time:(long long)arg2;
- (void)onLiveTaskStopLocalVideoConnectMic:(unsigned long long)arg1;
- (void)onLiveTaskStopLocalConnectMic:(unsigned long long)arg1;
- (void)onLiveTask:(unsigned long long)arg1 localVideoConnectMicSuccess:(NSImageView *)arg2;
- (void)onLiveTask:(unsigned long long)arg1 onFirstVideoFrame:(NSString *)arg2 streamType:(long long)arg3 width:(int)arg4 height:(int)arg5;
- (void)onLiveTask:(unsigned long long)arg1 cdnPlayEventId:(int)arg2 params:(NSDictionary *)arg3;
- (void)onLiveTask:(unsigned long long)arg1 stopConnectUserVideo:(NSString *)arg2;
- (void)onLiveTask:(unsigned long long)arg1 switchConnectUserVideo:(NSString *)arg2;
- (void)onLiveTask:(unsigned long long)arg1 switchRoleType:(int)arg2 errMsg:(NSString *)arg3;
- (void)onLiveTask:(unsigned long long)arg1 anchorVideoAvailable:(BOOL)arg2;
- (void)onLiveTask:(unsigned long long)arg1 user:(NSString *)arg2 audioAvailable:(BOOL)arg3;
- (void)onLiveTask:(unsigned long long)arg1 liveSdkInfoWillExpire:(LiveSdkInfo *)arg2;
- (void)onLiveTask:(unsigned long long)arg1 exitLiveRoom:(long long)arg2 error:(NSError *)arg3;
- (void)onLiveTask:(unsigned long long)arg1 enterLiveRoom:(NSError *)arg2;
- (void)onLiveTask:(unsigned long long)arg1 updateNetWorkQuality:(TRTCQualityInfo *)arg2;
@end

