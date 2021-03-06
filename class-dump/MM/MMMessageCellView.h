//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IGroupMgrExt-Protocol.h"
#import "MMAutoDownloadProtocol-Protocol.h"
#import "NSDraggingSource-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSSharingServiceDelegate-Protocol.h"
#import "NSSharingServicePickerDelegate-Protocol.h"

@class MMButton, MMImageView, MMMessageCellAvatarView, MMMessageTableItem, MMOutlineButton, MMView, NSButton, NSImage, NSMenu, NSProgressIndicator, NSString, NSTextField, NSTrackingArea;
@protocol MMMessageCellViewDelegate;

@interface MMMessageCellView : NSTableCellView <NSDraggingSource, IGroupMgrExt, NSSharingServicePickerDelegate, NSSharingServiceDelegate, IContactMgrExt, NSMenuDelegate, CAAnimationDelegate, MMAutoDownloadProtocol>
{
    NSImage *_savedDraggingImage;
    NSTrackingArea *_mainTrackingArea;
    NSMenu *_menuFromContextMenuButton;
    BOOL _highlighted;
    BOOL _isGlobalSearch;
    BOOL _hasSelfAvatar;
    BOOL _couldPat;
    BOOL _showGroupChatNickName;
    BOOL _isSearchMode;
    BOOL _hasShownRecall;
    BOOL _isBeingDragged;
    int _accessoryType;
    NSProgressIndicator *_waitingProgressIndicatorAccessory;
    NSButton *_errorIndicatorAccessory;
    id <MMMessageCellViewDelegate> _delegate;
    MMMessageCellAvatarView *_avatarImgView;
    MMView *_contentView;
    NSTextField *_groupChatNickNameLabel;
    NSTextField *_msgCreatetimeLabel;
    MMOutlineButton *_locateMsgLabel;
    MMButton *_checkbox;
    unsigned long long _currentMode;
    double _hasTopPadding;
    MMMessageTableItem *_messageTableItem;
    NSButton *_contextMenuButton;
    NSButton *_saveToFavoritesButton;
    NSString *_realChatUserName;
    NSString *_senderAvatarUrl;
    MMImageView *_patHand;
    NSMenu *_currentMenu;
    struct CGPoint _mouseDownLocation;
}

