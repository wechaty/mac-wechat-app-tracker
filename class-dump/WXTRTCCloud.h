//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TRTCCloud.h"

@class NSArray, TRTCQualityInfo;
@protocol TXLivePushListener;

@interface WXTRTCCloud : TRTCCloud
{
    struct unordered_map<std::__1::basic_string<char>, int, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _audioVolumeMap;
    struct unordered_map<std::__1::basic_string<char>, int, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _lastVolumeNotifyMap;
    struct unordered_map<std::__1::basic_string<char>, AudioVolumeListener *, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, AudioVolumeListener *>>> _audioVolumeListenerMap;
    struct unordered_map<std::__1::basic_string<char>, __weak id<TXLivePlayListener>, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, __weak id<TXLivePlayListener>>>> _subPlayListenerMap;
    struct unordered_map<std::__1::basic_string<char>, __weak id<TXLivePlayListener>, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, __weak id<TXLivePlayListener>>>> _mainPlayListenerMap;
    TRTCQualityInfo *_localQuality;
    NSArray *_remoteQuality;
    id <TXLivePushListener> _livePushListener;
}

+ (void)destroySharedIntance;
+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TXLivePushListener> livePushListener; // @synthesize livePushListener=_livePushListener;
- (void)enableZoom:(BOOL)arg1;
- (void)enableTouchFocus:(BOOL)arg1;
- (void)notifySEIMessage:(id)arg1 msg:(id)arg2;
- (void)notifyStatistics:(id)arg1;
- (void)notifyNetworkQuality:(id)arg1 remoteQuality:(id)arg2;
- (void)notifyUserVoiceVolume:(id)arg1 totalVolume:(long long)arg2;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)unregisterLivePlayListener:(id)arg1 subStream:(BOOL)arg2;
- (void)registerLivePlayListener:(id)arg1 subStream:(BOOL)arg2 listener:(id)arg3;
- (void)unregisterAudioVolumeEvaluationListener:(id)arg1 subStream:(BOOL)arg2;
- (void)registerAudioVolumeEvaluationListener:(id)arg1 subStream:(BOOL)arg2 listener:(id)arg3;
- (void)enableBlackStream:(BOOL)arg1;
- (void)snapshotRemoteSubStreamView:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)snapshotRemoteView:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)snapshotLocalView:(CDUnknownBlockType)arg1;
- (void)setDefaultStreamRecvMode:(int)arg1;
- (void)resetStatus;
- (void)destroyClean;
- (id)initInternal;

@end

