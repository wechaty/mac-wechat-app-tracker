//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSView, TXAudioEffectManager, TXCAudioVolumeEvaluator, TXCCaptureAndEnc;
@protocol OS_dispatch_queue, TXDeviceManagerDelegate;

@interface TXDeviceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSView *_previewTestView;
    TXCCaptureAndEnc *_capture;
    struct AudioEngine *_audioEngine;
    TXCAudioVolumeEvaluator *_volumeEvaluator;
    TXAudioEffectManager *_audioEffectManager;
    id <TXDeviceManagerDelegate> _delegate;
}

+ (id)convertToTXMediaDeviceInfo:(const struct _AudioDeviceInfo *)arg1 type:(long long)arg2;
+ (id)convertToTXMediaDeviceInfoArray:(const vector_ea1dd089 *)arg1 type:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TXDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TXAudioEffectManager *audioEffectManager; // @synthesize audioEffectManager=_audioEffectManager;
@property(retain, nonatomic) TXCAudioVolumeEvaluator *volumeEvaluator; // @synthesize volumeEvaluator=_volumeEvaluator;
@property(nonatomic) struct AudioEngine *audioEngine; // @synthesize audioEngine=_audioEngine;
@property(retain, nonatomic) TXCCaptureAndEnc *capture; // @synthesize capture=_capture;
@property(retain, nonatomic) NSView *previewTestView; // @synthesize previewTestView=_previewTestView;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)dispatchOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2 isAsync:(BOOL)arg3;
- (void)apiLog:(id)arg1 toKibana:(BOOL)arg2;
- (void)apiLog:(id)arg1;
- (BOOL)getCurrentSpeakerDeviceMute;
- (long long)setCurrentSpeakerDeviceMute:(BOOL)arg1;
- (float)getCurrentSpeakerDeviceVolume;
- (long long)setCurrentSpeakerDeviceVolume:(long long)arg1;
- (id)getCurrentSpeakerDevice;
- (long long)setCurrentSpeakerDevice:(id)arg1;
- (id)getSpeakerDevicesList;
- (BOOL)getCurrentMicDeviceMute;
- (long long)setCurrentMicDeviceMute:(BOOL)arg1;
- (float)getCurrentMicDeviceVolume;
- (long long)setCurrentMicDeviceVolume:(long long)arg1;
- (id)getCurrentMicDevice;
- (long long)setCurrentMicDevice:(id)arg1;
- (id)getMicDevicesList;
- (id)getCurrentCameraDevice;
- (long long)setCurrentCameraDevice:(id)arg1;
- (id)getCameraDevicesList;
- (long long)stopSpeakerDeviceTest;
- (long long)startSpeakerDeviceTest:(id)arg1 onVolumeChanged:(CDUnknownBlockType)arg2;
- (long long)stopMicDeviceTest;
- (long long)startMicDeviceTest:(long long)arg1 testEcho:(CDUnknownBlockType)arg2;
- (long long)stopCameraDeviceTest;
- (long long)startCameraDeviceTest:(id)arg1;
- (BOOL)getCurrentDeviceMute:(long long)arg1;
- (long long)setCurrentDeviceMute:(BOOL)arg1 deviceType:(long long)arg2;
- (long long)getCurrentDeviceVolume:(long long)arg1;
- (long long)setCurrentDeviceVolume:(long long)arg1 deviceType:(long long)arg2;
- (id)getCurrentDevice:(long long)arg1;
- (long long)setCurrentDevice:(long long)arg1 deviceId:(id)arg2;
- (id)getDevicesList:(long long)arg1;
- (id)initWithQueue:(id)arg1 delegateQueue:(id)arg2;

@end

