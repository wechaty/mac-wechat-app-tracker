//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTraitsViewController.h"

#import "IContactMgrExt-Protocol.h"
#import "MMContactsBatchModifyLogicDelegate-Protocol.h"
#import "MMContactsMgrExt-Protocol.h"
#import "MMContactsRowViewDelegate-Protocol.h"
#import "MMContactsToolBarDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class CAShapeLayer, MMContactsBatchModifyLogic, MMContactsDataSource, MMContactsModel, MMContactsToolBarView, MMOutlineButton, NSImageView, NSMutableDictionary, NSRecursiveLock, NSSortDescriptor, NSString, NSTableView, NSTextField, RFOverlayScrollView, WCContactData;

@interface MMContactsListViewController : MMTraitsViewController <NSTableViewDataSource, NSTableViewDelegate, MMContactsToolBarDelegate, MMContactsMgrExt, IContactMgrExt, MMContactsBatchModifyLogicDelegate, MMContactsRowViewDelegate>
{
    BOOL _beginDragging;
    BOOL _enterShift;
    BOOL _isSearch;
    BOOL _runModal;
    int _lastSortType;
    RFOverlayScrollView *_scrollView;
    NSTableView *_tableView;
    NSImageView *_logoImageView;
    MMContactsToolBarView *_toolbarContainer;
    NSTextField *_resultTextField;
    MMOutlineButton *_addMemberButton;
    MMContactsDataSource *_dataSource;
    MMContactsBatchModifyLogic *_batchModifyTypeLogic;
    long long _mode;
    NSMutableDictionary *_selectedContacts;
    NSRecursiveLock *_lock;
    id _userActiveEvent;
    CAShapeLayer *_shapeLayer;
    long long _lastSelectedRow;
    WCContactData *_handleContact;
    NSSortDescriptor *_sortDescriptor;
    MMContactsModel *_preContactModel;
    unsigned long long _opScene;
    struct CGPoint _eventPoint;
    struct CGPoint _dragStartPoint;
    struct CGRect _draggedRect;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long opScene; // @synthesize opScene=_opScene;
@property(nonatomic) BOOL runModal; // @synthesize runModal=_runModal;
@property(retain, nonatomic) MMContactsModel *preContactModel; // @synthesize preContactModel=_preContactModel;
@property(retain, nonatomic) NSSortDescriptor *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
@property(nonatomic) int lastSortType; // @synthesize lastSortType=_lastSortType;
@property(retain, nonatomic) WCContactData *handleContact; // @synthesize handleContact=_handleContact;
@property(nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
@property(nonatomic) BOOL isSearch; // @synthesize isSearch=_isSearch;
@property(nonatomic) BOOL enterShift; // @synthesize enterShift=_enterShift;
@property(nonatomic) BOOL beginDragging; // @synthesize beginDragging=_beginDragging;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) struct CGRect draggedRect; // @synthesize draggedRect=_draggedRect;
@property(nonatomic) struct CGPoint dragStartPoint; // @synthesize dragStartPoint=_dragStartPoint;
@property(nonatomic) struct CGPoint eventPoint; // @synthesize eventPoint=_eventPoint;
@property(retain, nonatomic) id userActiveEvent; // @synthesize userActiveEvent=_userActiveEvent;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *selectedContacts; // @synthesize selectedContacts=_selectedContacts;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) MMContactsBatchModifyLogic *batchModifyTypeLogic; // @synthesize batchModifyTypeLogic=_batchModifyTypeLogic;
@property(retain, nonatomic) MMContactsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MMOutlineButton *addMemberButton; // @synthesize addMemberButton=_addMemberButton;
@property(retain, nonatomic) NSTextField *resultTextField; // @synthesize resultTextField=_resultTextField;
@property(retain, nonatomic) MMContactsToolBarView *toolbarContainer; // @synthesize toolbarContainer=_toolbarContainer;
@property(nonatomic) __weak NSImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak RFOverlayScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)handleBatchFailed:(id)arg1 errMsg:(id)arg2 type:(unsigned int)arg3;
- (void)handleBatchSuccess:(id)arg1 type:(unsigned int)arg2;
- (void)handleMenuSuccessWithType:(unsigned int)arg1;
- (void)handleMenuFailedWithType:(unsigned int)arg1 withErrMsg:(id)arg2;
- (void)onContactsBatchModify:(id)arg1 ret:(unsigned int)arg2 errorMsg:(id)arg3 type:(unsigned int)arg4 scene:(long long)arg5;
- (void)onContactsBatchModifyNeedQRCode:(unsigned int)arg1 dataBuffer:(id)arg2 type:(unsigned int)arg3 scene:(long long)arg4;
- (void)onContactsPrivacyFinishSetting:(id)arg1 scene:(int)arg2 withContact:(id)arg3;
- (void)onModifyContacts:(id)arg1;
- (void)onDeleteContacts:(id)arg1;
- (void)onContactsTagMgrFinishEdit;
- (void)onContactsPreviewSelectedContact:(id)arg1 bSelected:(BOOL)arg2;
- (void)onContactsCellRemoveTagDidClick:(id)arg1;
- (void)onContactsCellModifyDidClick:(id)arg1;
- (void)onContactsCellDeleteDidClick:(id)arg1;
- (void)onContactsCellAddTagDidClick:(id)arg1;
- (void)onContactsCellViewDidClick:(id)arg1 withType:(long long)arg2 bOn:(BOOL)arg3;
- (void)onContactsCellIsNotSupport;
- (void)clearCellView:(long long)arg1;
- (long long)getCurrentSortType;
- (void)onDeSelectAllButtonClick;
- (void)onSelectAllButtonClick;
- (void)onToolBarClearButtonClick;
- (void)onShowPrivacyWindowController:(id)arg1;
- (void)onToolBarAddMemberButtonClick:(id)arg1;
- (void)onToolBarRemoveButtonClick:(id)arg1;
- (void)onToolBarModifyButtonClick:(id)arg1;
- (void)onToolBarDeleteButtonClick:(id)arg1;
- (void)onToolBarAddTagButtonClick:(id)arg1;
- (BOOL)isInPullUpVisiableRect;
- (void)performLoadMoreFromBottom;
- (void)onScrollViewBoundsDidChanged:(id)arg1;
- (void)onContactTableCellClick:(long long)arg1 withContact:(id)arg2;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)isSupportSettingPrivacy:(id)arg1;
- (void)removeUnSupportContacts;
- (id)filterUnSupportContact;
- (id)getCurrentSelectedContacts;
- (long long)getCurrentSelectedContactsCount;
- (void)clearSearchData;
- (void)reportSearchResult;
- (void)doSearch:(id)arg1;
- (void)refreshDataIfNeeded;
- (void)startReloadData;
- (BOOL)reloadDataWithTagID:(id)arg1;
- (BOOL)reloadDataWithSessionInfo:(id)arg1;
- (BOOL)reloadDataAllContacts:(id)arg1;
- (void)showEmptyTagTip;
- (void)clearData;
- (void)addMembersWithTag:(id)arg1;
- (void)onAddMemberButtonClick;
- (BOOL)dragFarEnough:(struct CGPoint)arg1 from:(struct CGPoint)arg2;
- (struct CGRect)dragValidBounds;
- (BOOL)locationInsideTableView:(struct CGPoint)arg1;
- (void)handleOutsideEventDuringDragging:(id)arg1;
- (void)handleEventDuringDragging:(id)arg1;
- (void)handleEventBeforeDragging:(id)arg1;
- (id)handleLeftMouseDragged:(id)arg1;
- (void)shiftEnterSelectedCellView:(id)arg1;
- (void)mouseDragSelectedCellView;
- (id)handleLeftMouseUp:(id)arg1;
- (id)handleLeftMouseDown:(id)arg1;
- (void)initViews;
- (void)animateFooterView:(BOOL)arg1;
- (void)setupToolBarContainer;
- (id)formatColumnCellContent:(id)arg1;
- (id)updateFirstColumnCellContent;
- (void)setupTableView;
- (void)setupModel;
- (void)dealloc;
- (BOOL)isSearchMode;
- (BOOL)isSelectMode;
- (BOOL)isRunModal;
- (void)mouseDown:(id)arg1;
- (void)viewChangedEffectiveAppearance;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
