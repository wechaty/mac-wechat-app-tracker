//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "LVConnectMgrExt-Protocol.h"
#import "LVConnectMicExt-Protocol.h"
#import "LVTrtcMgrExt-Protocol.h"

@class LVConnectMicNotifyConnectingFloatView, LVConnectMicNotifyFloatView, LVConnectVideoMicFloatView, LVLiveApplyConnectMicAudience, LVLiveTask, NSArray, NSString;
@protocol LVInteractionConnectMicNotifyViewDelegate;

@interface LVInteractionConnectMicNotifyViewController : NSViewController <LVConnectMgrExt, LVConnectMicExt, LVTrtcMgrExt>
{
    unsigned int _connectState;
    LVLiveApplyConnectMicAudience *_currentConnectMicAudience;
    double _currentViewWidth;
    double _currentViewHeight;
    id <LVInteractionConnectMicNotifyViewDelegate> _delegate;
    LVConnectVideoMicFloatView *_videoMicFloatView;
    NSArray *_applyConnectAudienceList;
    LVLiveTask *_task;
    LVConnectMicNotifyFloatView *_notifyFloatView;
    NSString *_sdkUserId;
    LVConnectMicNotifyConnectingFloatView *_connectingFloatView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LVConnectMicNotifyConnectingFloatView *connectingFloatView; // @synthesize connectingFloatView=_connectingFloatView;
@property(retain, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId=_sdkUserId;
@property(retain, nonatomic) LVConnectMicNotifyFloatView *notifyFloatView; // @synthesize notifyFloatView=_notifyFloatView;
@property(retain, nonatomic) LVLiveTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSArray *applyConnectAudienceList; // @synthesize applyConnectAudienceList=_applyConnectAudienceList;
@property(nonatomic) unsigned int connectState; // @synthesize connectState=_connectState;
@property(retain, nonatomic) LVConnectVideoMicFloatView *videoMicFloatView; // @synthesize videoMicFloatView=_videoMicFloatView;
@property(nonatomic) __weak id <LVInteractionConnectMicNotifyViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double currentViewHeight; // @synthesize currentViewHeight=_currentViewHeight;
@property(readonly, nonatomic) double currentViewWidth; // @synthesize currentViewWidth=_currentViewWidth;
@property(retain, nonatomic) LVLiveApplyConnectMicAudience *currentConnectMicAudience; // @synthesize currentConnectMicAudience=_currentConnectMicAudience;
- (void)onLiveTaskStopLocalConnectMic:(unsigned long long)arg1;
- (void)onLiveTaskStopLocalVideoConnectMic:(unsigned long long)arg1;
- (void)onLiveStopConnectVideoMic:(id)arg1;
- (void)onLiveUnConnectedMic:(id)arg1;
- (void)onLiveSwitchConnectVideoMic:(id)arg1;
- (void)onLiveConnectedMic:(id)arg1;
- (void)onGetCloseLiveMicWithAudienceList:(id)arg1;
- (void)onCloseApplyLiveMicResult:(BOOL)arg1;
- (void)onGetEnableApplyLiveMic:(BOOL)arg1;
- (BOOL)isShowConnectMicView;
- (BOOL)isShowApplyMicView;
- (BOOL)isViewShow;
- (BOOL)isConnectMicNotSelf;
- (BOOL)isShowVideo;
- (void)updateConnectVideoImageView:(id)arg1;
- (void)updateWithConnectVideoAudienceView;
- (void)showVideoConnectMicView:(id)arg1;
- (void)showConnectMicView:(id)arg1;
- (void)showApplyMicView:(id)arg1;
- (void)doCloseView;
- (void)showConnectingMicView;
- (void)updateViewLayout:(double)arg1 height:(double)arg2;
- (void)showVideoView;
- (void)showNotifyMicView;
- (void)dealloc;
- (void)onClickStopConnectMicButton;
- (void)onClickCheckConnnectMicListButton;
- (void)onClickCloseButton;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

