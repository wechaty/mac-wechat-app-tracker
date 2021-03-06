//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "LVChooseSourceWindowControllerDelegate-Protocol.h"
#import "LVInteractionAnchorConnectViewControllerExt-Protocol.h"
#import "LVInteractionAudienceConnectViewControllerDelegate-Protocol.h"
#import "LVInteractionOperateViewControllerDelegate-Protocol.h"
#import "LVLiveTaskExt-Protocol.h"
#import "NSSplitViewDelegate-Protocol.h"

@class LVInteractionInformationViewController, LVInteractionOperateViewController, LVLiveTask, LVSplitView, NSString, NSView, SVGImageView;
@protocol LVInteractionViewControllerDelegate;

@interface LVInteractionViewController : NSViewController <LVInteractionOperateViewControllerDelegate, NSSplitViewDelegate, LVChooseSourceWindowControllerDelegate, LVInteractionAudienceConnectViewControllerDelegate, LVLiveTaskExt, LVInteractionAnchorConnectViewControllerExt>
{
    BOOL _currentConnectViewIsHidden;
    BOOL _currentInformationViewIsHidden;
    id <LVInteractionViewControllerDelegate> _delegate;
    LVLiveTask *_task;
    LVInteractionOperateViewController *_operateViewController;
    NSViewController *_connectViewController;
    LVInteractionInformationViewController *_informationViewController;
    LVSplitView *_splitView;
    NSView *_backgroundView;
    SVGImageView *_backgroundIcon;
    unsigned long long _anchorConenctViewStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long anchorConenctViewStyle; // @synthesize anchorConenctViewStyle=_anchorConenctViewStyle;
@property(retain, nonatomic) SVGImageView *backgroundIcon; // @synthesize backgroundIcon=_backgroundIcon;
@property(retain, nonatomic) NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) LVSplitView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) LVInteractionInformationViewController *informationViewController; // @synthesize informationViewController=_informationViewController;
@property(retain, nonatomic) NSViewController *connectViewController; // @synthesize connectViewController=_connectViewController;
@property(retain, nonatomic) LVInteractionOperateViewController *operateViewController; // @synthesize operateViewController=_operateViewController;
@property(nonatomic) BOOL currentInformationViewIsHidden; // @synthesize currentInformationViewIsHidden=_currentInformationViewIsHidden;
@property(nonatomic) BOOL currentConnectViewIsHidden; // @synthesize currentConnectViewIsHidden=_currentConnectViewIsHidden;
@property(retain, nonatomic) LVLiveTask *task; // @synthesize task=_task;
@property(nonatomic) __weak id <LVInteractionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCloseScreen;
- (void)onSelectScreen:(id)arg1;
- (void)onCloseMic;
- (void)onSelectMic:(id)arg1;
- (void)onCloseCamera;
- (void)onSelectCamera:(id)arg1;
- (void)onApplyConnectMicListCountChange:(unsigned long long)arg1;
- (void)reloadAudienceConnectView;
- (void)onTaskStatusChange:(unsigned long long)arg1 status:(unsigned long long)arg2;
- (void)doClickCloseLive;
- (void)onClickCloseButton;
- (void)onChangeConnectViewStatus;
- (void)onChangeInformationViewStatus;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)refreshCommentViewController;
- (id)operateView;
- (BOOL)closeCurrentConnectedMic;
- (void)hideInformationView;
- (void)showInformationView;
- (void)hideConnectMicView;
- (void)showConnectMicView;
- (void)checkAndUpdateConnectViewAndInfomationView;
- (void)updateConnectViewAndInformationView;
- (void)cleanAndRemoveChildView;
- (void)initViews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

