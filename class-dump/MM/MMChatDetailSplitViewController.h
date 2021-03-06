//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewController.h"

#import "MMAnimateVoipTipsDelegate-Protocol.h"
#import "MMChatDetailSplitViewPositionInterface-Protocol.h"
#import "MMChatMemberListViewDelegate-Protocol.h"
#import "MMMutiplySelectAnimationDelegate-Protocol.h"
#import "NSSplitViewDelegate-Protocol.h"

@class MMChatDetailSplitView, MMChatMemberListViewController, MMChatMessageViewController, MMComposeInputViewController, MMDraggingOverlayView, NSString, NSTextField, NSViewController, WCContactData;
@protocol MMChatsViewControllerDelegate, MMComposeTextViewDelegate;

@interface MMChatDetailSplitViewController : MMViewController <NSSplitViewDelegate, MMChatDetailSplitViewPositionInterface, MMChatMemberListViewDelegate, MMAnimateVoipTipsDelegate, MMMutiplySelectAnimationDelegate>
{
    BOOL _isChatDetailSplitViewAnimating;
    BOOL _shouldSetInitialPosition;
    BOOL _brandMenuMode;
    MMChatDetailSplitView *_splitView;
    MMChatMessageViewController *_chatMessageViewController;
    MMComposeInputViewController *_composeInputViewController;
    id <MMComposeTextViewDelegate> _composeTextViewDelegate;
    id <MMChatsViewControllerDelegate> _delegate;
    WCContactData *_currnetChatContact;
    NSViewController *_upperViewController;
    NSViewController *_underViewController;
    MMViewController *_placeHolderViewController;
    MMChatMemberListViewController *_chatMemberListViewController;
    MMDraggingOverlayView *_draggingOverlayView;
    NSTextField *_voipTipsLabel;
    id _mouseDraggedEvent;
}

+ (double)getComposeInputViewHeight;
+ (void)resetAppStartStatus;
+ (BOOL)isAppStartStatus;
- (void).cxx_destruct;
@property(nonatomic) BOOL brandMenuMode; // @synthesize brandMenuMode=_brandMenuMode;
@property(nonatomic) BOOL shouldSetInitialPosition; // @synthesize shouldSetInitialPosition=_shouldSetInitialPosition;
@property(retain, nonatomic) id mouseDraggedEvent; // @synthesize mouseDraggedEvent=_mouseDraggedEvent;
@property(retain, nonatomic) NSTextField *voipTipsLabel; // @synthesize voipTipsLabel=_voipTipsLabel;
@property(retain, nonatomic) MMDraggingOverlayView *draggingOverlayView; // @synthesize draggingOverlayView=_draggingOverlayView;
@property(nonatomic) BOOL isChatDetailSplitViewAnimating; // @synthesize isChatDetailSplitViewAnimating=_isChatDetailSplitViewAnimating;
@property(retain, nonatomic) MMChatMemberListViewController *chatMemberListViewController; // @synthesize chatMemberListViewController=_chatMemberListViewController;
@property(nonatomic) __weak MMViewController *placeHolderViewController; // @synthesize placeHolderViewController=_placeHolderViewController;
@property(nonatomic) __weak NSViewController *underViewController; // @synthesize underViewController=_underViewController;
@property(nonatomic) __weak NSViewController *upperViewController; // @synthesize upperViewController=_upperViewController;
@property(retain, nonatomic) WCContactData *currnetChatContact; // @synthesize currnetChatContact=_currnetChatContact;
@property(nonatomic) __weak id <MMChatsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMComposeTextViewDelegate> composeTextViewDelegate; // @synthesize composeTextViewDelegate=_composeTextViewDelegate;
@property(retain, nonatomic) MMComposeInputViewController *composeInputViewController; // @synthesize composeInputViewController=_composeInputViewController;
@property(retain, nonatomic) MMChatMessageViewController *chatMessageViewController; // @synthesize chatMessageViewController=_chatMessageViewController;
@property(nonatomic) __weak MMChatDetailSplitView *splitView; // @synthesize splitView=_splitView;
- (void)makeComposeInputResponder;
- (void)windowDidBecomeKeyAction:(id)arg1;
- (void)windowDidResignKeyAction:(id)arg1;
- (void)clearAllSubviews:(id)arg1;
- (void)mutiplySelectFavAnimation;
- (void)hideChatMemberListViewWithAnimated:(BOOL)arg1;
- (void)showChatMemberListView;
- (BOOL)isInsideChatMemberListView:(struct CGPoint)arg1;
- (BOOL)isChatMemberListViewShown;
- (void)getNewSubviewsRects:(struct CGRect *)arg1 withIndexes:(id)arg2 andPositions:(id)arg3;
- (BOOL)setPosition:(double)arg1 ofDividerAtIndex:(long long)arg2 animated:(BOOL)arg3 completitionBlock:(CDUnknownBlockType)arg4;
- (BOOL)setPositions:(id)arg1 ofDividersAtIndexes:(id)arg2 animated:(BOOL)arg3 completitionBlock:(CDUnknownBlockType)arg4;
- (void)setPosition:(double)arg1 ofDividerAtIndex:(long long)arg2;
- (void)setBrandModeFlag:(BOOL)arg1;
- (double)getChatDetailSplitViewDividerThickness;
- (struct CGSize)getChatDetailSplitViewFrameSize;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (BOOL)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)showAnimateVoipTipsWording:(id)arg1;
- (void)showAudioStartToPlayTipWording:(id)arg1;
- (void)setUpperViewWithController:(id)arg1;
- (void)setUnderViewWithController:(id)arg1;
- (void)updateContact:(id)arg1;
- (void)adjustLayoutsWithSplitView:(id)arg1 scene:(int)arg2;
- (void)setHasSelectedChat:(BOOL)arg1;
- (void)setupVoipTipsLabel;
- (void)setupMouseEventOfChatInfoView;
- (void)registerDraggingTypes;
- (void)setupDraggingOverlayView;
- (void)onWABoardDragEnd;
- (void)onWABoardDragBegin;
- (void)logoutButtonClick:(id)arg1;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewChangedEffectiveAppearance;
- (void)updateComposeTextViewDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

