//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "IContactMgrExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "IMessageServiceVideoReTransferExt-Protocol.h"
#import "MMComposeInputViewDelegate-Protocol.h"
#import "MMComposeRichAttachmentTextViewDelegate-Protocol.h"
#import "MMComposeTextChangeDelegate-Protocol.h"
#import "MMComposeTextEmotionProtDelegate-Protocol.h"
#import "MMComposeTextViewReferDelegate-Protocol.h"
#import "MMMultiSelectViewDelegate-Protocol.h"
#import "MMNetExt-Protocol.h"
#import "MMReferTextAttachmentViewDelegate-Protocol.h"
#import "MMViewerWindowDelegate-Protocol.h"
#import "MessageBatchExportMgrExt-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"

@class FFProcessReqsvrLogicZZ, MMBatchExportWindow, MMBrandMenuPlugin, MMComposeInputScrollView, MMComposeTextStorage, MMComposeTextView, MMEmotionPromptWindowController, MMIgnoreEventView, MMMultiSelectView, MMNoGroupMumberTipView, MMSolitaireWindowController, MMWeTypeGuideView, MessageData, NSClipView, NSMenu, NSMutableDictionary, NSString, NSView, SVGButton, WCContactData;
@protocol MMChatDetailSplitViewPositionInterface><MMChatMemberListViewDelegate><MMAnimateVoipTipsDelegate, MMComposeTextViewDelegate, MMMutipleSelectionDelegate;

