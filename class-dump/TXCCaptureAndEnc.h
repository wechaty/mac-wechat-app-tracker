//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCModule.h"

#import "TXIAudioEncodeTRAEDataDelegate-Protocol.h"
#import "TXIAudioRecordDelegate-Protocol.h"
#import "TXICameraCapturerDelegate-Protocol.h"
#import "TXINotifyDelegate-Protocol.h"
#import "TXIRenderViewDelegate-Protocol.h"
#import "TXIVideoEncoderDelegate-Protocol.h"
#import "TXIVideoPreprocessorDelegateEx-Protocol.h"

@class AVCaptureDevice, NSHashTable, NSImage, NSLock, NSMutableArray, NSObject, NSString, NSThread, TXAudioEffectManager, TXBeautyManager, TXCCameraCapturer, TXCRenderStats, TXCRenderView, TXCScreenCapturer, TXCSnapshotManager, TXCVideoEncoder, TXCVideoPreprocessorEx, TXCWindowCapturer, TXReplayKitMixer, TXSNALPacket;
@protocol OS_dispatch_queue, OS_dispatch_source, TXICaptureAndEncDelegate, TXICustomPreprocessDelegate, TXINotifyDelegate;

@interface TXCCaptureAndEnc : TXCModule <TXIAudioRecordDelegate, TXIAudioEncodeTRAEDataDelegate, TXICameraCapturerDelegate, TXIVideoPreprocessorDelegateEx, TXIVideoEncoderDelegate, TXIRenderViewDelegate, TXINotifyDelegate>
{
    TXReplayKitMixer *_rpMixer;
    NSObject<OS_dispatch_source> *_BlackStreamNalTimer;
    unsigned long long _pauseTS;
    unsigned long long _lastFPSTickMS;
    struct CGSize _originSampleBufferSize;
    BOOL _isLastSampleBuffer;
    NSMutableArray *_sampleBufferArray;
    NSThread *_sampleBufferLoopThread;
    long long _sampleHomeOrientation;
    NSLock *_audioBufferLock;
    char *_audioBuffer;
    int _audioBufferOffset;
    BOOL _enableBFrame;
    unsigned long long _lastEncodedFrameIndex;
    int _idrFps;
    long long _renderMode;
    int _invalidEncoderSessionCount;
    TXBeautyManager *_beautyManager;
    NSHashTable *_renderViews;
    BOOL _enableSmallVideo;
    struct CGSize _smallVideoSize;
    unsigned int _smallVideoFps;
    unsigned int _smallVideoBitrate;
    BOOL _hasRecvFirstVideoFrame;
    struct shared_ptr<txliteav::audio::DataCallbackFormat> _audioCallbackDataFormat;
    BOOL _enableCustomProcess;
    BOOL _enableMirror;
    BOOL _enableTouchFocus;
    BOOL _enableMute;
    BOOL _enableAEC;
    BOOL _enableSoftAEC;
    BOOL _enableSoftANS;
    BOOL _enableSoftAGC;
    BOOL _enableCustomAudioCapture;
    BOOL _enableAudioPreview;
    BOOL _enableAudioHWAcceleration;
    BOOL _enableEosMode;
    BOOL _enableCameraCapture;
    BOOL _enableFrontCamera;
    BOOL _enableFaceDetect;
    BOOL _enableZoom;
    BOOL _enableGSensor;
    BOOL _enablePureAudioPush;
    BOOL _preprocessInCustomMode;
    BOOL _needCropCustomVideo;
    BOOL _realtimeMode;
    BOOL _autoSampleBufferSize;
    BOOL _enableVideoHWAcceleration;
    BOOL _enableRPS;
    BOOL _enableFpsLimit;
    BOOL _enableNalCallback;
    BOOL _enableBlackStreamNal;
    BOOL _isPushing;
    _Bool _isAnnexB;
    BOOL _enableClockOverlay;
    BOOL _enableH265Encode;
    BOOL _lockOutput;
    BOOL _hasProcessedVideoFrame;
    BOOL _isPaused;
    BOOL _isScreenRecording;
    BOOL _isScreenRecordPaused;
    BOOL _isScreenRecordLaunching;
    BOOL _hasCapture;
    int _audioFormat;
    int _videoFPS;
    int _minQP;
    int _maxQP;
    int _rcMethod;
    int _streamType;
    id <TXICaptureAndEncDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
    TXAudioEffectManager *_audioEffectManager;
    id <TXICustomPreprocessDelegate> _customPreprocessDelegate;
    long long _homeOrientation;
    long long _rotation;
    CDUnknownBlockType _volumeTestBlock;
    NSImage *_watermark;
    long long _customRenderFormat;
    long long _customPreprocessFormat;
    long long _videoResolution;
    long long _videoEncodeGop;
    long long _videoBitrate;
    long long _outputRotation;
    long long _pauseFPS;
    long long _pauseTime;
    NSImage *_pauseImage;
    TXCCameraCapturer *_cameraCapturer;
    TXCWindowCapturer *_windowCapture;
    TXCScreenCapturer *_screenCapture;
    TXCRenderStats *_renderStats;
    TXCVideoEncoder *_videoEncoder;
    TXCVideoEncoder *_smallVideoEncoder;
    TXSNALPacket *_backgroundNAL;
    TXSNALPacket *_blackNAL;
    TXCVideoPreprocessorEx *_videoPreproccessor;
    TXCRenderView *_renderView;
    TXCSnapshotManager *_snapshotManager;
    unsigned long long _audioEnableFlag;
    unsigned long long _videoEnableFlag;
    unsigned long long _videoPauseFlag;
    CDUnknownBlockType _audioSendLogger;
    CDUnknownBlockType _customCaptureLogger;
    CDUnknownBlockType _screenCaptureReporter;
    long long _screenVideoFrameIndex;
    long long _screenCaptureReportedTicks;
    NSObject<OS_dispatch_queue> *_backgroundSendQueue;
    NSObject<OS_dispatch_queue> *_blackNalSendQueue;
    NSObject<OS_dispatch_source> *_backgroundTimer;
    struct CGPoint _watermarkPos;
    struct CGSize _videoSize;
    struct CGSize _blackStreamNalSize;
    shared_ptr_cfb4f353 _audioRawCaptureCallback;
    shared_ptr_cfb4f353 _audioCaptureCallback;
    shared_ptr_0ac66a56 _encodedAudioCallback;
    shared_ptr_3396f5aa _audioEncodedTRAECallback;
    shared_ptr_87dc2e82 _audioDataSender;
    struct CGRect _watermarkNormalization;
}

