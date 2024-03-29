//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "AccountServiceExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "MMFavoritesMgrExt-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "WeChatSearchProtocol-Protocol.h"

@class MMSessionChoosenView, MMSessionPickerLeftViewController, MMSessionPickerShareHistoryController, NSString, NSWindow, WCContactData;

@interface MMSessionPickerWindow : NSWindowController <AccountServiceExt, WeChatSearchProtocol, NSWindowDelegate, IMessageExt, MMFavoritesMgrExt>
{
    BOOL _disableForwardNotice;
    BOOL _isObserverAppearance;
    NSString *_headingText;
    NSWindow *_spawningWindow;
    WCContactData *_sharedContact;
    MMSessionPickerLeftViewController *_listViewController;
    MMSessionChoosenView *_choosenViewController;
    MMSessionPickerShareHistoryController *_shareHistoryViewController;
    struct CGSize _originalSize;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(nonatomic) BOOL isObserverAppearance; // @synthesize isObserverAppearance=_isObserverAppearance;
@property(nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
@property(retain, nonatomic) MMSessionPickerShareHistoryController *shareHistoryViewController; // @synthesize shareHistoryViewController=_shareHistoryViewController;
@property(retain, nonatomic) MMSessionChoosenView *choosenViewController; // @synthesize choosenViewController=_choosenViewController;
@property(retain, nonatomic) MMSessionPickerLeftViewController *listViewController; // @synthesize listViewController=_listViewController;
@property(nonatomic) BOOL disableForwardNotice; // @synthesize disableForwardNotice=_disableForwardNotice;
@property(retain, nonatomic) WCContactData *sharedContact; // @synthesize sharedContact=_sharedContact;
@property(nonatomic) __weak NSWindow *spawningWindow; // @synthesize spawningWindow=_spawningWindow;
@property(retain, nonatomic) NSString *headingText; // @synthesize headingText=_headingText;
- (void)clearForwardTmpDir;
- (void)reportQuitWhenAddMember;
- (void)clearShareHistoryDataOnClose;
- (void)favoritesMgrDidRemoveItem:(id)arg1;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2 isRevoke:(BOOL)arg3;
- (void)performSearchAction;
- (void)onUserLogout;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)setUploadedHistoryInfo:(id)arg1;
- (void)setShowsShareHistoryEntry:(BOOL)arg1;
- (void)setAvailableContacts:(id)arg1;
- (void)setAssignedContact:(id)arg1;
- (void)setFilteredUserNames:(id)arg1;
- (void)setForwardSnsMediaItem:(id)arg1 messageCannotBeOpened:(BOOL)arg2;
- (void)setForwardMessageData:(id)arg1;
- (void)setForwardMessageData:(id)arg1 messageCannotBeOpened:(BOOL)arg2;
- (void)setForwardMessageDataWrap:(id)arg1 messageCannotBeOpened:(BOOL)arg2;
- (void)setPreSelectedUserNames:(id)arg1;
- (void)setSelectedList:(id)arg1;
- (void)setPreSelectedContact:(id)arg1;
- (void)setCancelButtonText:(id)arg1;
- (void)setConfirmButtonText:(id)arg1;
- (void)setType:(unsigned long long)arg1 showToWeWork:(BOOL)arg2;
- (void)setType:(unsigned long long)arg1;
- (void)setShowsOtherNonhumanChats:(BOOL)arg1;
- (void)setShowsOfficialAccounts:(BOOL)arg1;
- (void)setShowsGroupChats:(BOOL)arg1;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)showShareHistoryPannel;
- (void)_showSendSuccess;
- (void)endSheet;
- (void)showWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rebeginSheet;
- (void)beginSnsRightSheetForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;
- (void)beginSheetForWindow:(id)arg1 allowsToWeWork:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3 cancelHandler:(CDUnknownBlockType)arg4;
- (void)beginSheetForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;
- (void)beginSheetForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setWindowResizable:(BOOL)arg1;
- (void)beginRevokeAddMemmerSheetForWindow:(id)arg1 assignedContact:(id)arg2 revokeContacts:(id)arg3 revokeHistoryMsgWrap:(id)arg4 confirmButtonText:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)beginSnsPermitOfVisitSheetForWindow:(id)arg1 selectedList:(id)arg2 resultCompletionHandler:(CDUnknownBlockType)arg3;
- (void)beginSnsLimitationsOfVisitSheetForWindow:(id)arg1 selectedList:(id)arg2 resultCompletionHandler:(CDUnknownBlockType)arg3;
- (void)beginSnsExcessRemindSheetForWindow:(id)arg1 selectedList:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginSnsExcessRemindSheetForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginRemoveMemberSheetForWindow:(id)arg1 assignedContact:(id)arg2 confirmButtonText:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)beginAddMemberSheetForWindow:(id)arg1 preSelectedContact:(id)arg2 confirmButtonText:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)beginNewChatSheetForWindow:(id)arg1 confirmButtonText:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginForwardSheetForWindow:(id)arg1 data:(id)arg2 showsGroupChats:(BOOL)arg3 showsOtherNonhumanChats:(BOOL)arg4 allowsToWeWork:(BOOL)arg5 allowsMultiSelection:(BOOL)arg6 messageCannotBeOpened:(BOOL)arg7 confirmButtonText:(id)arg8 completionHandler:(CDUnknownBlockType)arg9 cancelHandler:(CDUnknownBlockType)arg10;
- (void)beginForwardSheetForWindow:(id)arg1 data:(id)arg2 showsGroupChats:(BOOL)arg3 showsOtherNonhumanChats:(BOOL)arg4 allowsToWeWork:(BOOL)arg5 messageCannotBeOpened:(BOOL)arg6 confirmButtonText:(id)arg7 completionHandler:(CDUnknownBlockType)arg8 cancelHandler:(CDUnknownBlockType)arg9;
- (void)beginForwardSheetForWindow:(id)arg1 data:(id)arg2 showsGroupChats:(BOOL)arg3 showsOtherNonhumanChats:(BOOL)arg4 messageCannotBeOpened:(BOOL)arg5 confirmButtonText:(id)arg6 completionHandler:(CDUnknownBlockType)arg7 cancelHandler:(CDUnknownBlockType)arg8;
- (void)beginForwardSheetForWindow:(id)arg1 data:(id)arg2 showsGroupChats:(BOOL)arg3 showsOtherNonhumanChats:(BOOL)arg4 messageCannotBeOpened:(BOOL)arg5 confirmButtonText:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)beginForwardSheetForWindow:(id)arg1 data:(id)arg2 allowsToWeWork:(BOOL)arg3 confirmButtonText:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 cancelHandler:(CDUnknownBlockType)arg6;
- (void)listViewControllerDidChanged;
- (void)clearDataOnWindowDidEndSheet;
- (void)windowDidResize:(id)arg1;
- (void)adjustWindowFrame:(long long)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (void)destroy;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

