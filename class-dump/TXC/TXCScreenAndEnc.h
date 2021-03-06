//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCModule.h"

#import "TXIMediaCapturerDelegate-Protocol.h"
#import "TXINotifyDelegate-Protocol.h"
#import "TXIRenderViewDelegate-Protocol.h"
#import "TXIVideoEncoderDelegate-Protocol.h"
#import "TXIVideoPreprocessorDelegateEx-Protocol.h"

@class NSImage, NSMutableSet, NSObject, NSString, NSTimer, TXCBorderWindow, TXCRenderView, TXCScreenCapturerBase, TXCSnapshotManager, TXCVideoEncoder, TXCVideoPreprocessorEx;
@protocol OS_dispatch_queue, ScreenCaptureDelegate, TXINotifyDelegate;

@interface TXCScreenAndEnc : TXCModule <TXIMediaCapturerDelegate, TXIVideoPreprocessorDelegateEx, TXIVideoEncoderDelegate, TXIRenderViewDelegate, TXINotifyDelegate>
{
    BOOL _isPaused;
    BOOL _enableBFrame;
    unsigned long long _lastEncodedFrameIndex;
    int _idrFps;
    unsigned long long _lastEncodedGopIndex;
    BOOL _capturesCursor;
    BOOL _capturesMouseClicks;
    BOOL _highlight;
    BOOL _realtimeMode;
    BOOL _enableVideoHWAcceleration;
    BOOL _enableRPS;
    _Bool _isAnnexB;
    BOOL _lockOutput;
    BOOL _isRunning;
    BOOL _isStoped;
    BOOL _isPushing;
    BOOL _isPausingOnWindowFrameChange;
    int _videoFPS;
    int _rcMethod;
    int _streamType;
    int _minQP;
    int _maxQP;
    id <ScreenCaptureDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
    long long _videoInputSource;
    long long _displayID;
    NSImage *_watermark;
    long long _videoEncodeGop;
    long long _videoBitrate;
    NSObject<OS_dispatch_queue> *_captureQueue;
    TXCScreenCapturerBase *_capturer;
    NSTimer *_screenTimer;
    NSMutableSet *_excludedWindowIds;
    NSMutableSet *_includedWindowIds;
    TXCRenderView *_renderView;
    long long _renderMode;
    long long _customRenderFormat;
    TXCVideoEncoder *_videoEncoder;
    TXCVideoPreprocessorEx *_videoPreproccessor;
    TXCBorderWindow *_borderWindow;
    long long _screenCapturerType;
    TXCSnapshotManager *_snapshotManager;
    struct CGSize _videoSize;
    struct CGPoint _watermarkPos;
    struct CGRect _cropRect;
    struct CGRect _watermarkNormalization;
}

