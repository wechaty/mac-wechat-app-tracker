//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTraitsViewController.h"

#import "JWCTableViewDataSource-Protocol.h"
#import "JWCTableViewDelegate-Protocol.h"
#import "MMFileItemOPHandlerDelegate-Protocol.h"
#import "MMMultiSelectViewDelegate-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class JWCTableView, MMFileKeyIndexModel, MMFileListCellOPHandler, MMFileListDataSource, MMIgnoreEventView, MMMultiSelectView, MessageData, NSArray, NSImageView, NSPopUpButton, NSString, NSTextField, NSView, RFOverlayScrollView;
@protocol MMFileSplitListViewDelegate;

@interface MMFileListViewController : MMTraitsViewController <JWCTableViewDataSource, MMFileItemOPHandlerDelegate, JWCTableViewDelegate, NSTableViewDelegate, MMMultiSelectViewDelegate>
{
    BOOL _isMultiSelectedMode;
    int _totalSelectCount;
    id <MMFileSplitListViewDelegate> _delegate;
    NSArray *_keyWords;
    RFOverlayScrollView *_scrollView;
    JWCTableView *_tableView;
    NSTextField *_infoTextField;
    NSPopUpButton *_popUpBtn;
    NSView *_headerContainer;
    MMMultiSelectView *_multiSelectView;
    MessageData *_lastSelectedMsgData;
    long long _margin;
    NSTextField *_resultField;
    NSImageView *_logoImageView;
    unsigned long long _sortType;
    MMFileKeyIndexModel *_indexModel;
    MMFileListDataSource *_dataSource;
    MMFileListCellOPHandler *_fileItemHandler;
    long long _lastSelectedRow;
    id _keyEventMonitor;
    MMIgnoreEventView *_loadingView;
}

- (void).cxx_destruct;
@property(nonatomic) int totalSelectCount; // @synthesize totalSelectCount=_totalSelectCount;
@property(retain, nonatomic) MMIgnoreEventView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) id keyEventMonitor; // @synthesize keyEventMonitor=_keyEventMonitor;
@property(nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
@property(retain, nonatomic) MMFileListCellOPHandler *fileItemHandler; // @synthesize fileItemHandler=_fileItemHandler;
@property(retain, nonatomic) MMFileListDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MMFileKeyIndexModel *indexModel; // @synthesize indexModel=_indexModel;
@property(nonatomic) unsigned long long sortType; // @synthesize sortType=_sortType;
@property(nonatomic) __weak NSImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) __weak NSTextField *resultField; // @synthesize resultField=_resultField;
@property(nonatomic) long long margin; // @synthesize margin=_margin;
@property(retain, nonatomic) MessageData *lastSelectedMsgData; // @synthesize lastSelectedMsgData=_lastSelectedMsgData;
@property(nonatomic) BOOL isMultiSelectedMode; // @synthesize isMultiSelectedMode=_isMultiSelectedMode;
@property(retain, nonatomic) MMMultiSelectView *multiSelectView; // @synthesize multiSelectView=_multiSelectView;
@property(nonatomic) __weak NSView *headerContainer; // @synthesize headerContainer=_headerContainer;
@property(nonatomic) __weak NSPopUpButton *popUpBtn; // @synthesize popUpBtn=_popUpBtn;
@property(nonatomic) __weak NSTextField *infoTextField; // @synthesize infoTextField=_infoTextField;
@property(nonatomic) __weak JWCTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak RFOverlayScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *keyWords; // @synthesize keyWords=_keyWords;
@property(nonatomic) __weak id <MMFileSplitListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)isInPullUpVisiableRect;
- (void)performLoadMoreFromBottom;
- (void)onScrollViewBoundsDidChanged:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 hasHeaderViewForSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderViewForSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getCurrentIndexModel;
- (void)deleteFileList:(id)arg1;
- (id)getMultiSelectedFileMessageData;
- (void)dismissMultiSelectMode;
- (void)showMultiSelectMode;
- (void)onMultiSelectViewClick:(long long)arg1;
- (void)onContextMenuClick:(id)arg1 withMsgData:(id)arg2;
- (void)reportSortIDKey:(unsigned long long)arg1;
- (void)handlePopButton:(id)arg1;
- (BOOL)isMoreThanSelectMaxLimit:(int)arg1;
- (void)addSelectedRowCell;
- (void)removeSelectedRowCell;
- (void)getKeyEvent;
- (void)getNextResponserCellView:(BOOL)arg1;
- (void)getKeyReturnCellView;
- (void)mouseDown:(id)arg1;
- (void)removeEventMonitor;
- (void)setupKeyEventHandler;
- (void)resetSearchData;
- (BOOL)isCellViewValidInRow:(long long)arg1;
- (void)reloadSearchData:(id)arg1;
- (void)reloadData:(id)arg1;
- (void)clearData;
- (void)setupLoadingView;
- (void)setupTableView;
- (void)onMultiSelecteViewClick:(long long)arg1;
- (void)initViews;
- (void)initHandlers;
- (void)viewChangedEffectiveAppearance;
- (void)dealloc;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
