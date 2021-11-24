//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

#import "MMCustomSearchFieldDelegate-Protocol.h"
#import "NSTabViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class MMCustomSearchField, MMTextField, NSMutableArray, NSString, NSTableView, NSToolbar, SVGButton;

@interface MMDynamicConfigWindowController : MMWindowController <NSWindowDelegate, NSTabViewDelegate, NSTableViewDataSource, MMCustomSearchFieldDelegate>
{
    BOOL _isSearchMode;
    NSToolbar *_toolBar;
    MMCustomSearchField *_searchField;
    SVGButton *_addButton;
    MMTextField *_titleField;
    NSTableView *_tableView;
    NSMutableArray *_dataSource;
    NSMutableArray *_searchResult;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isSearchMode; // @synthesize isSearchMode=_isSearchMode;
@property(retain, nonatomic) NSMutableArray *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMTextField *titleField; // @synthesize titleField=_titleField;
@property(retain, nonatomic) SVGButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) MMCustomSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) NSToolbar *toolBar; // @synthesize toolBar=_toolBar;
- (void)onSearchFiledDidEnd:(id)arg1;
- (void)onSearchFiledTextDidEndEditing:(id)arg1 info:(id)arg2;
- (void)onSearchFiledTextDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)onAddButtonButtonClick;
- (void)onSearchButtonClick;
- (void)setupSubviews;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

