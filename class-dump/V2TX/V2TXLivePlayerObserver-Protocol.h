//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSImage, NSString, V2TXLivePlayerStatistics, V2TXLiveVideoFrame;
@protocol V2TXLivePlayer;

@protocol V2TXLivePlayerObserver <NSObject>

@optional
- (void)onRenderVideoFrame:(id <V2TXLivePlayer>)arg1 frame:(V2TXLiveVideoFrame *)arg2;
- (void)onSnapshotComplete:(id <V2TXLivePlayer>)arg1 image:(NSImage *)arg2;
- (void)onStatisticsUpdate:(id <V2TXLivePlayer>)arg1 statistics:(V2TXLivePlayerStatistics *)arg2;
- (void)onPlayoutVolumeUpdate:(id <V2TXLivePlayer>)arg1 volume:(long long)arg2;
- (void)onAudioPlayStatusUpdate:(id <V2TXLivePlayer>)arg1 status:(long long)arg2 reason:(long long)arg3 extraInfo:(NSDictionary *)arg4;
- (void)onVideoPlayStatusUpdate:(id <V2TXLivePlayer>)arg1 status:(long long)arg2 reason:(long long)arg3 extraInfo:(NSDictionary *)arg4;
- (void)onWarning:(id <V2TXLivePlayer>)arg1 code:(long long)arg2 message:(NSString *)arg3 extraInfo:(NSDictionary *)arg4;
- (void)onError:(id <V2TXLivePlayer>)arg1 code:(long long)arg2 message:(NSString *)arg3 extraInfo:(NSDictionary *)arg4;
@end

