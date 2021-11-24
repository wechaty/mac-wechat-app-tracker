//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSImage, NSString, V2TXLivePusherStatistics, V2TXLiveVideoFrame;

@protocol V2TXLivePusherObserver <NSObject>

@optional
- (void)onGLContextDestroy;
- (void)onProcessVideoFrame:(V2TXLiveVideoFrame *)arg1 dstFrame:(V2TXLiveVideoFrame *)arg2;
- (void)onSnapshotComplete:(NSImage *)arg1;
- (void)onStatisticsUpdate:(V2TXLivePusherStatistics *)arg1;
- (void)onPushStatusUpdate:(long long)arg1 message:(NSString *)arg2 extraInfo:(NSDictionary *)arg3;
- (void)onMicrophoneVolumeUpdate:(long long)arg1;
- (void)onCaptureFirstVideoFrame;
- (void)onCaptureFirstAudioFrame;
- (void)onWarning:(long long)arg1 message:(NSString *)arg2 extraInfo:(NSDictionary *)arg3;
- (void)onError:(long long)arg1 message:(NSString *)arg2 extraInfo:(NSDictionary *)arg3;
@end

