//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImageView, NSString, TRTCAudioConfig, TRTCCloud, TRTCParams, TRTCRemoteUserManager, TRTCVideoConfig;
@protocol TRTCCloudManagerDelegate;

@interface TRTCCloudManager : NSObject
{
    BOOL _isCrossingRoom;
    BOOL _isScreenLive;
    id <TRTCCloudManagerDelegate> _delegate;
    long long _scene;
    TRTCParams *_params;
    TRTCVideoConfig *_videoConfig;
    TRTCAudioConfig *_audioConfig;
    TRTCRemoteUserManager *_remoteUserManager;
    NSImageView *_videoView;
    long long _mRole;
    NSString *_mCNDPlayUrl;
    unsigned long long _mCloudAppid;
    unsigned long long _mCloudBizid;
    TRTCCloud *_trtc;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isScreenLive; // @synthesize isScreenLive=_isScreenLive;
@property(retain, nonatomic) TRTCCloud *trtc; // @synthesize trtc=_trtc;
@property(nonatomic) BOOL isCrossingRoom; // @synthesize isCrossingRoom=_isCrossingRoom;
@property(nonatomic) unsigned long long mCloudBizid; // @synthesize mCloudBizid=_mCloudBizid;
@property(nonatomic) unsigned long long mCloudAppid; // @synthesize mCloudAppid=_mCloudAppid;
@property(retain, nonatomic) NSString *mCNDPlayUrl; // @synthesize mCNDPlayUrl=_mCNDPlayUrl;
@property(nonatomic) long long mRole; // @synthesize mRole=_mRole;
@property(retain, nonatomic) NSImageView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) TRTCRemoteUserManager *remoteUserManager; // @synthesize remoteUserManager=_remoteUserManager;
@property(readonly, nonatomic) TRTCAudioConfig *audioConfig; // @synthesize audioConfig=_audioConfig;
@property(readonly, nonatomic) TRTCVideoConfig *videoConfig; // @synthesize videoConfig=_videoConfig;
@property(retain, nonatomic) TRTCParams *params; // @synthesize params=_params;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <TRTCCloudManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setFilter:(id)arg1;
- (void)setBeautyStyle:(long long)arg1 beautyLevel:(long long)arg2 whitenessLevel:(long long)arg3 ruddinessLevel:(long long)arg4;
- (void)onAudioCapturePcm:(id)arg1 sampleRate:(int)arg2 channels:(int)arg3 ts:(unsigned int)arg4;
- (void)setupTorchObservation;
- (id)getCdnUrlOfUser:(id)arg1;
- (void)updateCloudMixtureParamsWithFirstSmallVideoRectRatio:(struct CGRect)arg1;
- (void)updateCloudMixtureParams;
- (id)jsonStringFrom:(id)arg1;
- (void)setExperimentConfig:(id)arg1 params:(id)arg2;
- (void)setupScreenVideoCapture;
- (BOOL)isLiveAudience;
- (void)switchVideoSourceTo:(BOOL)arg1;
- (void)stopLocalVideo;
- (void)startLocalVideo;
- (void)stopLocalAudio:(BOOL)arg1;
- (void)startLocalAudio:(BOOL)arg1;
- (void)playCustomVideoOfUser:(id)arg1 inView:(id)arg2;
- (void)stopCrossRomm;
- (void)startCrossRoom:(id)arg1 userId:(id)arg2;
- (BOOL)sendSEIMessage:(id)arg1 repeatCount:(long long)arg2;
- (BOOL)sendCustomMessage:(id)arg1;
- (void)setVolumeEvaluationEnabled:(BOOL)arg1;
- (void)setSampleRate:(long long)arg1;
- (void)setAnsEnabled:(BOOL)arg1;
- (void)setAgcEnabled:(BOOL)arg1;
- (void)setEarMonitoringEnabled:(BOOL)arg1;
- (void)setVolumeType:(long long)arg1;
- (void)setAudioRoute:(long long)arg1;
- (void)setAudioEnabled:(BOOL)arg1;
- (void)setCDNPlayUrl:(id)arg1;
- (void)setCustomVideo:(id)arg1;
- (void)setAutoFocusEnabled:(BOOL)arg1;
- (void)switchTorch;
- (void)switchCamera;
- (void)setPrefersLowQuality:(BOOL)arg1;
- (void)setSmallVideoEnabled:(BOOL)arg1;
- (void)setQosControlMode:(long long)arg1;
- (void)setMixingInCloud:(BOOL)arg1;
- (void)setWaterMark:(id)arg1 inRect:(struct CGRect)arg2;
- (void)setRemoteMirrorEnabled:(BOOL)arg1;
- (void)setLocalMirrorType:(unsigned long long)arg1;
- (void)setVideoMuted:(BOOL)arg1;
- (void)setVideoEnabled:(BOOL)arg1;
- (void)setVideoFillMode:(long long)arg1;
- (void)setResolutionMode:(long long)arg1;
- (void)setQosPreference:(long long)arg1;
- (void)setVideoBitrate:(int)arg1;
- (void)setVideoFps:(int)arg1;
- (void)setResolution:(long long)arg1;
- (void)setVideoEncoderParam:(id)arg1;
- (void)switchRole:(long long)arg1;
- (void)exitRoom;
- (void)enterRoom;
- (void)setupTrtcAudio;
- (void)setupTrtcVideo;
- (void)setupTrtc;
- (void)setQCloudAccount:(unsigned long long)arg1 bizid:(unsigned long long)arg2;
- (id)initWithTrtc:(id)arg1 params:(id)arg2 scene:(long long)arg3;

@end
