//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTouchBarDelegate-Protocol.h"

@class AVAsset, MMPreviewAVPlayerView, NSString;

@interface MMPreviewVideoPlayerControl : NSObject <NSTouchBarDelegate>
{
    BOOL _isFirstTimeStart;
    BOOL _isPlayToEnd;
    BOOL _isReadyToPlay;
    BOOL _isWaitingForPlay;
    BOOL _isMuteToPlay;
    float _volumeValue;
    unsigned long long _status;
    MMPreviewAVPlayerView *_playerView;
    AVAsset *_assetToPlay;
    NSString *_currentPath;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentPath; // @synthesize currentPath=_currentPath;
@property(nonatomic) float volumeValue; // @synthesize volumeValue=_volumeValue;
@property(nonatomic) BOOL isMuteToPlay; // @synthesize isMuteToPlay=_isMuteToPlay;
@property(nonatomic) BOOL isWaitingForPlay; // @synthesize isWaitingForPlay=_isWaitingForPlay;
@property(nonatomic) BOOL isReadyToPlay; // @synthesize isReadyToPlay=_isReadyToPlay;
@property(nonatomic) BOOL isPlayToEnd; // @synthesize isPlayToEnd=_isPlayToEnd;
@property(retain, nonatomic) AVAsset *assetToPlay; // @synthesize assetToPlay=_assetToPlay;
@property(retain, nonatomic) MMPreviewAVPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) BOOL isFirstTimeStart; // @synthesize isFirstTimeStart=_isFirstTimeStart;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (id)makeSurePlayerView;
- (void)makeSureAVPlayer:(id)arg1;
- (BOOL)isVisiable:(id)arg1;
- (void)remove;
- (void)stop;
- (void)pause;
- (void)startToPlay;
- (void)play;
- (void)hide:(BOOL)arg1;
- (void)load:(id)arg1;
- (void)didReceiveAVPlayerItemDidPlayToEndTimeNotification;
- (void)didLoadAssetAsynchronousLoad:(id)arg1;
- (void)loadAVPlayer:(id)arg1;
- (void)initPlayView;
- (void)destroy;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