@interface MMComposeInputViewController : NSViewController <MMNetExt, IContactMgrExt, MMComposeInputViewDelegate, MMComposeRichAttachmentTextViewDelegate, NSTextViewDelegate, MessageBatchExportMgrExt, MMViewerWindowDelegate, IMessageServiceVideoReTransferExt, MMComposeTextEmotionProtDelegate, MMComposeTextViewReferDelegate, IMessageExt, MMReferTextAttachmentViewDelegate, MMComposeTextChangeDelegate, MMMultiSelectViewDelegate, NSMenuDelegate>
{
    BOOL isNoNetwork;
    id <MMComposeTextViewDelegate> _composeTextViewDelegate;
    WCContactData *_currnetChatContact;
    FFProcessReqsvrLogicZZ *_messageSendLogic;
    CDUnknownBlockType _viewDidLoadBlock;
    id <MMChatDetailSplitViewPositionInterface><MMChatMemberListViewDelegate><MMAnimateVoipTipsDelegate> _delegate;
    id <MMMutipleSelectionDelegate> _multiSelectDelegate;
    SVGButton *_stickerButton;
    SVGButton *_attachmentButton;
    SVGButton *_screenShotButton;
    SVGButton *_screenShotMoreOptionButton;
    SVGButton *_videoButton;
    SVGButton *_voiceButton;
    SVGButton *_chatManagerButton;
    SVGButton *_openBrandMenuButton;
    SVGButton *_multiTalkButton;
    MMWeTypeGuideView *_wetypeGuideView;
    NSView *_wetypeGuideContainerView;
    MMComposeInputScrollView *_scrollView;
    NSClipView *_clipView;
    MMComposeTextView *_composeTextView;
    MMComposeTextStorage *_textStorage;
    MMMultiSelectView *_multipleSelectView;
    MMIgnoreEventView *_brandMenuContainerView;
    NSView *_brandMenuListView;
    SVGButton *_closeBrandMenuButton;
    MMEmotionPromptWindowController *_emotionPromptControl;
    MMBatchExportWindow *_exportViewWindow;
    NSMutableDictionary *_viewerWindowDic;
    MMBrandMenuPlugin *_brandMenuPlugin;
    MessageData *_referingMsgWrap;
    MMSolitaireWindowController *_solitaireWindowController;
    NSMenu *_contextMenu;
    MMNoGroupMumberTipView *_noGroupMumberTipView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMNoGroupMumberTipView *noGroupMumberTipView; // @synthesize noGroupMumberTipView=_noGroupMumberTipView;
@property(retain, nonatomic) NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property(retain, nonatomic) MMSolitaireWindowController *solitaireWindowController; // @synthesize solitaireWindowController=_solitaireWindowController;
@property(retain, nonatomic) MessageData *referingMsgWrap; // @synthesize referingMsgWrap=_referingMsgWrap;
@property(retain, nonatomic) MMBrandMenuPlugin *brandMenuPlugin; // @synthesize brandMenuPlugin=_brandMenuPlugin;
@property(retain, nonatomic) NSMutableDictionary *viewerWindowDic; // @synthesize viewerWindowDic=_viewerWindowDic;
@property(retain, nonatomic) MMBatchExportWindow *exportViewWindow; // @synthesize exportViewWindow=_exportViewWindow;
@property(retain, nonatomic) MMEmotionPromptWindowController *emotionPromptControl; // @synthesize emotionPromptControl=_emotionPromptControl;
@property(nonatomic) __weak SVGButton *closeBrandMenuButton; // @synthesize closeBrandMenuButton=_closeBrandMenuButton;
@property(nonatomic) __weak NSView *brandMenuListView; // @synthesize brandMenuListView=_brandMenuListView;
@property(nonatomic) __weak MMIgnoreEventView *brandMenuContainerView; // @synthesize brandMenuContainerView=_brandMenuContainerView;
@property(retain, nonatomic) MMMultiSelectView *multipleSelectView; // @synthesize multipleSelectView=_multipleSelectView;
@property(retain, nonatomic) MMComposeTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain, nonatomic) MMComposeTextView *composeTextView; // @synthesize composeTextView=_composeTextView;
@property(retain, nonatomic) NSClipView *clipView; // @synthesize clipView=_clipView;
@property(retain, nonatomic) MMComposeInputScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSView *wetypeGuideContainerView; // @synthesize wetypeGuideContainerView=_wetypeGuideContainerView;
@property(retain, nonatomic) MMWeTypeGuideView *wetypeGuideView; // @synthesize wetypeGuideView=_wetypeGuideView;
@property(nonatomic) __weak SVGButton *multiTalkButton; // @synthesize multiTalkButton=_multiTalkButton;
@property(nonatomic) __weak SVGButton *openBrandMenuButton; // @synthesize openBrandMenuButton=_openBrandMenuButton;
@property(nonatomic) __weak SVGButton *chatManagerButton; // @synthesize chatManagerButton=_chatManagerButton;
@property(nonatomic) __weak SVGButton *voiceButton; // @synthesize voiceButton=_voiceButton;
@property(nonatomic) __weak SVGButton *videoButton; // @synthesize videoButton=_videoButton;
@property(nonatomic) __weak SVGButton *screenShotMoreOptionButton; // @synthesize screenShotMoreOptionButton=_screenShotMoreOptionButton;
@property(nonatomic) __weak SVGButton *screenShotButton; // @synthesize screenShotButton=_screenShotButton;
@property(nonatomic) __weak SVGButton *attachmentButton; // @synthesize attachmentButton=_attachmentButton;
@property(nonatomic) __weak SVGButton *stickerButton; // @synthesize stickerButton=_stickerButton;
@property(nonatomic) __weak id <MMMutipleSelectionDelegate> multiSelectDelegate; // @synthesize multiSelectDelegate=_multiSelectDelegate;
@property(nonatomic) __weak id <MMChatDetailSplitViewPositionInterface><MMChatMemberListViewDelegate><MMAnimateVoipTipsDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType viewDidLoadBlock; // @synthesize viewDidLoadBlock=_viewDidLoadBlock;
@property(retain, nonatomic) FFProcessReqsvrLogicZZ *messageSendLogic; // @synthesize messageSendLogic=_messageSendLogic;
@property(retain, nonatomic) WCContactData *currnetChatContact; // @synthesize currnetChatContact=_currnetChatContact;
@property(nonatomic) __weak id <MMComposeTextViewDelegate> composeTextViewDelegate; // @synthesize composeTextViewDelegate=_composeTextViewDelegate;
- (void)onReceiveOneSticker:(id)arg1;
- (void)resetSolitaireWindow;
- (void)previewReferContentRelativeTo:(struct CGRect)arg1;
- (void)clearReferContent;
- (void)selectDidChange;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2 isRevoke:(BOOL)arg3;
- (void)updateReferingMessage:(id)arg1;
- (void)windowDidColsed:(id)arg1;
- (void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (id)textView:(id)arg1 attachmentViewWithAttachment:(id)arg2;
- (void)closeWeTypeGuideView;
- (void)showWeTypeGuideView;
- (void)showWeTypeGuideViewIfNeed;
- (void)analysisSolitaireWithContent:(id)arg1;
- (BOOL)sendTextWithAnalysisSolitaire:(id)arg1 withMentionInfo:(id)arg2 withSenderInfo:(id)arg3;
- (void)SaveMutipleSelect;
- (void)ForwardMutipleSelect:(BOOL)arg1 toWeWork:(BOOL)arg2;
- (void)showSessionPickerWithSendMsgList:(id)arg1 isNeedMerge:(BOOL)arg2;
- (void)resetComposeViewAfterSendMessage;
- (void)resetReferMessage;
- (void)insertEditedImage:(id)arg1 identifier:(unsigned long long)arg2;
- (void)insertSnapshotImage:(id)arg1;
- (void)insertRevokeText:(id)arg1 atUsrList:(id)arg2;
- (void)insertReferMessage:(id)arg1;
- (void)insertMentionContactToInputView:(id)arg1;
- (BOOL)sendDragOperation:(id)arg1;
- (void)performStartVoipVideoChat;
- (void)performStartVoipVoiceChat;
- (void)performKeyDown:(id)arg1;
- (void)performMultiSelection:(BOOL)arg1;
- (BOOL)makeFirstResponderIfNeeded:(int)arg1;
- (BOOL)checkBecomeFirstResponder;
- (void)showEmotionPrompt;
- (void)resetEmotionPrompt;
- (void)closeEmoticonPrompt;
- (BOOL)showEmotionPromptWithKeyEvent:(id)arg1;
- (void)OnBatchExportFinishedWithTotalFileCount:(unsigned long long)arg1 failedMsgList:(id)arg2 reasons:(id)arg3;
- (void)OnBatchExportProgressWithMessage:(id)arg1 totalFileCount:(unsigned long long)arg2 finishedFileCount:(unsigned long long)arg3 shouldShowExportProgress:(BOOL)arg4;
- (void)onModifyContacts:(id)arg1;
- (void)onNetStatusChange:(int)arg1;
- (void)setupBrandMenu;
- (void)onSendVideoMsgFailed:(id)arg1 toUsrName:(id)arg2 videoPath:(id)arg3;
- (void)setupMultipleSelect;
- (void)updateChatComposeTextViewDelegate;
- (void)setupNotGroupNumberTipView;
- (void)insertFileAttachmentView:(id)arg1;
- (void)setupView;
- (void)addButtonsConstraints;
- (void)setHiddenToolBarView:(BOOL)arg1;
- (void)CloseMultipleSelect:(id)arg1;
- (void)DeleteByMultipleSelect:(id)arg1;
- (void)SaveByMultipleSelect:(id)arg1;
- (void)sendAddFavoritesEvent:(id)arg1;
- (void)AddFavoritesByMultipleSelect:(id)arg1;
- (void)ForwardWeWorkByMergeMutipleSelect:(id)arg1;
- (void)ForwardByMergeMutipleSelect:(id)arg1;
- (void)ForwardByMultipleSelect:(id)arg1;
- (void)onMultiSelecteViewClick:(long long)arg1;
- (id)getDeviceConflictWording;
- (unsigned int)getRecordTotalSize:(id)arg1;
- (void)openChatManager:(id)arg1;
- (void)addLocalTipsMsg:(id)arg1;
- (void)setupPushMailMenuItemList;
- (void)setupBrandMenuItemList;
- (void)_cleanBrandMenuSubviews;
- (void)_removeBrandMenuMode;
- (void)hideBrandMenu:(id)arg1;
- (void)showPushMailMenu;
- (void)addTencentNewsMenu;
- (void)showBrandMenu:(id)arg1;
- (void)showMultiTalk:(id)arg1;
- (void)showVoiceChat:(id)arg1;
- (void)showVideoChat:(id)arg1;
- (BOOL)checkExclusiveTaskCanStart;
- (void)onClickShotAndHideMainWindow:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)screenShotButtonPressAndHideMainWindow:(id)arg1;
- (void)screenShotButtonPress:(id)arg1;
- (void)showAttachmentMenu:(id)arg1;
- (void)showStickerPicker:(id)arg1;
- (id)currentContentArray;
- (id)currentContentString;
- (void)clearDraftAndPrompt;
- (long long)countOfShowButton;
- (void)updateViewAndLayouts;
- (BOOL)shouldShowNotGroupNumberTip;
- (void)relayoutTextViewIfNeed;
- (void)layoutSplitPositionChange;
- (double)brandMenuViewHeight;
- (double)multipleSelectViewHeight;
- (BOOL)isMultipleSelectViewHidden;
- (void)updateComposeTextView:(id)arg1;
- (void)composeTextViewTextChanged:(id)arg1;
- (void)fontSizeClassChanged:(id)arg1;
- (void)handleCreateSolitarie:(id)arg1;
- (void)applicationWillBecomeActive;
- (void)viewChangedEffectiveAppearance;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