+ (BOOL)isRPSSupported;
+ (void)setLastEncodedGopIndex:(long long)arg1;
+ (long long)lastEncodedGopIndex;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *backgroundTimer; // @synthesize backgroundTimer=_backgroundTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *blackNalSendQueue; // @synthesize blackNalSendQueue=_blackNalSendQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundSendQueue; // @synthesize backgroundSendQueue=_backgroundSendQueue;
@property(nonatomic) BOOL hasCapture; // @synthesize hasCapture=_hasCapture;
@property(nonatomic) long long screenCaptureReportedTicks; // @synthesize screenCaptureReportedTicks=_screenCaptureReportedTicks;
@property(nonatomic) long long screenVideoFrameIndex; // @synthesize screenVideoFrameIndex=_screenVideoFrameIndex;
@property BOOL isScreenRecordLaunching; // @synthesize isScreenRecordLaunching=_isScreenRecordLaunching;
@property BOOL isScreenRecordPaused; // @synthesize isScreenRecordPaused=_isScreenRecordPaused;
@property BOOL isScreenRecording; // @synthesize isScreenRecording=_isScreenRecording;
@property(copy, nonatomic) CDUnknownBlockType screenCaptureReporter; // @synthesize screenCaptureReporter=_screenCaptureReporter;
@property(readonly, copy, nonatomic) CDUnknownBlockType customCaptureLogger; // @synthesize customCaptureLogger=_customCaptureLogger;
@property(readonly, copy, nonatomic) CDUnknownBlockType audioSendLogger; // @synthesize audioSendLogger=_audioSendLogger;
@property(nonatomic) shared_ptr_87dc2e82 audioDataSender; // @synthesize audioDataSender=_audioDataSender;
@property(nonatomic) shared_ptr_3396f5aa audioEncodedTRAECallback; // @synthesize audioEncodedTRAECallback=_audioEncodedTRAECallback;
@property(nonatomic) shared_ptr_0ac66a56 encodedAudioCallback; // @synthesize encodedAudioCallback=_encodedAudioCallback;
@property(nonatomic) shared_ptr_cfb4f353 audioCaptureCallback; // @synthesize audioCaptureCallback=_audioCaptureCallback;
@property(nonatomic) shared_ptr_cfb4f353 audioRawCaptureCallback; // @synthesize audioRawCaptureCallback=_audioRawCaptureCallback;
@property(nonatomic) unsigned long long videoPauseFlag; // @synthesize videoPauseFlag=_videoPauseFlag;
@property(nonatomic) unsigned long long videoEnableFlag; // @synthesize videoEnableFlag=_videoEnableFlag;
@property(nonatomic) unsigned long long audioEnableFlag; // @synthesize audioEnableFlag=_audioEnableFlag;
@property(retain, nonatomic) TXCSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property BOOL isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) BOOL hasProcessedVideoFrame; // @synthesize hasProcessedVideoFrame=_hasProcessedVideoFrame;
@property(retain) TXCRenderView *renderView; // @synthesize renderView=_renderView;
@property BOOL lockOutput; // @synthesize lockOutput=_lockOutput;
@property(retain) TXCVideoPreprocessorEx *videoPreproccessor; // @synthesize videoPreproccessor=_videoPreproccessor;
@property(retain, nonatomic) TXSNALPacket *blackNAL; // @synthesize blackNAL=_blackNAL;
@property(retain, nonatomic) TXSNALPacket *backgroundNAL; // @synthesize backgroundNAL=_backgroundNAL;
@property(retain) TXCVideoEncoder *smallVideoEncoder; // @synthesize smallVideoEncoder=_smallVideoEncoder;
@property(retain) TXCVideoEncoder *videoEncoder; // @synthesize videoEncoder=_videoEncoder;
@property(retain, nonatomic) TXCRenderStats *renderStats; // @synthesize renderStats=_renderStats;
@property(retain) TXCScreenCapturer *screenCapture; // @synthesize screenCapture=_screenCapture;
@property(retain) TXCWindowCapturer *windowCapture; // @synthesize windowCapture=_windowCapture;
@property(retain) TXCCameraCapturer *cameraCapturer; // @synthesize cameraCapturer=_cameraCapturer;
@property(nonatomic) BOOL enableH265Encode; // @synthesize enableH265Encode=_enableH265Encode;
@property(nonatomic) BOOL enableClockOverlay; // @synthesize enableClockOverlay=_enableClockOverlay;
@property(nonatomic) _Bool isAnnexB; // @synthesize isAnnexB=_isAnnexB;
@property(nonatomic) int streamType; // @synthesize streamType=_streamType;
@property(readonly, nonatomic) BOOL isPushing; // @synthesize isPushing=_isPushing;
@property(nonatomic) struct CGSize blackStreamNalSize; // @synthesize blackStreamNalSize=_blackStreamNalSize;
@property(nonatomic) BOOL enableBlackStreamNal; // @synthesize enableBlackStreamNal=_enableBlackStreamNal;
@property(retain, nonatomic) NSImage *pauseImage; // @synthesize pauseImage=_pauseImage;
@property(nonatomic) long long pauseTime; // @synthesize pauseTime=_pauseTime;
@property(nonatomic) long long pauseFPS; // @synthesize pauseFPS=_pauseFPS;
@property(nonatomic) int rcMethod; // @synthesize rcMethod=_rcMethod;
@property(nonatomic) BOOL enableNalCallback; // @synthesize enableNalCallback=_enableNalCallback;
@property(nonatomic) BOOL enableFpsLimit; // @synthesize enableFpsLimit=_enableFpsLimit;
@property(nonatomic) long long outputRotation; // @synthesize outputRotation=_outputRotation;
@property(nonatomic) BOOL enableRPS; // @synthesize enableRPS=_enableRPS;
@property(nonatomic) int maxQP; // @synthesize maxQP=_maxQP;
@property(nonatomic) int minQP; // @synthesize minQP=_minQP;
@property(nonatomic) BOOL enableVideoHWAcceleration; // @synthesize enableVideoHWAcceleration=_enableVideoHWAcceleration;
@property(nonatomic) BOOL autoSampleBufferSize; // @synthesize autoSampleBufferSize=_autoSampleBufferSize;
@property(nonatomic) long long videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) BOOL realtimeMode; // @synthesize realtimeMode=_realtimeMode;
@property(nonatomic) long long videoEncodeGop; // @synthesize videoEncodeGop=_videoEncodeGop;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) int videoFPS; // @synthesize videoFPS=_videoFPS;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
@property(nonatomic) BOOL needCropCustomVideo; // @synthesize needCropCustomVideo=_needCropCustomVideo;
@property(nonatomic) long long customPreprocessFormat; // @synthesize customPreprocessFormat=_customPreprocessFormat;
@property(nonatomic) BOOL preprocessInCustomMode; // @synthesize preprocessInCustomMode=_preprocessInCustomMode;
@property(nonatomic) long long customRenderFormat; // @synthesize customRenderFormat=_customRenderFormat;
@property(nonatomic) struct CGRect watermarkNormalization; // @synthesize watermarkNormalization=_watermarkNormalization;
@property(nonatomic) struct CGPoint watermarkPos; // @synthesize watermarkPos=_watermarkPos;
@property(retain, nonatomic) NSImage *watermark; // @synthesize watermark=_watermark;
@property(nonatomic) BOOL enablePureAudioPush; // @synthesize enablePureAudioPush=_enablePureAudioPush;
@property(nonatomic) BOOL enableGSensor; // @synthesize enableGSensor=_enableGSensor;
@property(nonatomic) BOOL enableZoom; // @synthesize enableZoom=_enableZoom;
@property(nonatomic) BOOL enableFaceDetect; // @synthesize enableFaceDetect=_enableFaceDetect;
@property BOOL enableFrontCamera; // @synthesize enableFrontCamera=_enableFrontCamera;
@property(nonatomic) BOOL enableCameraCapture; // @synthesize enableCameraCapture=_enableCameraCapture;
@property(copy) CDUnknownBlockType volumeTestBlock; // @synthesize volumeTestBlock=_volumeTestBlock;
@property(nonatomic) BOOL enableEosMode; // @synthesize enableEosMode=_enableEosMode;
@property(nonatomic) int audioFormat; // @synthesize audioFormat=_audioFormat;
@property(nonatomic) BOOL enableAudioHWAcceleration; // @synthesize enableAudioHWAcceleration=_enableAudioHWAcceleration;
@property(nonatomic) BOOL enableAudioPreview; // @synthesize enableAudioPreview=_enableAudioPreview;
@property(nonatomic) BOOL enableCustomAudioCapture; // @synthesize enableCustomAudioCapture=_enableCustomAudioCapture;
@property(nonatomic) BOOL enableSoftAGC; // @synthesize enableSoftAGC=_enableSoftAGC;
@property(nonatomic) BOOL enableSoftANS; // @synthesize enableSoftANS=_enableSoftANS;
@property(nonatomic) BOOL enableSoftAEC; // @synthesize enableSoftAEC=_enableSoftAEC;
@property(nonatomic) BOOL enableAEC; // @synthesize enableAEC=_enableAEC;
@property(nonatomic) BOOL enableMute; // @synthesize enableMute=_enableMute;
@property(nonatomic) BOOL enableTouchFocus; // @synthesize enableTouchFocus=_enableTouchFocus;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) long long homeOrientation; // @synthesize homeOrientation=_homeOrientation;
@property(nonatomic) BOOL enableMirror; // @synthesize enableMirror=_enableMirror;
@property(nonatomic) BOOL enableCustomProcess; // @synthesize enableCustomProcess=_enableCustomProcess;
@property(nonatomic) __weak id <TXICustomPreprocessDelegate> customPreprocessDelegate; // @synthesize customPreprocessDelegate=_customPreprocessDelegate;
@property(retain, nonatomic) TXAudioEffectManager *audioEffectManager; // @synthesize audioEffectManager=_audioEffectManager;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property(nonatomic) __weak id <TXICaptureAndEncDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setCameraPreviewOrientation:(id)arg1;
- (BOOL)forceSoftWareVideoEncoder;
- (void)setLocalMirrorMode:(long long)arg1;
- (BOOL)isVideoResolution720P;
- (void)snapshotFrom:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)lockOutput:(BOOL)arg1;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)onEncodeFinished:(unsigned int)arg1 gopIndex:(unsigned long long)arg2 rpsFrameIndex:(unsigned long long)arg3;
- (void)onEncodeNAL:(id)arg1 ErrorCode:(int)arg2;
- (void)onRenderViewPinchScale:(double)arg1;
- (void)onRenderViewFocusAtPoint:(struct CGPoint)arg1;
- (void)onTextureDestoryed;
- (void)onDetectFacePoints:(id)arg1;
- (void)didProcessFrame:(id)arg1;
- (struct __CVBuffer *)createPixelBufferForEncodeFromBGRABuffer:(struct __CVBuffer *)arg1;
- (void)onRenderSampleBuferFrame:(id)arg1;
- (void)onCustomProcessFrame:(id)arg1 didProcessedFrame:(id)arg2 format:(long long)arg3;
- (void)willAddWatermark:(id)arg1;
- (void)onCameraCaptureFrame:(id)arg1;
- (void)onEncodeDataWithTRADHeader:(struct AudioFrame *)arg1;
- (void)onRecordEncData:(struct AudioFrame *)arg1;
- (void)onRecordSpeedPcmData:(struct AudioFrame *)arg1;
- (void)onRecordPcmData:(struct AudioFrame *)arg1;
- (struct CGRect)getCropRect:(struct CGSize)arg1 videoSize:(struct CGSize)arg2 rotation:(long long)arg3;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)processVideoFrame:(id)arg1;
- (void)customSampleBufferLoopFun:(id)arg1;
- (void)enableSmallVideo:(BOOL)arg1 withVideoSize:(struct CGSize)arg2 bitrate:(long long)arg3 fps:(long long)arg4;
- (void)enableNearestRPS:(long long)arg1;
- (void)setVideoQosWithIDRFps:(long long)arg1;
- (void)setAudioQosWithFrameLen:(long long)arg1 encBitrate:(long long)arg2 fetRate:(float)arg3;
- (void)setVideoQosWithFps:(long long)arg1 videoGop:(long long)arg2 bitrate:(long long)arg3 totalBitrate:(int)arg4 videoSize:(struct CGSize)arg5 streamType:(unsigned int)arg6;
- (void)setRPSRefBitmap:(long long)arg1 bitmap:(unsigned short)arg2 recvTimestamp:(long long)arg3;
- (void)restartIDR:(unsigned int)arg1;
- (void)sendVideoFrame:(id)arg1;
- (void)sendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)cancelSendMutedAudioSampleBuffer;
- (void)sendMutedAudioSampleBuffer;
- (void)sendMutedAudioSampleBufferDelay;
- (void)sendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(unsigned long long)arg2;
- (void)sendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)sendCustomPCMData:(char *)arg1 len:(unsigned int)arg2 timestamp:(unsigned long long)arg3 sampleRate:(int)arg4 channels:(int)arg5;
- (void)sendCustomPCMData:(char *)arg1 len:(unsigned int)arg2;
- (void)setCustomAudioMuted:(BOOL)arg1;
- (BOOL)isCameraAutoFocusFaceModeSupported;
- (BOOL)isCameraTorchSupported;
- (BOOL)isCameraFocusPositionInPreviewSupported;
- (double)cameraMaxZoomScale;
- (BOOL)isCameraZoomSupported;
- (void)setZoom:(double)arg1;
- (void)setFocusPosition:(struct CGPoint)arg1;
- (void)resumeRecord;
- (void)pauseRecord;
- (void)resumeEncode;
- (void)pauseEncode;
- (BOOL)_isListeningReplayKit;
- (void)resumeCapture;
- (void)resume;
- (void)pauseCapture;
- (void)pause;
- (void)notifyAppStateInBackground:(BOOL)arg1;
- (void)setVideoMuted:(BOOL)arg1;
- (void)stop;
- (void)stopAudioCaptureTest;
- (void)startAudioCaptureTest;
- (void)stopAudioRecord;
- (void)startAudioRecord;
- (void)setStatusStats;
- (void)startPush;
- (void)removeRenderView:(id)arg1;
- (void)addRenderView:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)_updateTunnelEncoderParams;
- (void)stopVideoTest;
- (void)startVideoTest;
- (void)stopVideoCapture;
- (void)startVideoCapture;
- (void)stopCustomCapture;
- (int)startCustomCapture;
- (void)stopCameraCapture;
- (void)startCamera;
- (int)startCameraCapture;
- (BOOL)isVideoProcessing;
- (void)_startVideoPreprocessor;
@property(readonly, nonatomic) long long videoEncodeRealGop;
@property(readonly, nonatomic) BOOL isBlackStreamAvailable;
@property(retain, nonatomic) AVCaptureDevice *currentCamera;
- (id)beautyManagerWithControl:(id)arg1;
- (BOOL)setEnableFlash:(BOOL)arg1;
- (void)setFrontCamera:(BOOL)arg1;
- (void)stopLocalAudio;
- (void)startLocalAudio;
@property(readonly, nonatomic) unsigned int volumeLevel;
@property(nonatomic) int audioChannels;
@property(nonatomic) int audioSampleRate;
- (void)setRenderMode:(long long)arg1;
- (void)setID:(id)arg1;
- (void)onEncNAL:(id)arg1;
- (void)setCaptureResolution:(long long)arg1;
- (void)sendBlackStreamNAL;
- (void)updateBlackNal;
- (void)sendBackgroundNAL;
- (void)stopBlackStreamNalSend;
- (void)startBlackStreamNalSend;
- (void)stopBackgroundSend;
- (void)startBackgroundSend;
- (void)encodeFrameForSmallVideo:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
- (void)encodeFrame:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
- (void)writeBinClock:(long long)arg1 buff:(char *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5;
- (void)setAudioCallbackDataFormat:(const struct DataCallbackFormat *)arg1;
- (void)setQP:(int)arg1 maxQP:(int)arg2;
- (void)restartEncoder;
- (void)stopEncoder;
- (void)stopSmallVideoEncoder;
- (void)updateBackgroundNal;
- (void)startSmallVideoEncoder;
- (void)startEncoder;
@property(readonly, nonatomic) struct AudioEngine *audioEngine;
- (void)dealloc;
- (id)initWithStreamType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