+ (BOOL)writeText:(id)arg1 toPasteboard:(id)arg2 orItem:(id)arg3 forType:(id)arg4;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
+ (Class)cellViewSubclassForSearchChatMessage:(id)arg1;
+ (Class)cellViewSubclassForMessage:(id)arg1;
+ (id)cellViewWithSearchChatMessage:(id)arg1;
+ (id)cellViewWithMessage:(id)arg1;
+ (id)cellIdentifierWithSearchChatMessage:(id)arg1;
+ (id)cellIdentifierWithMessage:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak NSMenu *currentMenu; // @synthesize currentMenu=_currentMenu;
@property(retain, nonatomic) MMImageView *patHand; // @synthesize patHand=_patHand;
@property(retain, nonatomic) NSString *senderAvatarUrl; // @synthesize senderAvatarUrl=_senderAvatarUrl;
@property(retain, nonatomic) NSString *realChatUserName; // @synthesize realChatUserName=_realChatUserName;
@property(nonatomic) struct CGPoint mouseDownLocation; // @synthesize mouseDownLocation=_mouseDownLocation;
@property(retain, nonatomic) NSButton *saveToFavoritesButton; // @synthesize saveToFavoritesButton=_saveToFavoritesButton;
@property(retain, nonatomic) NSButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(readonly, nonatomic) BOOL isBeingDragged; // @synthesize isBeingDragged=_isBeingDragged;
@property(nonatomic) BOOL hasShownRecall; // @synthesize hasShownRecall=_hasShownRecall;
@property(nonatomic) BOOL isSearchMode; // @synthesize isSearchMode=_isSearchMode;
@property(nonatomic) BOOL showGroupChatNickName; // @synthesize showGroupChatNickName=_showGroupChatNickName;
@property(retain, nonatomic) MMMessageTableItem *messageTableItem; // @synthesize messageTableItem=_messageTableItem;
@property(nonatomic) double hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) BOOL couldPat; // @synthesize couldPat=_couldPat;
@property(nonatomic) BOOL hasSelfAvatar; // @synthesize hasSelfAvatar=_hasSelfAvatar;
@property(nonatomic) unsigned long long currentMode; // @synthesize currentMode=_currentMode;
@property(nonatomic) BOOL isGlobalSearch; // @synthesize isGlobalSearch=_isGlobalSearch;
@property(retain, nonatomic) MMButton *checkbox; // @synthesize checkbox=_checkbox;
@property(nonatomic) int accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) MMOutlineButton *locateMsgLabel; // @synthesize locateMsgLabel=_locateMsgLabel;
@property(retain, nonatomic) NSTextField *msgCreatetimeLabel; // @synthesize msgCreatetimeLabel=_msgCreatetimeLabel;
@property(retain, nonatomic) NSTextField *groupChatNickNameLabel; // @synthesize groupChatNickNameLabel=_groupChatNickNameLabel;
@property(retain, nonatomic) MMView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMMessageCellAvatarView *avatarImgView; // @synthesize avatarImgView=_avatarImgView;
@property(nonatomic) __weak id <MMMessageCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSButton *errorIndicatorAccessory; // @synthesize errorIndicatorAccessory=_errorIndicatorAccessory;
@property(retain, nonatomic) NSProgressIndicator *waitingProgressIndicatorAccessory; // @synthesize waitingProgressIndicatorAccessory=_waitingProgressIndicatorAccessory;
- (void)processAutoDownload;
- (BOOL)isAutoDownload;
- (void)setLocationAnimation;
- (void)updateMessageLayer;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)contextMenuShareExtension:(id)arg1;
- (id)buildShareExtensionMenuItem;
- (id)contentForSharing;
- (void)showUIDebugGuidesChanged:(id)arg1;
- (struct CGRect)bubbleFrame;
- (id)generateMessageDisplayContent;
- (BOOL)notMoveFar:(id)arg1;
- (void)reshowChosenStyle;
- (void)resetChosenStyle;
- (void)checkboxToggle;
- (void)setIsLocateResultStyle:(BOOL)arg1;
- (void)setIsChosenStyleBackground:(BOOL)arg1;
- (void)setIsChosenStyle:(BOOL)arg1;
- (BOOL)isChoosingMode;
- (int)getChooseModeLeftPadding;
- (int)getChoosableLeftPadding;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (void)updateOnModifyContacts:(id)arg1;
- (void)OnModifyGroupMemberContact:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)onModifyUserImageWithUrl:(id)arg1 userName:(id)arg2;
- (void)contextMenuButtonAction:(id)arg1;
- (struct CGRect)rectForSaveToFavoritesButton;
- (struct CGRect)rectForContextMenuButton;
- (struct CGRect)rectForAccessory:(int)arg1;
- (void)continueSendMessage;
- (void)resendMessage;
- (void)setErrorIndicatorAccessoryToolTip:(id)arg1;
- (BOOL)isSendFromSelf;
- (void)confirmResendMessage;
- (void)layoutAccessories;
- (void)mentionGroupChatMember:(id)arg1;
- (void)addGroupChatMember:(id)arg1;
- (void)chatWithMember:(id)arg1;
- (void)cancelTrackingWhenViewWillRemove;
- (BOOL)allowContextMenuForEvent:(id)arg1;
- (void)contextMenuDidClose:(id)arg1;
- (void)contextMenuWillOpen:(id)arg1;
- (void)itemAction;
- (id)_makeAvatarMenuItem:(id)arg1 action:(SEL)arg2;
- (id)contextAvatarMenu;
- (id)contextMultipleSelectMenu:(id)arg1;
- (void)setMenuTitleWithBlankChar:(id)arg1 blankLen:(unsigned long long)arg2;
- (id)contextMenu;
- (id)contextMenuOutsideFrame:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (struct CGRect)draggingFrameForEvent:(id)arg1;
- (id)bubbleImage;
- (id)generatePasteboardItem;
- (id)resizedDraggingImage;
- (id)draggingImage;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)draggablePasteboardTypes;
- (BOOL)draggingEnabled;
- (BOOL)shouldShowAvatarMenuForEvent:(id)arg1;
- (BOOL)locationIsInsideUndraggableArea:(struct CGPoint)arg1;
- (BOOL)locationIsInsideAvatarArea:(struct CGPoint)arg1;
- (BOOL)locationIsInsideClickableArea:(struct CGPoint)arg1;
- (BOOL)eventIsInsideAvatarArea:(id)arg1;
- (BOOL)eventIsInsideClickableArea:(id)arg1;
- (struct CGRect)undraggableArea;
- (struct CGRect)clickableArea;
- (void)setupLocateMsgLabel;
- (void)setupMsgCreatetimeLabel;
- (id)_formattedGroupNickName:(id)arg1;
- (id)makeDescLabelAttrString:(id)arg1;
- (id)getDisplayAndMatchKeyWordNameAttr:(id)arg1 displayName:(id)arg2;
- (void)updateGroupChatNickName;
- (void)setupGroupChatNickName;
- (id)getOpenIMAttributedString:(id)arg1;
@property(readonly, nonatomic) BOOL isGroupChat;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)delaySendPat;
- (double)arcWithAngle:(double)arg1;
- (void)handPatAnimationForTimeOffset:(double)arg1;
- (void)setupPatHandImageView;
- (void)_updateContextMenuButtonVisibilityFromMousePosition;
- (void)scrollWheel:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
@property(readonly, nonatomic) double topPadding;
- (double)_avatarPosX;
- (void)updateAvatarImage;
- (void)updateAccessibilityContent:(id)arg1;
- (void)populateWithMessage:(id)arg1;
- (id)formattedDefaultAttr:(id)arg1 font:(id)arg2;
- (id)hightLightedText:(id)arg1 font:(id)arg2;
- (id)hightLightedAttrString:(id)arg1;
- (void)updateHighlightMaskView;
- (void)redrawLocalView;
- (void)prepareForReuse;
- (void)setNeedsDisplay;
- (void)handleNewTextSize;
- (void)updateTrackingAreas;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isSpecialMessageCellView;
- (void)setWaitingProgressIndicatorAccessoryHidden:(BOOL)arg1;
- (void)doAnimationAndAddFavItem:(id)arg1;
- (BOOL)addSearchItem:(id)arg1;
- (void)addReferItem:(id)arg1;
- (void)addSaveToFavoritesItem:(id)arg1;
- (void)addMultiSelectItem:(id)arg1;
- (void)addForwardItem:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (id)realSubMenu;
- (id)fakeSubMenu;
- (id)getMessageDataSourceFilePath:(id)arg1;
- (void)updateFileMessageOpTime:(id)arg1;
- (void)contextMenuSearch;
- (void)contextMenuShowSourceDebugTool;
- (void)contextMenuSolitaire;
- (void)contextMenuMuteToPlay;
- (void)contextMenuRealFavorites;
- (void)contextMenuFavorites;
- (void)contextMenuRealForward;
- (void)contextMenuForward;
- (void)contextMenuHideTranslation;
- (void)contextMenuTranslate;
- (void)contextMenuQuote;
- (void)contextMenuOpenInWebview;
- (void)contextMenuOpenWith:(id)arg1;
- (void)contextMenuOpenFoler;
- (void)contextMenuOpen;
- (void)contextMenuWipeOutText;
- (void)contextMenuTranscribe;
- (void)contextMenuContinue;
- (void)contextMenuCancle;
- (void)contextMenuDownload;
- (void)contextMenuAddEmotion;
- (void)contextMenuExport;
- (void)contextMenuCopy:(BOOL)arg1;
- (void)contextMenuCopy;
- (void)contextMenuMultipleSelectMessage;
- (void)contextMenuDelete;
- (void)contextMenuLocateMessageInChatManager;
- (void)contextMenuLocateMessageInRealChat;
- (void)contextMenuRecall;
- (void)contextMenuResendMessage;
- (void)contextMenuClearAllMessage;
- (id)getSection3MenuItem;
- (id)getSection2MenuItem;
- (id)getSection1MenuItem;
- (id)getSection0MenuItem;
- (id)getReferMenuItem;
- (id)getOpenMenuItem;
- (id)getOperationMenuItem;
- (id)contextMenuMenuExtendSection;
- (id)contextMenuMenuTopSection;
- (id)contextMenuMenuDebugSection;
- (id)contextMenuMenuSection3;
- (id)contextMenuMenuSection2;
- (id)contextMenuMenuSection1;
- (id)contextMenuMenuSection0;
- (BOOL)allowSearch;
- (BOOL)allowRefer;
- (BOOL)allowMultipleSelect;
- (BOOL)allowRecall;
- (void)populateWithMessage:(id)arg1 addDevider:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

