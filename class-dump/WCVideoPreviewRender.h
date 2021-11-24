//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCVideoRender.h"

#import "WCVideoPreviewRenderExt-Protocol.h"

@class AVCaptureVideoPreviewLayer, NSImageView, NSString, NSView;

@interface WCVideoPreviewRender : WCVideoRender <WCVideoPreviewRenderExt>
{
    BOOL _m_usingSecondView;
    NSImageView *_m_firstRenderView;
    NSImageView *_m_secondRenderView;
    NSView *_m_containerView;
    AVCaptureVideoPreviewLayer *_m_previewLayer;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL m_usingSecondView; // @synthesize m_usingSecondView=_m_usingSecondView;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *m_previewLayer; // @synthesize m_previewLayer=_m_previewLayer;
@property(retain, nonatomic) NSView *m_containerView; // @synthesize m_containerView=_m_containerView;
@property(retain, nonatomic) NSImageView *m_secondRenderView; // @synthesize m_secondRenderView=_m_secondRenderView;
@property(retain, nonatomic) NSImageView *m_firstRenderView; // @synthesize m_firstRenderView=_m_firstRenderView;
- (void)onGetLastFrameImage:(id)arg1;
- (void)onFlipCameraComplete;
- (void)flipView;
- (id)getRenderView;
- (void)changeFrame:(struct CGRect)arg1;
- (void)updateOrientation;
- (id)initWithFrame:(struct CGRect)arg1 AVCaptureVideoPreviewLayer:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

