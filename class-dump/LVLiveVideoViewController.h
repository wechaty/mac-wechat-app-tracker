//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LVViewController.h"

#import "LLVLiveBottomToolViewDelegate-Protocol.h"
#import "LVLiveVideoViewDelegate-Protocol.h"
#import "LVMainWindowExt-Protocol.h"
#import "LVTrtcMgrExt-Protocol.h"

@class LVLiveBottomToolViewController, LVLiveVideoView, MMTimer, NSString;
@protocol LVLiveVideoViewControllerDelegate;

@interface LVLiveVideoViewController : LVViewController <LLVLiveBottomToolViewDelegate, LVLiveVideoViewDelegate, LVTrtcMgrExt, LVMainWindowExt>
{
    BOOL _isShowLoading;
    BOOL _isTransienceStopLoading;
    int _transienceStopLoadingCount;
    LVLiveVideoView *_videoView;
    id <LVLiveVideoViewControllerDelegate> _delegate;
    LVLiveBottomToolViewController *_bottomToolViewController;
    long long _badNetWorkCount;
    MMTimer *_freezeExprieTimer;
    MMTimer *_loadingExprieTimer;
}

- (void).cxx_destruct;
@property(nonatomic) int transienceStopLoadingCount; // @synthesize transienceStopLoadingCount=_transienceStopLoadingCount;
@property(nonatomic) BOOL isTransienceStopLoading; // @synthesize isTransienceStopLoading=_isTransienceStopLoading;
@property(retain, nonatomic) MMTimer *loadingExprieTimer; // @synthesize loadingExprieTimer=_loadingExprieTimer;
@property(retain, nonatomic) MMTimer *freezeExprieTimer; // @synthesize freezeExprieTimer=_freezeExprieTimer;
@property(nonatomic) long long badNetWorkCount; // @synthesize badNetWorkCount=_badNetWorkCount;
@property(nonatomic) BOOL isShowLoading; // @synthesize isShowLoading=_isShowLoading;
@property(retain, nonatomic) LVLiveBottomToolViewController *bottomToolViewController; // @synthesize bottomToolViewController=_bottomToolViewController;
@property(nonatomic) __weak id <LVLiveVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LVLiveVideoView *videoView; // @synthesize videoView=_videoView;
- (void)recoverLoading;
- (void)transienceStopLoading;
- (void)onMainWindowDidExitFullScreen;
- (void)onMainWindowWillExitFullScreen;
- (void)onMainWindowDidEnterFullScreen;
- (void)onMainWindowWillEnterFullScreen;
- (void)onLiveTask:(unsigned long long)arg1 updateNetWorkQuality:(id)arg2;
- (void)videoFrameFreezeOver;
- (void)onLiveTaskVideoFrameFreeze:(unsigned long long)arg1 time:(long long)arg2;
- (void)onClickMaxMinzeButton:(BOOL)arg1;
- (void)onClickVolumeSilder;
- (void)onStopLoading;
- (void)videoLoadingTimeout;
- (void)stopLoadingTimer;
- (void)stopFreezeTimer;
- (void)onShowLoading;
- (BOOL)isCanShowBottomToll;
- (void)mouseDown:(id)arg1;
- (void)onMouseMoveInBottom;
- (void)onMouseExitBottom;
- (void)onMouseEnterBottom;
- (BOOL)isShowBottomTool;
- (void)hiddenBottomToolWithAnimator;
- (void)showBottomToolWithAnimator;
- (void)initBottomToolViewController;
- (void)loadView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

