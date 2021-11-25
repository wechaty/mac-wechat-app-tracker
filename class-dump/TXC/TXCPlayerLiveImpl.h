//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXIPlayer.h"

#import "TXCAudioEventDelegate-Protocol.h"
#import "TXIAudioPlayDataDelegate-Protocol.h"
#import "TXICustomRenderDelegate-Protocol.h"
#import "TXIDownloaderDelegate-Protocol.h"
#import "TXINotifyDelegate-Protocol.h"
#import "TXIRenderAndDecDelegate-Protocol.h"

@class NSDate, NSObject, NSString, TXCDataReport, TXCRenderAndDec, TXCStreamDownloader;
@protocol OS_dispatch_source;

@interface TXCPlayerLiveImpl : TXIPlayer <TXIDownloaderDelegate, TXINotifyDelegate, TXICustomRenderDelegate, TXIAudioPlayDataDelegate, TXIRenderAndDecDelegate, TXCAudioEventDelegate>
{
    NSObject<OS_dispatch_source> *_statusTimer;
    NSObject<OS_dispatch_source> *_progressTimer;
    NSString *_playUrl;
    BOOL _mute;
    int _volume;
    float _realTimeJitterCache;
    float _realTimeJitterCacheMin;
    float _realTimeJitterCacheMax;
    NSDate *_switchTime;
    long long _audioPts;
    long long _firstAudioPts;
    BOOL _isFirstAudioPlay;
    BOOL _hasFirstFrameRender;
    unsigned long long _statusNotifyCount;
    int _interfaceType;
    TXCDataReport *_playReporter;
    TXCStreamDownloader *_streamDownloader;
    TXCRenderAndDec *_renderDec;
    NSString *_userId;
    struct AudioEngine *_audioEngine;
    shared_ptr_b0e20bcb _audioEventCallback;
}

+ (void)setAudioMode:(long long)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_b0e20bcb audioEventCallback; // @synthesize audioEventCallback=_audioEventCallback;
@property(nonatomic) struct AudioEngine *audioEngine; // @synthesize audioEngine=_audioEngine;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain) TXCRenderAndDec *renderDec; // @synthesize renderDec=_renderDec;
@property(retain) TXCStreamDownloader *streamDownloader; // @synthesize streamDownloader=_streamDownloader;
@property(retain) TXCDataReport *playReporter; // @synthesize playReporter=_playReporter;
- (void)notifyAudioEvent:(id)arg1 code:(int)arg2 message:(id)arg3 params:(id)arg4;
- (void)onAudioEngineWarning:(id)arg1 code:(int)arg2 message:(id)arg3 params:(id)arg4;
- (void)onAudioEngineError:(id)arg1 code:(int)arg2 message:(id)arg3 params:(id)arg4;
- (void)onAudioEngineEvent:(id)arg1 code:(int)arg2 message:(id)arg3 params:(id)arg4;
- (void)onRequestKeyFrame:(id)arg1 streamType:(int)arg2;
- (void)onAudioPlayData:(id)arg1 timeStamp:(unsigned long long)arg2 sampleRate:(int)arg3 channels:(int)arg4;
- (BOOL)onCustomRender:(struct __CVBuffer *)arg1;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)onSwitchDownloaderFailed;
- (void)onSwitchedDownloader;
- (void)onPullNAL:(id)arg1;
- (void)onPullAudio:(id)arg1;
- (int)switchStream:(id)arg1;
- (void)snapshot:(CDUnknownBlockType)arg1;
- (void)decodeNAL:(id)arg1;
- (void)setInterfaceType:(int)arg1;
- (void)setVolume:(int)arg1;
- (void)setMute:(BOOL)arg1;
- (void)resume;
- (void)pause;
- (void)stopPlayKeepRenderView;
- (void)stopPlay;
- (int)startPlay:(id)arg1;
- (void)removeVideoWidget;
- (void)insertVideoWidgetToView:(id)arg1 atIndex:(long long)arg2;
- (BOOL)isPlaying;
- (void)setConfig:(id)arg1;
- (void)setMuteInSpeaker:(BOOL)arg1;
- (unsigned int)volumeLevel;
- (void)setEnableVolumeLevelCal:(BOOL)arg1;
- (id)getH264Url;
- (void)statusNotify;
- (void)convertStatus;
- (void)stopProgressNotify;
- (void)startProgressNotify;
- (void)stopStatusNotify;
- (void)startStatusNotify;
- (void)applyRemoteAudioCacheParams;
- (void)applyConfig;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
