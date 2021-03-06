//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LVWindowController.h"

#import "LVScreenCaptureConnectMicNotifyWindowExt-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class LVFloatToolButton, LVLiveUIMgr, LVScreenCaptureCommentWindowController, LVScreenCaptureWindowController, MMImageView, NSScreen, NSString, NSTrackingArea, SVGButton;

@interface LVScreenCaptureTopWindowController : LVWindowController <NSWindowDelegate, LVScreenCaptureConnectMicNotifyWindowExt>
{
    BOOL _isOpenCommentView;
    BOOL _isShowPanel;
    BOOL _isShowOpenOperateWindow;
    SVGButton *_expandButton;
    NSTrackingArea *_trackingArea;
    LVScreenCaptureCommentWindowController *_commentWindowController;
    LVLiveUIMgr *_liveUIMgr;
    MMImageView *_arrowView;
    LVScreenCaptureWindowController *_screenCaptureWindowController;
    NSScreen *_currentScreen;
    LVFloatToolButton *_toolButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LVFloatToolButton *toolButton; // @synthesize toolButton=_toolButton;
@property(retain, nonatomic) NSScreen *currentScreen; // @synthesize currentScreen=_currentScreen;
@property(retain, nonatomic) LVScreenCaptureWindowController *screenCaptureWindowController; // @synthesize screenCaptureWindowController=_screenCaptureWindowController;
@property(retain, nonatomic) MMImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(nonatomic) __weak LVLiveUIMgr *liveUIMgr; // @synthesize liveUIMgr=_liveUIMgr;
@property(nonatomic) __weak LVScreenCaptureCommentWindowController *commentWindowController; // @synthesize commentWindowController=_commentWindowController;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) BOOL isShowOpenOperateWindow; // @synthesize isShowOpenOperateWindow=_isShowOpenOperateWindow;
@property(nonatomic) BOOL isShowPanel; // @synthesize isShowPanel=_isShowPanel;
@property(retain, nonatomic) SVGButton *expandButton; // @synthesize expandButton=_expandButton;
@property(nonatomic) BOOL isOpenCommentView; // @synthesize isOpenCommentView=_isOpenCommentView;
- (void)onClickStopConnectMicFailure;
- (void)onClickToolButton;
- (double)windowWith;
- (double)windowPointX;
- (void)updateWindowLocation:(BOOL)arg1;
- (void)showInteractinPanel;
- (void)openInternalPanelWindow;
- (void)showCommentWindow;
- (id)windowNibName;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)setup;
- (void)windowDidLoad;
- (id)initWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