- (void).cxx_destruct;
@property BOOL isPausingOnWindowFrameChange; // @synthesize isPausingOnWindowFrameChange=_isPausingOnWindowFrameChange;
@property(retain, nonatomic) TXCSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property(nonatomic) int maxQP; // @synthesize maxQP=_maxQP;
@property(nonatomic) int minQP; // @synthesize minQP=_minQP;
@property(nonatomic) struct CGPoint watermarkPos; // @synthesize watermarkPos=_watermarkPos;
@property(nonatomic) long long screenCapturerType; // @synthesize screenCapturerType=_screenCapturerType;
@property(nonatomic) BOOL isPushing; // @synthesize isPushing=_isPushing;
@property(nonatomic) BOOL isStoped; // @synthesize isStoped=_isStoped;
@property(nonatomic) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) TXCBorderWindow *borderWindow; // @synthesize borderWindow=_borderWindow;
@property BOOL lockOutput; // @synthesize lockOutput=_lockOutput;
@property(retain) TXCVideoPreprocessorEx *videoPreproccessor; // @synthesize videoPreproccessor=_videoPreproccessor;
@property(retain) TXCVideoEncoder *videoEncoder; // @synthesize videoEncoder=_videoEncoder;
@property(nonatomic) long long customRenderFormat; // @synthesize customRenderFormat=_customRenderFormat;
@property(nonatomic) long long renderMode; // @synthesize renderMode=_renderMode;
@property(retain) TXCRenderView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) NSMutableSet *includedWindowIds; // @synthesize includedWindowIds=_includedWindowIds;
@property(retain, nonatomic) NSMutableSet *excludedWindowIds; // @synthesize excludedWindowIds=_excludedWindowIds;
@property(retain, nonatomic) NSTimer *screenTimer; // @synthesize screenTimer=_screenTimer;
@property(retain) TXCScreenCapturerBase *capturer; // @synthesize capturer=_capturer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *captureQueue; // @synthesize captureQueue=_captureQueue;
@property(nonatomic) _Bool isAnnexB; // @synthesize isAnnexB=_isAnnexB;
@property(nonatomic) int streamType; // @synthesize streamType=_streamType;
@property(nonatomic) int rcMethod; // @synthesize rcMethod=_rcMethod;
@property(nonatomic) BOOL enableRPS; // @synthesize enableRPS=_enableRPS;
@property(nonatomic) BOOL enableVideoHWAcceleration; // @synthesize enableVideoHWAcceleration=_enableVideoHWAcceleration;
@property(nonatomic) long long videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) BOOL realtimeMode; // @synthesize realtimeMode=_realtimeMode;
@property(nonatomic) long long videoEncodeGop; // @synthesize videoEncodeGop=_videoEncodeGop;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) int videoFPS; // @synthesize videoFPS=_videoFPS;
@property(nonatomic) struct CGRect watermarkNormalization; // @synthesize watermarkNormalization=_watermarkNormalization;
@property(retain, nonatomic) NSImage *watermark; // @synthesize watermark=_watermark;
@property(nonatomic) BOOL highlight; // @synthesize highlight=_highlight;
@property(nonatomic) BOOL capturesMouseClicks; // @synthesize capturesMouseClicks=_capturesMouseClicks;
@property(nonatomic) BOOL capturesCursor; // @synthesize capturesCursor=_capturesCursor;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) long long displayID; // @synthesize displayID=_displayID;
@property(nonatomic) long long videoInputSource; // @synthesize videoInputSource=_videoInputSource;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property(nonatomic) __weak id <ScreenCaptureDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)forceSoftWareVideoEncoder;
- (BOOL)isVideoResolution720P;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)onEncodeFinished:(unsigned int)arg1 gopIndex:(unsigned long long)arg2 rpsFrameIndex:(unsigned long long)arg3;
- (void)onEncodeNAL:(id)arg1 ErrorCode:(int)arg2;
- (void)onRenderSampleBuferFrame:(id)arg1;
- (void)didProcessFrame:(id)arg1;
- (void)willAddWatermark:(id)arg1;
- (id)appendMouseCursor;
- (void)hideBorderWindow;
- (void)showBorderWindow;
- (struct CGRect)getCroppedShareFrame:(struct CGRect)arg1;
- (struct CGRect)getWindowShareFrame;
- (struct CGRect)getScreenShareFrame;
- (void)onScreenTimer;
- (id)sharedWindowInfo;
- (void)addWartMark;
- (void)capturerDidStopCapture:(id)arg1;
- (void)capturerDidResumeCapture:(id)arg1;
- (void)capturerDidPauseCapture:(id)arg1;
- (void)capturer:(id)arg1 didCaptureFrame:(id)arg2;
- (void)onCameraCaptureFrame:(id)arg1;
- (void)_resumeCapture:(int)arg1;
- (void)_pauseCapture:(int)arg1;
- (void)_stop;
- (int)_start;
- (void)_stopVideoCapture:(int)arg1;
- (void)_startVideoCapture;
- (void)_startVideoPreprocessor;
- (void)applyScreenCaptureSettings;
- (id)createNewCapturer;
- (void)switchToNewCapturer;
- (void)updateScreenCapturerType;
- (void)onEncNAL:(id)arg1;
- (void)encodeFrame:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
- (void)restartEncoder;
- (void)stopEncoder;
- (void)startEncoder;
- (void)snapshotFrom:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)lockOutput:(BOOL)arg1;
- (void)setRenderContainerView:(id)arg1;
- (void)enableNearestRPS:(long long)arg1;
- (void)setVideoQosWithIDRFps:(long long)arg1;
- (void)setVideoQosWithFps:(long long)arg1 bitrate:(long long)arg2 totalBitrate:(int)arg3 videoSize:(struct CGSize)arg4 streamType:(unsigned int)arg5;
- (void)setRPSRefBitmap:(long long)arg1 bitmap:(unsigned short)arg2 recvTimestamp:(long long)arg3;
- (void)restartIDR;
- (void)removeAllIncludedShareWindows;
- (void)removeIncludedShareWindow:(long long)arg1;
- (void)addIncludedShareWindow:(long long)arg1;
- (void)removeAllExcludedWindows;
- (void)removeExcludedWindow:(long long)arg1;
- (void)addExcludedWindow:(long long)arg1;
- (void)stopAll;
- (void)resumeCapture;
- (void)pauseCapture;
- (void)stopVideoCapture;
- (void)startVideoCapture;
- (void)setID:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

