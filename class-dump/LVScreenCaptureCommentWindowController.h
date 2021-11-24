//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LVWindowController.h"

#import "LVCommentViewControllerDelegete-Protocol.h"
#import "LVLiveLikeDataMgrExt-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class CAGradientLayer, LVAvatarImageTextRowView, LVCommentViewController, LVLiveLikeAnimationUtil, LVLiveLikeDataMgr, MMImageView, NSScreen, NSString, NSView, NSVisualEffectView, SVGButton;

@interface LVScreenCaptureCommentWindowController : LVWindowController <NSWindowDelegate, LVLiveLikeDataMgrExt, LVCommentViewControllerDelegete>
{
    BOOL _clickExpand;
    NSScreen *_currentScreen;
    SVGButton *_likeButton;
    LVLiveLikeAnimationUtil *_animationUtil;
    LVLiveLikeDataMgr *_liveLikeDataMgr;
    CAGradientLayer *_commentTabViewTopBackLayer;
    NSView *_commentBgView;
    LVAvatarImageTextRowView *_bottomView;
    MMImageView *_foldButton;
    LVCommentViewController *_commentViewController;
    long long _bottomMsgCount;
    NSVisualEffectView *_commentBgEffectView;
    NSVisualEffectView *_bottomViewEffectView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSVisualEffectView *bottomViewEffectView; // @synthesize bottomViewEffectView=_bottomViewEffectView;
@property(retain, nonatomic) NSVisualEffectView *commentBgEffectView; // @synthesize commentBgEffectView=_commentBgEffectView;
@property(nonatomic) long long bottomMsgCount; // @synthesize bottomMsgCount=_bottomMsgCount;
@property(nonatomic) BOOL clickExpand; // @synthesize clickExpand=_clickExpand;
@property(retain, nonatomic) LVCommentViewController *commentViewController; // @synthesize commentViewController=_commentViewController;
@property(retain, nonatomic) MMImageView *foldButton; // @synthesize foldButton=_foldButton;
@property(retain, nonatomic) LVAvatarImageTextRowView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) NSView *commentBgView; // @synthesize commentBgView=_commentBgView;
@property(retain, nonatomic) CAGradientLayer *commentTabViewTopBackLayer; // @synthesize commentTabViewTopBackLayer=_commentTabViewTopBackLayer;
@property(retain, nonatomic) LVLiveLikeDataMgr *liveLikeDataMgr; // @synthesize liveLikeDataMgr=_liveLikeDataMgr;
@property(retain, nonatomic) LVLiveLikeAnimationUtil *animationUtil; // @synthesize animationUtil=_animationUtil;
@property(retain, nonatomic) SVGButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) NSScreen *currentScreen; // @synthesize currentScreen=_currentScreen;
- (void)onMessagesUpdate;
- (void)onStartLiveLikeAnimation:(unsigned long long)arg1;
- (void)onClickThumbsUp;
- (void)initSVGButton:(id)arg1 andImageName:(id)arg2 andAlternateImageName:(id)arg3 andButtonType:(unsigned long long)arg4;
- (void)onClickExpandButton;
- (void)updateBottomView;
- (void)showBottomFoldView;
- (void)onClickFoldButton;
- (void)mouseExited:(id)arg1;
- (void)addBottomViewEffectView;
- (void)addCommentBgEffectView;
- (void)mouseEntered:(id)arg1;
- (void)hideTopGradientLayer;
- (void)showTopGradientLayer;
- (void)handleAppFontSize;
- (void)initLikeButton;
- (BOOL)windowShouldClose:(id)arg1;
- (void)initOperateView;
- (void)scrollToBottom;
- (void)initCommentView;
- (void)initWindow;
- (void)setup;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (id)windowNibName;
- (void)windowDidLoad;
- (id)initWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

