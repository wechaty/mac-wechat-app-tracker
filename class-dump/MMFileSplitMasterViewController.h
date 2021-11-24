//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTabViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, NSTableView, RFOverlayScrollView;
@protocol MMFileSplitMasterViewDelegate;

@interface MMFileSplitMasterViewController : NSViewController <NSTabViewDelegate, NSTableViewDataSource>
{
    BOOL _bInitialize;
    int _type;
    id <MMFileSplitMasterViewDelegate> _delegate;
    RFOverlayScrollView *_scrollView;
    NSTableView *_tableView;
    NSMutableArray *_groupArray;
    NSArray *_chatArray;
    NSDictionary *_contactDict;
    long long _numberRowInSection1;
    long long _numberRowInSection2;
    long long _lastSelectedIndex;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL bInitialize; // @synthesize bInitialize=_bInitialize;
@property(nonatomic) long long lastSelectedIndex; // @synthesize lastSelectedIndex=_lastSelectedIndex;
@property(nonatomic) long long numberRowInSection2; // @synthesize numberRowInSection2=_numberRowInSection2;
@property(nonatomic) long long numberRowInSection1; // @synthesize numberRowInSection1=_numberRowInSection1;
@property(retain, nonatomic) NSDictionary *contactDict; // @synthesize contactDict=_contactDict;
@property(retain, nonatomic) NSArray *chatArray; // @synthesize chatArray=_chatArray;
@property(retain, nonatomic) NSMutableArray *groupArray; // @synthesize groupArray=_groupArray;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak RFOverlayScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) __weak id <MMFileSplitMasterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)isCellViewValidInRow:(long long)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)getCurrentRowIndexPath:(long long)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)isHeaderInSection:(long long)arg1;
- (void)onCellViewClick:(long long)arg1;
- (void)onSectionHeaderClick:(long long)arg1 isFolder:(BOOL)arg2;
- (id)getKeyStringInSection:(long long)arg1;
- (void)reloadSplitLeftViewDataFromType:(int)arg1;
- (void)keyDown:(id)arg1;
- (void)getKeyEvent;
- (void)setupModel;
- (void)setupTableView;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

