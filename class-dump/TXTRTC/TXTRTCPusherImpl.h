//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "V2TRTCCloudObserver-Protocol.h"
#import "V2TXLivePusher-Protocol.h"

@class NSImage, NSString, NSView, V2TRTCCloud, V2TXLivePauseParam;
@protocol V2TXLivePusherObserver;

@interface TXTRTCPusherImpl : NSObject <V2TRTCCloudObserver, V2TXLivePusher>
{
    BOOL _hasEnterRoom;
    BOOL _showDebugView;
    BOOL _isAudioMuted;
    BOOL _isAudioPaused;
    BOOL _isVideoPaused;
    BOOL _enableHighPerformance;
    BOOL _mEnableLandscapePush;
    int _hasEnableAudioAGC;
    int _hasEnableAudioANS;
    NSView *_mRenderView;
    V2TRTCCloud *_trtcCloud;
    long long _volumeIntervalMs;
    NSString *_appGroup;
    V2TXLivePauseParam *_pauseParam;
    long long _mAudioQuality;
    NSImage *_waterMarkImage;
    double _waterMarkScale;
    id <V2TXLivePusherObserver> _pusherObserver;
    struct CGPoint _waterMarkPosition;
}

+ (long long)checkPush:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL mEnableLandscapePush; // @synthesize mEnableLandscapePush=_mEnableLandscapePush;
@property(nonatomic) BOOL enableHighPerformance; // @synthesize enableHighPerformance=_enableHighPerformance;
@property(nonatomic) __weak id <V2TXLivePusherObserver> pusherObserver; // @synthesize pusherObserver=_pusherObserver;
@property(nonatomic) int hasEnableAudioANS; // @synthesize hasEnableAudioANS=_hasEnableAudioANS;
@property(nonatomic) int hasEnableAudioAGC; // @synthesize hasEnableAudioAGC=_hasEnableAudioAGC;
@property(nonatomic) double waterMarkScale; // @synthesize waterMarkScale=_waterMarkScale;
@property(nonatomic) struct CGPoint waterMarkPosition; // @synthesize waterMarkPosition=_waterMarkPosition;
@property(retain, nonatomic) NSImage *waterMarkImage; // @synthesize waterMarkImage=_waterMarkImage;
@property(nonatomic) long long mAudioQuality; // @synthesize mAudioQuality=_mAudioQuality;
@property(retain, nonatomic) V2TXLivePauseParam *pauseParam; // @synthesize pauseParam=_pauseParam;
@property(nonatomic) BOOL isVideoPaused; // @synthesize isVideoPaused=_isVideoPaused;
@property(nonatomic) BOOL isAudioPaused; // @synthesize isAudioPaused=_isAudioPaused;
@property(nonatomic) BOOL isAudioMuted; // @synthesize isAudioMuted=_isAudioMuted;
@property(retain, nonatomic) NSString *appGroup; // @synthesize appGroup=_appGroup;
@property(nonatomic) long long volumeIntervalMs; // @synthesize volumeIntervalMs=_volumeIntervalMs;
@property(nonatomic) BOOL showDebugView; // @synthesize showDebugView=_showDebugView;
@property(retain, nonatomic) V2TRTCCloud *trtcCloud; // @synthesize trtcCloud=_trtcCloud;
@property(retain, nonatomic) NSView *mRenderView; // @synthesize mRenderView=_mRenderView;
@property(readonly) BOOL hasEnterRoom; // @synthesize hasEnterRoom=_hasEnterRoom;
- (void)onExitRoomByServer:(long long)arg1;
- (void)onEnterRoomFailed:(long long)arg1;
- (void)dealloc;
- (long long)setProperty:(id)arg1 value:(id)arg2;
- (void)enableAudioANS:(_Bool)arg1;
- (void)enableAudioAGC:(_Bool)arg1;
- (void)showDebugView:(BOOL)arg1;
- (long long)sendCustomVideoFrame:(id)arg1;
- (long long)enableCustomVideoCapture:(BOOL)arg1;
- (long long)enableCustomVideoProcess:(BOOL)arg1 pixelFormat:(long long)arg2 bufferType:(long long)arg3;
- (long long)enableVolumeEvaluation:(long long)arg1;
- (long long)setEncoderMirror:(BOOL)arg1;
- (long long)setWatermark:(id)arg1 x:(float)arg2 y:(float)arg3 scale:(float)arg4;
- (long long)snapshot;
- (id)getDeviceManager;
- (id)getAudioEffectManager;
- (id)getBeautyManager;
- (long long)setVideoQuality:(long long)arg1 resolutionMode:(long long)arg2;
- (long long)setAudioQuality:(long long)arg1;
- (int)isPushing;
- (void)applyParams;
- (long long)stopPushInner;
- (long long)stopPush;
- (long long)startPush:(id)arg1;
- (long long)stopMicrophone;
- (long long)startMicrophone;
- (long long)stopScreenCapture;
- (long long)startScreenCapture:(id)arg1;
- (long long)stopCamera;
- (long long)startCameraInner:(id)arg1;
- (long long)startCamera:(id)arg1;
- (long long)setRenderRotation:(long long)arg1;
- (long long)setRenderFillMode:(long long)arg1;
- (long long)setRenderMirror:(long long)arg1;
- (long long)setRenderView:(id)arg1;
- (void)setObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

