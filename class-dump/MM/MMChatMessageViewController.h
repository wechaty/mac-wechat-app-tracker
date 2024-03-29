//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "ICdnComMgrExt-Protocol.h"
#import "IChatLogMigrateToMacExt-Protocol.h"
#import "IChatSyncMgrExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IGroupMgrExt-Protocol.h"
#import "IMessageCacheMgrImageExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "IMessageServiceFileReTransferExt-Protocol.h"
#import "MMMessageCellViewDelegate-Protocol.h"
#import "MMMutipleSelectionDelegate-Protocol.h"
#import "MMNetExt-Protocol.h"
#import "MMTableViewDelegate-Protocol.h"
#import "MMViewerWindowDelegate-Protocol.h"
#import "MultiTalkMgrExt-Protocol.h"
#import "NSCollectionViewDataSource-Protocol.h"
#import "NSCollectionViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "OpenIMResourceMgrExt-Protocol.h"
#import "SendPatExt-Protocol.h"
#import "VoipMessageCellViewDelegate-Protocol.h"
#import "kMMAllowReferInterface-Protocol.h"

@class MMChatInfoView, MMChatMessageBannerView, MMChatMessageDataSource, MMChatRoomReportController, MMGroupMigrationView, MMGroupNoticeBannerView, MMGroupTopMsgBannerView, MMMessageCellView, MMMessageReferMgr, MMMessageScrollView, MMMessageTableItem, MMMessageUnreadTipsButton, MMTableView, MMTimer, MMVoIPInviteView, NSMutableArray, NSMutableDictionary, NSString, NSTextField, NSTimer, NSView, WCContactData;
@protocol MMChatMemberListViewDelegate, MMComposeInputViewDelegate;

