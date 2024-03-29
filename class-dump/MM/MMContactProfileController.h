//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewController.h"

#import "AccountServiceExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IContactRelatedGroupDataExt-Protocol.h"
#import "IGroupMgrExt-Protocol.h"
#import "IOpLogServiceExt-Protocol.h"
#import "IOpenIMOplogServiceExt-Protocol.h"
#import "MMCGIDelegate-Protocol.h"
#import "MMContactMoreSettingExt-Protocol.h"
#import "MMContactsBatchModifyLogicDelegate-Protocol.h"
#import "MMContactsMgrExt-Protocol.h"
#import "MMTableViewDelegate-Protocol.h"
#import "MMViewerWindowDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"
#import "OpenIMResourceMgrExt-Protocol.h"

@class MMCTTextView, MMContactProfileData, MMContactProfileMgr, MMContactRelatedGroupLogic, MMContactsBatchModifyLogic, MMContactsTagEditLogic, MMProfileBlackContactTipView, MMProfileFooterView, MMProfileHeaderView, MMProfileMoreSettingButton, MMTableView, MessageData, NSMutableArray, NSScrollView, NSString, NSWindow, RBLPopover, RBLPopoverBackgroundView, WCContactData;
@protocol MMContactProfileControllerDelegate;

@interface MMContactProfileController : MMViewController <OpenIMResourceMgrExt, MMViewerWindowDelegate, NSTextFieldDelegate, AccountServiceExt, NSTableViewDataSource, NSTableViewDelegate, MMTableViewDelegate, MMCGIDelegate, IContactMgrExt, IGroupMgrExt, MMContactsMgrExt, IOpLogServiceExt, IOpenIMOplogServiceExt, MMContactsBatchModifyLogicDelegate, MMContactMoreSettingExt, IContactRelatedGroupDataExt>
{
    int _contactInfoSource;
    int _type;
    unsigned int _mySessionId;
    id <MMContactProfileControllerDelegate> _delegate;
    WCContactData *_contactData;
    NSString *_groupName;
    MessageData *_oMsgData;
    unsigned long long _preferredEdge;
    RBLPopover *_rblPopover;
    RBLPopoverBackgroundView *_rblBackgroundView;
    NSWindow *_parentWindow;
    MMProfileHeaderView *_headerView;
    MMProfileMoreSettingButton *_moreSettingButton;
    MMProfileFooterView *_footerView;
    MMProfileBlackContactTipView *_blackTipView;
    MMCTTextView *_officeAccountDesc;
    MMTableView *_tableView;
    NSScrollView *_scrollView;
    NSString *_remarkValue;
    NSMutableArray *_headInfoDatas;
    NSMutableArray *_headInfoHeights;
    NSMutableArray *_headInfoColors;
    MMContactProfileMgr *_model;
    MMContactProfileData *_data;
    MMContactsTagEditLogic *_tagLogic;
    MMContactsBatchModifyLogic *_batchModifyTypeLogic;
    MMContactRelatedGroupLogic *_contactRelatedGroupLogic;
    struct CGRect _relativeToRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMContactRelatedGroupLogic *contactRelatedGroupLogic; // @synthesize contactRelatedGroupLogic=_contactRelatedGroupLogic;
@property(retain, nonatomic) MMContactsBatchModifyLogic *batchModifyTypeLogic; // @synthesize batchModifyTypeLogic=_batchModifyTypeLogic;
@property(retain, nonatomic) MMContactsTagEditLogic *tagLogic; // @synthesize tagLogic=_tagLogic;
@property(nonatomic) unsigned int mySessionId; // @synthesize mySessionId=_mySessionId;
@property(retain, nonatomic) MMContactProfileData *data; // @synthesize data=_data;
@property(retain, nonatomic) MMContactProfileMgr *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableArray *headInfoColors; // @synthesize headInfoColors=_headInfoColors;
@property(retain, nonatomic) NSMutableArray *headInfoHeights; // @synthesize headInfoHeights=_headInfoHeights;
@property(retain, nonatomic) NSMutableArray *headInfoDatas; // @synthesize headInfoDatas=_headInfoDatas;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *remarkValue; // @synthesize remarkValue=_remarkValue;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMCTTextView *officeAccountDesc; // @synthesize officeAccountDesc=_officeAccountDesc;
@property(retain, nonatomic) MMProfileBlackContactTipView *blackTipView; // @synthesize blackTipView=_blackTipView;
@property(retain, nonatomic) MMProfileFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMProfileMoreSettingButton *moreSettingButton; // @synthesize moreSettingButton=_moreSettingButton;
@property(retain, nonatomic) MMProfileHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain, nonatomic) RBLPopoverBackgroundView *rblBackgroundView; // @synthesize rblBackgroundView=_rblBackgroundView;
@property(retain, nonatomic) RBLPopover *rblPopover; // @synthesize rblPopover=_rblPopover;
@property(nonatomic) unsigned long long preferredEdge; // @synthesize preferredEdge=_preferredEdge;
@property(nonatomic) struct CGRect relativeToRect; // @synthesize relativeToRect=_relativeToRect;
@property(retain, nonatomic) MessageData *oMsgData; // @synthesize oMsgData=_oMsgData;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) int contactInfoSource; // @synthesize contactInfoSource=_contactInfoSource;
@property(retain, nonatomic) WCContactData *contactData; // @synthesize contactData=_contactData;
@property(nonatomic) __weak id <MMContactProfileControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)canShareSelfNameCard;
- (void)onOpenImOplogRet:(int)arg1 errMsg:(id)arg2 openImlog:(id)arg3;
- (void)alertFailed:(id)arg1;
- (void)onOpLogRet:(int)arg1 errMsg:(id)arg2 oplog:(id)arg3;
- (void)onContactDelete:(id)arg1;
- (void)onContactCompliant:(id)arg1;
- (void)onContactRemoveBlack;
- (void)onContactAddBlack;
- (void)onContactUpdateBlack:(id)arg1 isBlack:(BOOL)arg2;
- (void)onContactUpdateStar:(id)arg1 isOpen:(BOOL)arg2;
- (void)onContactShare:(id)arg1;
- (void)onContactPrivacySet:(id)arg1;
- (void)onContactRemarkAndTagEdit:(id)arg1;
- (void)handleMenuSuccessWithType:(unsigned int)arg1;
- (void)handleMenuFailedWithType:(unsigned int)arg1 withErrMsg:(id)arg2;
- (void)onContactsBatchModify:(id)arg1 ret:(unsigned int)arg2 errorMsg:(id)arg3 type:(unsigned int)arg4 scene:(long long)arg5;
- (void)onContactsBatchModifyNeedQRCode:(unsigned int)arg1 dataBuffer:(id)arg2 type:(unsigned int)arg3 scene:(long long)arg4;
- (void)onContactsPrivacyFinishSetting:(id)arg1 scene:(int)arg2 withContact:(id)arg3;
- (void)onCRGDataUpdated:(id)arg1;
- (void)OnModifyGroupMemberContact:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)onModifyUserImageWithUrl:(id)arg1 userName:(id)arg2;
- (void)handleGetOpenIMContactResponse:(id)arg1;
- (void)handleGetContactResponse:(id)arg1;
- (void)OpenIMResourceWordingIds:(id)arg1 didFinish:(id)arg2;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)onUserLogout;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)adjustPopoverWindowFrame:(double)arg1;
- (void)windowDidColsed;
- (struct CGRect)originScreenRectForAnimationForWindow:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 rowGotMouseUp:(long long)arg2;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)onOpenProfileAppBrandButtonClick;
- (void)onOpemIMDescInfoClick:(id)arg1;
- (void)onAvatorImageClick;
- (void)onOfficeHistoryButtonClick;
- (void)onAddFriendButtonClick;
- (void)onShareButtonClick;
- (void)onVoiceCallButtonClick;
- (void)onVideoCallButtonClick;
- (id)getDeviceConflictWording;
- (BOOL)checkExclusiveTaskCanStart;
- (void)onMessageButtonClick;
- (void)onButtonClick:(int)arg1;
- (BOOL)isShown;
- (void)hide;
- (void)showTopMsgOperaterProfileInView:(id)arg1;
- (void)realShowInView:(id)arg1 isTopMsgOperater:(BOOL)arg2;
- (void)showInView:(id)arg1;
- (void)sendGetAppBrandContact:(id)arg1;
- (void)sendGetOpenIMContact:(id)arg1 withGroupName:(id)arg2;
- (void)sendGetContactRequest:(id)arg1 withGroupName:(id)arg2;
- (int)checkContactProfileType;
- (void)setupMoreSettingData;
- (void)setupContact;
- (void)refreshModel:(id)arg1;
- (void)refreshRelateGroupCount;
- (void)setupModel:(id)arg1;
- (double)numberOfOpenIMCustomItem;
- (void)onCloseSubWindows;
- (void)fontSizeClassChanged:(id)arg1;
- (double)calTableViewContentHeight;
- (double)calContentWidthWithAdjustFont;
- (double)setupBodyView1:(double)arg1 maxHeight:(double)arg2 srollToEnd:(BOOL)arg3;
- (double)setupBodyView0:(double)arg1;
- (void)refreshUI:(BOOL)arg1;
- (double)setupUI;
- (double)setupHeadH:(double)arg1;
- (void)initUI;
- (void)setupPopoperView:(id)arg1;
- (void)initPopoverView;
- (void)viewChangedEffectiveAppearance;
- (void)unRegisterExt;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

