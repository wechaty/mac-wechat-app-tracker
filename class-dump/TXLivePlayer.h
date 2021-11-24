//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXAudioRawDataDelegate-Protocol.h"
#import "TXICustomRenderDelegate-Protocol.h"
#import "TXINotifyDelegate-Protocol.h"

@class NSString, NSTextView, NSView, TXCPlayerConfig, TXIPlayer, TXLivePlayConfig, TimeShiftHelper;
@protocol OS_dispatch_source, TXAudioRawDataDelegate, TXLivePlayListener, TXLiveRecordListener, TXVideoCustomProcessDelegate;

@interface TXLivePlayer : NSObject <TXINotifyDelegate, TXICustomRenderDelegate, TXAudioRawDataDelegate>
{
    TXCPlayerConfig *_playerConfig;
    NSView *_containView;
    NSTextView *_statusView;
    NSTextView *_evtLogView;
    NSString *_logMsg;
    struct NSEdgeInsets _logViewMargin;
    TimeShiftHelper *_timeShiftHelper;
    BOOL _isShiftPlaying;
    long long _progressStartTimeInt;
    unsigned int _insertIndex;
    NSString *_playUrl;
    NSString *_livePlayUrl;
    float _rate;
    BOOL _mute;
    BOOL _muteInSpeaker;
    int _volume;
    int _width;
    int _height;
    NSObject<OS_dispatch_source> *_audioVolumeEvaluationTimer;
    CDUnknownBlockType _audioVolumeEvaluationListener;
    unsigned long long _audioVolumeEvaluationInterval;
    struct recursive_mutex _publicInterfaceLock;
    unsigned long long _lastLogStatisticsTs;
    NSString *_statisticsStr;
    int _minCacheSize;
    int _interfaceType;
    BOOL _enableHWAcceleration;
    BOOL _isAutoPlay;
    BOOL _firstPlay;
    id <TXLivePlayListener> _delegate;
    id <TXVideoCustomProcessDelegate> _videoProcessDelegate;
    id <TXAudioRawDataDelegate> _audioRawDataDelegate;
    TXLivePlayConfig *_config;
    TXIPlayer *_player;
}

+ (void)setAudioRoute:(long long)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain) TXIPlayer *player; // @synthesize player=_player;
@property BOOL firstPlay; // @synthesize firstPlay=_firstPlay;
@property(nonatomic) BOOL isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(copy, nonatomic) TXLivePlayConfig *config; // @synthesize config=_config;
@property(nonatomic) BOOL enableHWAcceleration; // @synthesize enableHWAcceleration=_enableHWAcceleration;
@property(nonatomic) __weak id <TXAudioRawDataDelegate> audioRawDataDelegate; // @synthesize audioRawDataDelegate=_audioRawDataDelegate;
@property(nonatomic) __weak id <TXVideoCustomProcessDelegate> videoProcessDelegate; // @synthesize videoProcessDelegate=_videoProcessDelegate;
@property(nonatomic) __weak id <TXLivePlayListener> delegate; // @synthesize delegate=_delegate;
- (void)onPcmDataAvailable:(id)arg1 pts:(unsigned long long)arg2;
- (void)onAudioInfoChanged:(int)arg1 channels:(int)arg2;
- (BOOL)onCustomRender:(struct __CVBuffer *)arg1;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)logStatistics;
- (void)dumpStatistics:(int)arg1 params:(id)arg2;
- (void)callExperimentalAPI:(id)arg1;
- (void)enableAudioDeviceAutoRestart;
- (int)switchStream:(id)arg1;
- (void)audioVolumeEvaluationNotify;
- (void)stopAudioVolumeEvaluationTask;
- (void)startAudioVolumeEvaluationTask;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1;
- (void)setAudioVolumeEvaluationListener:(CDUnknownBlockType)arg1;
- (void)showVideoDebugLog:(BOOL)arg1;
- (void)setLogViewMargin:(struct NSEdgeInsets)arg1;
- (void)setRate:(float)arg1;
- (void)snapshot:(CDUnknownBlockType)arg1;
- (int)stopRecord;
- (int)startRecord:(long long)arg1;
@property(nonatomic) __weak id <TXLiveRecordListener> recordDelegate;
- (void)setVolume:(int)arg1;
- (void)setMute:(BOOL)arg1;
- (void)setRenderMode:(long long)arg1;
- (void)setRenderRotation:(long long)arg1;
- (int)resumeLive;
- (int)seek:(float)arg1;
- (void)resume;
- (void)pause;
- (int)prepareLiveSeek:(id)arg1 bizId:(long long)arg2;
- (_Bool)isPlaying;
- (int)stopPlay;
- (int)startPlay:(id)arg1 type:(long long)arg2;
- (void)removeVideoWidget;
- (void)setupVideoWidget:(struct CGRect)arg1 containView:(id)arg2 insertIndex:(unsigned int)arg3;
- (void)applyConfig;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