@interface MMChatMessageViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, MMTableViewDelegate, MMMessageCellViewDelegate, MMViewerWindowDelegate, IContactMgrExt, IGroupMgrExt, MMNetExt, VoipMessageCellViewDelegate, MMMutipleSelectionDelegate, IChatSyncMgrExt, IMessageServiceFileReTransferExt, OpenIMResourceMgrExt, MultiTalkMgrExt, IMessageExt, SendPatExt, IMessageCacheMgrImageExt, IChatLogMigrateToMacExt, ICdnComMgrExt, NSCollectionViewDelegate, NSCollectionViewDataSource, kMMAllowReferInterface>
{
    BOOL _isSettingChatContact;
    BOOL _isScrollToUnReadCount;
    BOOL _hasSelectedChat;
    BOOL _multiSelectionMode;
    BOOL _isNoNetwork;
    BOOL _isPerformingAutoScrollToBottom;
    BOOL _isLastMsgUnreadTipsShouldShownOnTop;
    BOOL _cellViewToChoosable;
    BOOL _beginDragging;
    BOOL _isAutoWheeling;
    unsigned int _lastCurUserActiveTime;
    CDUnknownBlockType _viewDidLoadBlock;
    CDUnknownBlockType _showBrandListViewBlock;
    CDUnknownBlockType _updateChatDetailContentViewHeightBlock;
    WCContactData *_chatContact;
    id <MMComposeInputViewDelegate> _composeInputViewDelegate;
    id <MMChatMemberListViewDelegate> _chatMemberListViewDelegate;
    long long _searchMsgLocalID;
    MMChatInfoView *_chatInfoView;
    NSView *_chatMessageListView;
    MMMessageScrollView *_messageScrollView;
    MMTableView *_messageTableView;
    MMMessageUnreadTipsButton *_unreadTipsButton;
    NSTextField *_hintTextField;
    MMMessageCellView *_currentMessageCellView;
    MMChatMessageDataSource *_messageDataSource;
    MMMessageTableItem *_seletedMessageTableItem;
    MMTimer *_netStatusTimer;
    MMTimer *_scrollDelaytimer;
    id _userActiveEvent;
    unsigned long long _lastSetChatContactTimeInMs;
    NSView *_shapeLayerView;
    MMMessageTableItem *_preSelectedTableItem;
    NSMutableDictionary *_viewerWindowDic;
    double _viewWidth;
    long long _readCountWhenUnReadTipShow;
    unsigned long long _unreadCountWhenSetContact;
    MMVoIPInviteView *_voipInviteView;
    MMChatMessageBannerView *_networkBannerView;
    MMGroupNoticeBannerView *_groupNoticeBannerView;
    MMGroupTopMsgBannerView *_topMsgBannerView;
    MMGroupMigrationView *_groupMigrationView;
    NSMutableArray *_tipBarArray;
    NSMutableArray *_tipBarCanShowArray;
    double _scrollDeltaVal;
    MMChatRoomReportController *_chatRoomReportController;
    long long _autoWheelParameter;
    NSTimer *_autoWheelTimer;
    long long _absoluteDragStartposition;
    long long _absoluteDragEndposition;
    NSTimer *_reportTimer;
    MMMessageUnreadTipsButton *_backToReferButton;
    MMMessageReferMgr *_messageReferMgr;
    struct CGPoint _eventPoint;
    struct CGPoint _dragStartPoint;
    struct CGPoint _dragEndPoint;
    struct CGRect _draggedRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMessageReferMgr *messageReferMgr; // @synthesize messageReferMgr=_messageReferMgr;
@property(retain, nonatomic) MMMessageUnreadTipsButton *backToReferButton; // @synthesize backToReferButton=_backToReferButton;
@property(retain, nonatomic) NSTimer *reportTimer; // @synthesize reportTimer=_reportTimer;
@property(nonatomic) long long absoluteDragEndposition; // @synthesize absoluteDragEndposition=_absoluteDragEndposition;
@property(nonatomic) long long absoluteDragStartposition; // @synthesize absoluteDragStartposition=_absoluteDragStartposition;
@property(retain, nonatomic) NSTimer *autoWheelTimer; // @synthesize autoWheelTimer=_autoWheelTimer;
@property(nonatomic) long long autoWheelParameter; // @synthesize autoWheelParameter=_autoWheelParameter;
@property(nonatomic) BOOL isAutoWheeling; // @synthesize isAutoWheeling=_isAutoWheeling;
@property(retain, nonatomic) MMChatRoomReportController *chatRoomReportController; // @synthesize chatRoomReportController=_chatRoomReportController;
@property(nonatomic) double scrollDeltaVal; // @synthesize scrollDeltaVal=_scrollDeltaVal;
@property(retain, nonatomic) NSMutableArray *tipBarCanShowArray; // @synthesize tipBarCanShowArray=_tipBarCanShowArray;
@property(retain, nonatomic) NSMutableArray *tipBarArray; // @synthesize tipBarArray=_tipBarArray;
@property(retain, nonatomic) MMGroupMigrationView *groupMigrationView; // @synthesize groupMigrationView=_groupMigrationView;
@property(retain, nonatomic) MMGroupTopMsgBannerView *topMsgBannerView; // @synthesize topMsgBannerView=_topMsgBannerView;
@property(retain, nonatomic) MMGroupNoticeBannerView *groupNoticeBannerView; // @synthesize groupNoticeBannerView=_groupNoticeBannerView;
@property(retain, nonatomic) MMChatMessageBannerView *networkBannerView; // @synthesize networkBannerView=_networkBannerView;
@property(retain, nonatomic) MMVoIPInviteView *voipInviteView; // @synthesize voipInviteView=_voipInviteView;
@property(nonatomic) unsigned long long unreadCountWhenSetContact; // @synthesize unreadCountWhenSetContact=_unreadCountWhenSetContact;
@property(nonatomic) long long readCountWhenUnReadTipShow; // @synthesize readCountWhenUnReadTipShow=_readCountWhenUnReadTipShow;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(retain, nonatomic) NSMutableDictionary *viewerWindowDic; // @synthesize viewerWindowDic=_viewerWindowDic;
@property(nonatomic) BOOL beginDragging; // @synthesize beginDragging=_beginDragging;
@property(retain, nonatomic) MMMessageTableItem *preSelectedTableItem; // @synthesize preSelectedTableItem=_preSelectedTableItem;
@property(retain, nonatomic) NSView *shapeLayerView; // @synthesize shapeLayerView=_shapeLayerView;
@property(nonatomic) struct CGRect draggedRect; // @synthesize draggedRect=_draggedRect;
@property(nonatomic) struct CGPoint dragEndPoint; // @synthesize dragEndPoint=_dragEndPoint;
@property(nonatomic) struct CGPoint dragStartPoint; // @synthesize dragStartPoint=_dragStartPoint;
@property(nonatomic) struct CGPoint eventPoint; // @synthesize eventPoint=_eventPoint;
@property(nonatomic) BOOL cellViewToChoosable; // @synthesize cellViewToChoosable=_cellViewToChoosable;
@property(nonatomic) unsigned long long lastSetChatContactTimeInMs; // @synthesize lastSetChatContactTimeInMs=_lastSetChatContactTimeInMs;
@property(nonatomic) BOOL isLastMsgUnreadTipsShouldShownOnTop; // @synthesize isLastMsgUnreadTipsShouldShownOnTop=_isLastMsgUnreadTipsShouldShownOnTop;
@property(nonatomic) unsigned int lastCurUserActiveTime; // @synthesize lastCurUserActiveTime=_lastCurUserActiveTime;
@property BOOL isPerformingAutoScrollToBottom; // @synthesize isPerformingAutoScrollToBottom=_isPerformingAutoScrollToBottom;
@property(retain, nonatomic) id userActiveEvent; // @synthesize userActiveEvent=_userActiveEvent;
@property(retain, nonatomic) MMTimer *scrollDelaytimer; // @synthesize scrollDelaytimer=_scrollDelaytimer;
@property(nonatomic) BOOL isNoNetwork; // @synthesize isNoNetwork=_isNoNetwork;
@property(retain, nonatomic) MMTimer *netStatusTimer; // @synthesize netStatusTimer=_netStatusTimer;
@property(retain, nonatomic) MMMessageTableItem *seletedMessageTableItem; // @synthesize seletedMessageTableItem=_seletedMessageTableItem;
@property(retain, nonatomic) MMChatMessageDataSource *messageDataSource; // @synthesize messageDataSource=_messageDataSource;
@property(retain, nonatomic) MMMessageCellView *currentMessageCellView; // @synthesize currentMessageCellView=_currentMessageCellView;
@property(retain, nonatomic) NSTextField *hintTextField; // @synthesize hintTextField=_hintTextField;
@property(nonatomic) __weak MMMessageUnreadTipsButton *unreadTipsButton; // @synthesize unreadTipsButton=_unreadTipsButton;
@property(nonatomic) __weak MMTableView *messageTableView; // @synthesize messageTableView=_messageTableView;
@property(nonatomic) __weak MMMessageScrollView *messageScrollView; // @synthesize messageScrollView=_messageScrollView;
@property(nonatomic) __weak NSView *chatMessageListView; // @synthesize chatMessageListView=_chatMessageListView;
@property(nonatomic) __weak MMChatInfoView *chatInfoView; // @synthesize chatInfoView=_chatInfoView;
@property(nonatomic) long long searchMsgLocalID; // @synthesize searchMsgLocalID=_searchMsgLocalID;
@property(nonatomic) BOOL multiSelectionMode; // @synthesize multiSelectionMode=_multiSelectionMode;
@property(nonatomic) __weak id <MMChatMemberListViewDelegate> chatMemberListViewDelegate; // @synthesize chatMemberListViewDelegate=_chatMemberListViewDelegate;
@property(nonatomic) __weak id <MMComposeInputViewDelegate> composeInputViewDelegate; // @synthesize composeInputViewDelegate=_composeInputViewDelegate;
@property(nonatomic) BOOL hasSelectedChat; // @synthesize hasSelectedChat=_hasSelectedChat;
@property(retain, nonatomic) WCContactData *chatContact; // @synthesize chatContact=_chatContact;
@property(copy, nonatomic) CDUnknownBlockType updateChatDetailContentViewHeightBlock; // @synthesize updateChatDetailContentViewHeightBlock=_updateChatDetailContentViewHeightBlock;
@property(copy, nonatomic) CDUnknownBlockType showBrandListViewBlock; // @synthesize showBrandListViewBlock=_showBrandListViewBlock;
@property(copy, nonatomic) CDUnknownBlockType viewDidLoadBlock; // @synthesize viewDidLoadBlock=_viewDidLoadBlock;
- (void)updateTipsBarCanShowArr;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)someActionWhenCloseOldSession;
- (void)updateTipsBarWhenModifyContacts;
- (void)realAdjustTipsBarHigh;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onChatLogImportFinish;
- (void)reportOnShowDetailIfNeeded:(id)arg1;
- (void)reportVisibleFeedCell;
- (void)OnCdnNetworkWarning:(unsigned int)arg1;
- (void)enterQuitChatRoomReport;
- (void)setupChatroomReportController;
- (void)reportOnChange;
- (void)reportClickUnreadTips;
- (void)reportShowUnreadTips;
- (void)reportAddMsg:(id)arg1;
- (void)onAddMsg:(id)arg1 msgData:(id)arg2;
- (BOOL)shouldShowUnreadTipsButton;
- (id)getNextVoiceMsgToPlay:(unsigned int)arg1;
- (long long)getVisibleUnreadMessageCount;
- (void)updateChatContactIfNeeded:(id)arg1;
- (void)showChatDetailPanel:(id)arg1;
- (void)onRevokePatEnd:(BOOL)arg1 forUser:(id)arg2 n64MsgId:(long long)arg3 clientMsgId:(id)arg4;
- (void)onFileReTransferOfChat:(id)arg1 forMessage:(long long)arg2;
- (void)showBanner;
- (void)showNetworkWarningBanner;
- (void)showNetworkBanner;
- (void)hideNetworkBanner;
- (void)clearNetstatusTimer;
- (void)onNetStatusChange:(int)arg1;
- (void)onMultiTalkBannerChange:(id)arg1 status:(unsigned int)arg2;
- (void)onQuitGroupAndEndMultiTalk:(id)arg1;
- (BOOL)validateProposedFirstResponder:(id)arg1 forEvent:(id)arg2;
- (id)title;
- (void)_limitStickerPlay;
- (void)onChangeOcclusion:(id)arg1;
- (void)doScrollViewBoundsDidChanged;
- (void)onScrollViewBoundsDidChanged:(id)arg1;
- (void)onChatSyncMessagesMerged:(id)arg1;
- (void)OnQuitGroupUIAction:(id)arg1 withResult:(BOOL)arg2 errorMsg:(id)arg3 deleteAllMsg:(BOOL)arg4;
- (void)OnChangeMemberShowDisplayName:(id)arg1;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3;
- (void)OnAddGroupMember:(id)arg1 withStatus:(unsigned int)arg2 memberList:(id)arg3 contactList:(id)arg4;
- (void)onModifyContacts:(id)arg1;
- (void)OpenIMResourceWordingIds:(id)arg1 didFinish:(id)arg2;
- (BOOL)checkVisiable:(id)arg1;
- (id)currentContactData;
- (void)clearUnReadCount;
- (void)checkBackToRefer;
- (void)checkFirstUnreadMessageShown;
- (void)relayoutUnreadTips;
- (void)unreadTipsDidClicked;
- (void)clearAndScrollToFirstUnReadCount:(unsigned long long)arg1;
- (void)scrollToMessage:(id)arg1;
- (void)scrollToMessage:(id)arg1 needHighLighted:(BOOL)arg2;
- (void)handleBackToReferBtnAppFontSize;
- (void)resetBackToReferbtn;
- (void)backToReferBtnDidClicked;
- (void)checkAndClearUnreadTip;
- (void)returnToOriginalMsg:(id)arg1;
- (BOOL)showLocatedMessage:(unsigned int)arg1 needHighLighted:(BOOL)arg2;
- (BOOL)scrollToFirstUnReadMessages:(unsigned long long)arg1;
- (void)showUnreadTipsIfNeededAnimated:(BOOL)arg1 isShowOnTop:(BOOL)arg2 scene:(int)arg3;
- (BOOL)isUnreadTipsShownOnBottom;
- (BOOL)isUnreadTipsShownOnTop;
- (BOOL)isUnreadTipsShown;
- (unsigned int)unreadCount;
- (struct CGRect)originScreenRectForAnimationForWindow:(id)arg1;
- (void)windowDidColsed:(id)arg1;
- (void)cellViewDidMouseCilckToStartVoipChatWithInviteType:(unsigned int)arg1;
- (void)messageCellViewNeedScrollToSelf:(id)arg1 andItem:(id)arg2;
- (double)messageCellViewMultiSelectionLeftPadding:(id)arg1;
- (BOOL)messageCellViewIsMultiSelectionMode:(id)arg1;
- (double)messageCellViewNeedsContainerWidth;
- (void)messageCellView:(id)arg1 didPasteQuotedMessageWithItem:(id)arg2;
- (void)messageCellView:(id)arg1 didClickOnAvatarWithItem:(id)arg2;
- (void)messageCellView:(id)arg1 didDoubleClickOnAvatarWithItem:(id)arg2;
- (void)messageCellView:(id)arg1 didMentionContactWithItem:(id)arg2;
- (void)messageCellViewDidStartForwardMessageCommand:(id)arg1;
- (void)messageCellView:(id)arg1 gotMisdirectedKeyDown:(id)arg2;
- (void)messageCellViewNeedsReload:(id)arg1;
- (void)messageCellViewNeedsHeightRecalculated:(id)arg1;
- (void)messageCellView:(id)arg1 didUpdatePreviewContentWithItem:(id)arg2;
- (void)messageCellView:(id)arg1 showDetailWindowWithItem:(id)arg2;
- (void)messageCellView:(id)arg1 multiSelectWithEvent:(id)arg2;
- (void)messageCellViewDidStartMultiSelection:(id)arg1;
- (int)updateChosenStyle:(BOOL)arg1 cellView:(id)arg2;
- (id)makeCellViewWithMessage:(id)arg1;
- (id)cellViewWithMessage:(id)arg1;
- (id)cellIdentifierWithMessage:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (double)superViewFrameWidth;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)performLoadMoreFromBottom:(id)arg1;
- (void)performLoadMoreFromTop:(id)arg1;
- (void)loadMoreChatHistoryFromBottom;
- (void)loadMoreChatHistoryFromTop;
- (void)delayReloadTableViewWhenSetContact:(id)arg1;
- (void)reloadTableView;
- (id)getMultiSelectedMessageTableItems;
- (id)getMultiSelectedMessages;
- (void)QuitMultiSelecionMode;
- (BOOL)isMultiSelectionMode;
- (void)updateUnreadStateOfPatMessage;
- (void)updateMessageDataSource:(id)arg1;
- (void)updateTipsBar;
- (void)markAllMessagesAsRead:(id)arg1;
- (BOOL)scrollPointYOffset:(double)arg1;
- (void)adjustVisableHeightForResize;
- (void)layoutForResize;
- (id)getMessageTableView;
- (void)setupBackToReferButton;
- (void)setupUnreadTipsButton;
- (void)layoutMultiTalkContentIfNeeded;
- (BOOL)shouldShowTipsBar;
- (BOOL)shouldShowHintLabel;
- (void)setupHintLabel;
- (void)setupGroupMigrationView;
- (void)setupGroupNoticeBannerView;
- (void)setupTopMsgBannerView;
- (void)setupMultiTalkView;
- (void)setVoipInviteViewHidden:(BOOL)arg1;
- (void)setupChatInfoView;
- (void)setupBannerCellView;
- (void)makeSureRevokeMessageVisible:(long long)arg1;
- (void)handleRevokePromptMessage:(id)arg1;
- (void)setupTableView;
- (void)setupEffectView;
- (void)copySelectedMessageContent;
- (void)keyDown:(id)arg1;
- (void)showAlert:(int)arg1;
- (long long)mouseDragStartIndex:(long long)arg1 endIndex:(long long)arg2 up2Down:(BOOL)arg3;
- (void)mouseDragSelectedMessageCellView;
- (void)autoWheelDetails;
- (void)stopAutoWheel;
- (void)startAutoWheel;
- (void)handleOutsideEventDuringDragging:(id)arg1;
- (void)handleEventDuringDragging:(id)arg1;
- (void)handleEventBeforeDragging:(id)arg1;
- (BOOL)locationInsideMessageCellView:(struct CGPoint)arg1;
- (BOOL)locationInsideMessageListView:(struct CGPoint)arg1;
- (struct CGRect)dragValidBounds;
- (BOOL)dragFarEnough:(struct CGPoint)arg1 from:(struct CGPoint)arg2;
- (struct CGRect)visibleMessageRectInCurrentChat:(id)arg1;
- (void)focusOnChatNameLabel;
- (void)updateChatInfoSubviewEvent:(BOOL)arg1;
- (void)onNewWindowFrame:(id)arg1;
- (void)tipsBarHandleAppFontSize;
- (void)fontSizeClassChanged:(id)arg1;
- (void)forwardToWeWorkDidConfirmed:(id)arg1;
- (void)sessionPickWindowDidConfirmed:(id)arg1;
- (void)windowDidBecomeKeyAction:(id)arg1;
- (void)voiceTranslateDidFinish:(id)arg1;
- (void)autoTranslateVoiceToText:(id)arg1;
- (void)playerDidFinishPlay:(id)arg1;
- (void)autoDownloadResource:(id)arg1;
- (void)addTipsKVO;
- (void)addObservers;
- (int)getUserActiveInterval;
- (void)receiveOnUserActive:(id)arg1;
- (void)sessionChangedAndMarkAsRead;
- (void)onUserActive:(unsigned long long)arg1;
- (BOOL)isDraggingFromChatMemberlistView:(struct CGPoint)arg1;
- (id)handleLeftMouseDragged:(id)arg1;
- (id)handleLeftMouseUp:(id)arg1;
- (id)handleMouseDown:(id)arg1 withLocation:(BOOL)arg2;
- (id)handleScrollWheel:(id)arg1;
- (void)viewChangedEffectiveAppearance;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)userMouseEvent;
- (void)setupTipsBar;
- (void)viewDidLoad;
- (void)registerDelegates;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (void)removeTipsKVO;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

