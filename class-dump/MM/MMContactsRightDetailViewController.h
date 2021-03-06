//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MMCustomSearchFieldDelegate-Protocol.h"

@class MMContactsListViewController, MMCustomSearchField, NSString, NSTextField;
@protocol MMContactsDetailViewControllerDelegate;

@interface MMContactsRightDetailViewController : NSViewController <MMCustomSearchFieldDelegate>
{
    BOOL _isSearch;
    id <MMContactsDetailViewControllerDelegate> _delegate;
    MMContactsListViewController *_listVC;
    NSTextField *_titleFiled;
    MMCustomSearchField *_searchField;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isSearch; // @synthesize isSearch=_isSearch;
@property(retain, nonatomic) MMCustomSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) NSTextField *titleFiled; // @synthesize titleFiled=_titleFiled;
@property(retain, nonatomic) MMContactsListViewController *listVC; // @synthesize listVC=_listVC;
@property(nonatomic) __weak id <MMContactsDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSearchFiledDidEnd:(id)arg1;
- (void)onSearchFiledTextDidChange:(id)arg1;
- (BOOL)isSearchMode;
- (BOOL)isSelectMode;
- (BOOL)isRunModal;
- (void)reloadData;
- (void)clearData;
- (void)addMembersWithTag:(id)arg1;
- (void)reloadDataWith:(id)arg1;
- (void)setHiddenSearchField:(BOOL)arg1;
- (void)enterSearchMode;
- (void)quitSearchMode;
- (void)setupListViewController;
- (void)setupSearchView;
- (void)setupTitleField;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

