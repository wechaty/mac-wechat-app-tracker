//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

#import "BaseWebViewControllerDelegate-Protocol.h"
#import "IMMFeedWebViewHeaderToolViewExt-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class MMFeedWebViewHeaderToolView, MMWebViewController, MMWindow, NSButton, NSImageView, NSMutableDictionary, NSString, NSTextField, NSToolbar;

@interface MMWebViewWindowController : MMWindowController <NSWindowDelegate, BaseWebViewControllerDelegate, IMMFeedWebViewHeaderToolViewExt, NSToolbarDelegate>
{
    BOOL _initialShowing;
    BOOL _isMiniMode;
    BOOL _isFullScreen;
    BOOL _isStick;
    BOOL _isSetFrame;
    BOOL _executedFirstResize;
    NSString *_windowId;
    unsigned long long _type;
    MMWebViewController *_webView;
    NSTextField *_textField;
    NSImageView *_iconImageView;
    NSButton *_stickButton;
    NSMutableDictionary *_report;
    MMFeedWebViewHeaderToolView *_headerToolView;
    NSToolbar *_toolBar;
    double _miniModeProportion;
    double _miniModeMagnification;
    long long _miniSizeChangeType;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL executedFirstResize; // @synthesize executedFirstResize=_executedFirstResize;
@property(nonatomic) long long miniSizeChangeType; // @synthesize miniSizeChangeType=_miniSizeChangeType;
@property(nonatomic) double miniModeMagnification; // @synthesize miniModeMagnification=_miniModeMagnification;
@property(nonatomic) double miniModeProportion; // @synthesize miniModeProportion=_miniModeProportion;
@property(nonatomic) BOOL isSetFrame; // @synthesize isSetFrame=_isSetFrame;
@property(retain, nonatomic) NSToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) MMFeedWebViewHeaderToolView *headerToolView; // @synthesize headerToolView=_headerToolView;
@property(nonatomic) BOOL isStick; // @synthesize isStick=_isStick;
@property(retain, nonatomic) NSMutableDictionary *report; // @synthesize report=_report;
@property(retain, nonatomic) NSButton *stickButton; // @synthesize stickButton=_stickButton;
@property(retain, nonatomic) NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) MMWebViewController *webView; // @synthesize webView=_webView;
@property(nonatomic) BOOL isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) BOOL isMiniMode; // @synthesize isMiniMode=_isMiniMode;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *windowId; // @synthesize windowId=_windowId;
@property(nonatomic) BOOL initialShowing; // @synthesize initialShowing=_initialShowing;
- (void)onCloseWindow:(unsigned long long)arg1;
- (void)onStopSticky:(unsigned long long)arg1;
- (void)onSticky:(unsigned long long)arg1;
- (void)onGoForwardNextWebPage:(unsigned long long)arg1;
- (void)onGoBackLastWebPage:(unsigned long long)arg1;
- (void)onQuitMiniMode:(unsigned long long)arg1;
- (void)onStartMiniMode:(unsigned long long)arg1;
- (void)canGoForwardStatusChange:(BOOL)arg1;
- (void)canGoBackStatusChange:(BOOL)arg1;
- (void)showTitleWithValue:(double)arg1;
- (void)showTitle:(BOOL)arg1;
- (void)updateTitle:(id)arg1;
- (void)exitMiniMode;
- (void)enterMiniModeWithWidth:(int)arg1 andHeight:(int)arg2;
- (void)showMiniButton;
- (void)onPageStateChaged:(id)arg1;
- (BOOL)shouldUpdateWindowTitle;
- (BOOL)shouldUpdateTitle;
- (id)currentTitle;
- (void)manualSetupMainMenuToSupportCopyAndPaste;
- (void)makeStandardSize:(id)arg1;
- (void)makeSmaller:(id)arg1;
- (void)makeLarger:(id)arg1;
- (void)closeWebViewWindowWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)showWebViewWithDataItem:(id)arg1;
- (void)updateWindowFrame:(BOOL)arg1;
- (void)setupEventHandler;
- (void)onWindowWillStartLiveResize;
- (void)saveWindowRectInType:(struct CGRect)arg1;
- (struct CGSize)minSize;
- (struct CGSize)maxSize;
- (void)feedLiveWindowWillEnterFullScreen:(id)arg1;
- (void)feedLiveWindowDidExitFullScreen:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)onApplicationDidResignActive:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (unsigned long long)window:(id)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2;
- (void)setupFeedTitle;
- (void)initTextField;
- (void)setUpToolBar;
- (void)onZoomButtonClick;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1 andType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) MMWindow *window; // @dynamic window;

@end

