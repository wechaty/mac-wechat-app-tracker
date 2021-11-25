//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "V2TXLivePusher-Protocol.h"

@class NSString;
@protocol V2TXLivePusher;

@interface V2TXLivePusher : NSObject <V2TXLivePusher>
{
    BOOL _mEnableCustomVideoCapture;
    BOOL _mIsSigned;
    unsigned long long _volumeEvaluationInterval;
    id <V2TXLivePusher> _livePusher;
    unsigned long long _liveMode;
    NSString *_url;
    long long _asyncState;
}

- (void).cxx_destruct;
@property BOOL mIsSigned; // @synthesize mIsSigned=_mIsSigned;
@property long long asyncState; // @synthesize asyncState=_asyncState;
@property(retain) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long liveMode; // @synthesize liveMode=_liveMode;
@property(retain, nonatomic) id <V2TXLivePusher> livePusher; // @synthesize livePusher=_livePusher;
@property(nonatomic) unsigned long long volumeEvaluationInterval; // @synthesize volumeEvaluationInterval=_volumeEvaluationInterval;
@property(nonatomic) BOOL mEnableCustomVideoCapture; // @synthesize mEnableCustomVideoCapture=_mEnableCustomVideoCapture;
- (id)init;
- (void)dealloc;
- (void)showDebugView:(BOOL)arg1;
- (id)getDeviceManager;
- (id)getAudioEffectManager;
- (id)getBeautyManager;
- (long long)sendCustomVideoFrame:(id)arg1;
- (long long)enableCustomVideoCapture:(BOOL)arg1;
- (long long)enableCustomVideoProcess:(BOOL)arg1 pixelFormat:(long long)arg2 bufferType:(long long)arg3;
- (long long)enableVolumeEvaluation:(long long)arg1;
- (long long)setEncoderMirror:(BOOL)arg1;
- (long long)setWatermark:(id)arg1 x:(float)arg2 y:(float)arg3 scale:(float)arg4;
- (long long)snapshot;
- (long long)setVideoQuality:(long long)arg1 resolutionMode:(long long)arg2;
- (long long)setAudioQuality:(long long)arg1;
- (int)isPushing;
- (long long)stopPush;
- (long long)startPush:(id)arg1;
- (BOOL)isSigned;
- (long long)stopMicrophone;
- (long long)startMicrophone;
- (long long)stopScreenCapture;
- (long long)stopCamera;
- (long long)startCamera:(id)arg1;
- (long long)setRenderRotation:(long long)arg1;
- (long long)setRenderMirror:(long long)arg1;
- (long long)setRenderView:(id)arg1;
- (long long)setProperty:(id)arg1 value:(id)arg2;
- (void)setObserver:(id)arg1;
- (id)initWithLiveMode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
