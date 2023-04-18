//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class AVSampleBufferDisplayLayer, CALayer, MMTimer, NSRecursiveLock, NSTextField, WCContactData;

@interface MMVoipRenderView : NSView
{
    BOOL _isSmallVideoShouldMove;
    BOOL _shouldAcceptMouseDownToSwapLayer;
    BOOL _canMoveWindow;
    int _videoStatus;
    float _degree;
    unsigned int _m_FpsCount;
    unsigned int _m_decode;
    CALayer *_previewLayer;
    AVSampleBufferDisplayLayer *_oppositeDisplayLayer;
    CALayer *_movableLayer;
    WCContactData *_oContact;
    NSRecursiveLock *_localBufferLock;
    CALayer *_avatarLayer;
    NSTextField *_m_videoFpsLabel;
    NSTextField *_m_videoSizeLabel;
    MMTimer *_m_fpsTimer;
    struct CGPoint _mouseToMovableLayerPoint;
    struct CGSize _m_videoSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_decode; // @synthesize m_decode=_m_decode;
@property(nonatomic) unsigned int m_FpsCount; // @synthesize m_FpsCount=_m_FpsCount;
@property(nonatomic) struct CGSize m_videoSize; // @synthesize m_videoSize=_m_videoSize;
@property(retain, nonatomic) MMTimer *m_fpsTimer; // @synthesize m_fpsTimer=_m_fpsTimer;
@property(retain, nonatomic) NSTextField *m_videoSizeLabel; // @synthesize m_videoSizeLabel=_m_videoSizeLabel;
@property(retain, nonatomic) NSTextField *m_videoFpsLabel; // @synthesize m_videoFpsLabel=_m_videoFpsLabel;
@property(retain, nonatomic) CALayer *avatarLayer; // @synthesize avatarLayer=_avatarLayer;
@property(nonatomic) BOOL canMoveWindow; // @synthesize canMoveWindow=_canMoveWindow;
@property(retain, nonatomic) NSRecursiveLock *localBufferLock; // @synthesize localBufferLock=_localBufferLock;
@property(nonatomic) float degree; // @synthesize degree=_degree;
@property(retain, nonatomic) WCContactData *oContact; // @synthesize oContact=_oContact;
@property(nonatomic) int videoStatus; // @synthesize videoStatus=_videoStatus;
@property(nonatomic) BOOL shouldAcceptMouseDownToSwapLayer; // @synthesize shouldAcceptMouseDownToSwapLayer=_shouldAcceptMouseDownToSwapLayer;
@property(nonatomic) struct CGPoint mouseToMovableLayerPoint; // @synthesize mouseToMovableLayerPoint=_mouseToMovableLayerPoint;
@property(nonatomic) BOOL isSmallVideoShouldMove; // @synthesize isSmallVideoShouldMove=_isSmallVideoShouldMove;
@property(retain, nonatomic) CALayer *movableLayer; // @synthesize movableLayer=_movableLayer;
@property(retain, nonatomic) AVSampleBufferDisplayLayer *oppositeDisplayLayer; // @synthesize oppositeDisplayLayer=_oppositeDisplayLayer;
@property(retain, nonatomic) CALayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void)updateRenderDescInfo:(struct CGSize)arg1 decode:(int)arg2;
- (void)fpsTimerCheck;
- (void)flush;
- (BOOL)isMinimizedMode;
- (void)reloadAvatarLayer;
- (void)fadeOutLayer:(id)arg1 removedOnCompletion:(BOOL)arg2;
- (void)displayLastVideoCapture;
- (void)loadContactAvatarImage;
- (void)loadSelfContactAvatarImage;
- (void)relayoutSubLayers;
- (void)adsorbedSmallVideoToEdge;
- (void)bringSublayerToFront:(id)arg1;
- (void)swapPreviewRenderLayerAndOppositeRenderLayer;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)renderTexture:(struct __CVBuffer *)arg1;
- (void)recvPixelFrameBuffer:(struct __CVBuffer *)arg1 degree:(float)arg2 frameWidth:(unsigned int)arg3 frameHeight:(unsigned int)arg4;
- (void)recvImageSourceData:(char *)arg1 degree:(float)arg2 frameWidth:(unsigned int)arg3 frameHeight:(unsigned int)arg4;

@end

