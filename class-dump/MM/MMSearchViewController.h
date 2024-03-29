//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewController.h"

#import "AccountServiceExt-Protocol.h"
#import "MMSearchContactCellDelegate-Protocol.h"
#import "MMSearchFunctionCellDelegate-Protocol.h"
#import "MMSearchRecentItemChangedExt-Protocol.h"
#import "MMSearchTableCellViewDelegate-Protocol.h"
#import "MMSearchTableSectionAllViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "OpenIMResourceMgrExt-Protocol.h"

@class MMBaseSearchLogic, MMCustomSearchField, MMNoMenuTableView, MMSearchTrackView, MMSearchViewNoResult, MMTimer, NSArray, NSMutableDictionary, NSString, NSTextField, NSView, NSVisualEffectView, RBLPopover, RFOverlayScrollView;

@interface MMSearchViewController : MMViewController <NSTableViewDataSource, NSTableViewDelegate, AccountServiceExt, MMSearchTableSectionAllViewDelegate, OpenIMResourceMgrExt, MMSearchContactCellDelegate, MMSearchFunctionCellDelegate, MMSearchTableCellViewDelegate, MMSearchRecentItemChangedExt>
{
    BOOL _isShownFirstTimeBySearch;
    BOOL _isSearchFieldTextDidEndEditing;
    BOOL _choseResult;
    BOOL _isFirstSelectRow;
    BOOL _needShowFloatFooterView;
    unsigned long long _style;
    MMCustomSearchField *_searchField;
    unsigned long long _searchScene;
    RBLPopover *_popover;
    NSVisualEffectView *_effectView;
    NSView *_stageView;
    NSString *_keyword;
    MMTimer *_timer;
    NSString *_selectedID;
    NSArray *_showingSearchResults;
    MMBaseSearchLogic *_searchLogic;
    MMNoMenuTableView *_tableView;
    MMSearchViewNoResult *_noResultView;
    RFOverlayScrollView *_scrollView;
    id _mouseEvent;
    unsigned long long _subRanking;
    CDUnknownBlockType _mouseDidClickOutsideBlock;
    CDUnknownBlockType _didChooseContactBlock;
    CDUnknownBlockType _didChooseFavResultBlock;
    CDUnknownBlockType _didChooseViewItemInFavTabBlock;
    CDUnknownBlockType _didChooseChatLogResultBlock;
    CDUnknownBlockType _didCancelBlock;
    CDUnknownBlockType _didChooseWebSearchBlock;
    CDUnknownBlockType _willHideSearchViewBlock;
    long long _currentSelectedRow;
    MMTimer *_showResultTimer;
    NSArray *_allResults;
    unsigned long long _totalTableRowHeight;
    unsigned long long _lastSelectTime;
    NSMutableDictionary *_keyWordShowResultCountDic;
    MMSearchTrackView *_floatFooterView;
    NSTextField *_floatTitleField;
    struct _NSRange _visibleRectRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange visibleRectRange; // @synthesize visibleRectRange=_visibleRectRange;
@property(nonatomic) BOOL needShowFloatFooterView; // @synthesize needShowFloatFooterView=_needShowFloatFooterView;
@property(retain, nonatomic) NSTextField *floatTitleField; // @synthesize floatTitleField=_floatTitleField;
@property(retain, nonatomic) MMSearchTrackView *floatFooterView; // @synthesize floatFooterView=_floatFooterView;
@property(retain, nonatomic) NSMutableDictionary *keyWordShowResultCountDic; // @synthesize keyWordShowResultCountDic=_keyWordShowResultCountDic;
@property(nonatomic) BOOL isFirstSelectRow; // @synthesize isFirstSelectRow=_isFirstSelectRow;
@property(nonatomic) unsigned long long lastSelectTime; // @synthesize lastSelectTime=_lastSelectTime;
@property(nonatomic) unsigned long long totalTableRowHeight; // @synthesize totalTableRowHeight=_totalTableRowHeight;
@property(retain, nonatomic) NSArray *allResults; // @synthesize allResults=_allResults;
@property(nonatomic) BOOL choseResult; // @synthesize choseResult=_choseResult;
@property(nonatomic) BOOL isSearchFieldTextDidEndEditing; // @synthesize isSearchFieldTextDidEndEditing=_isSearchFieldTextDidEndEditing;
@property(nonatomic) BOOL isShownFirstTimeBySearch; // @synthesize isShownFirstTimeBySearch=_isShownFirstTimeBySearch;
@property(retain, nonatomic) MMTimer *showResultTimer; // @synthesize showResultTimer=_showResultTimer;
@property(nonatomic) long long currentSelectedRow; // @synthesize currentSelectedRow=_currentSelectedRow;
@property(copy, nonatomic) CDUnknownBlockType willHideSearchViewBlock; // @synthesize willHideSearchViewBlock=_willHideSearchViewBlock;
@property(copy, nonatomic) CDUnknownBlockType didChooseWebSearchBlock; // @synthesize didChooseWebSearchBlock=_didChooseWebSearchBlock;
@property(copy, nonatomic) CDUnknownBlockType didCancelBlock; // @synthesize didCancelBlock=_didCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType didChooseChatLogResultBlock; // @synthesize didChooseChatLogResultBlock=_didChooseChatLogResultBlock;
@property(copy, nonatomic) CDUnknownBlockType didChooseViewItemInFavTabBlock; // @synthesize didChooseViewItemInFavTabBlock=_didChooseViewItemInFavTabBlock;
@property(copy, nonatomic) CDUnknownBlockType didChooseFavResultBlock; // @synthesize didChooseFavResultBlock=_didChooseFavResultBlock;
@property(copy, nonatomic) CDUnknownBlockType didChooseContactBlock; // @synthesize didChooseContactBlock=_didChooseContactBlock;
@property(copy, nonatomic) CDUnknownBlockType mouseDidClickOutsideBlock; // @synthesize mouseDidClickOutsideBlock=_mouseDidClickOutsideBlock;
@property(nonatomic) unsigned long long subRanking; // @synthesize subRanking=_subRanking;
@property(retain, nonatomic) id mouseEvent; // @synthesize mouseEvent=_mouseEvent;
@property(nonatomic) __weak RFOverlayScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak MMSearchViewNoResult *noResultView; // @synthesize noResultView=_noResultView;
@property(nonatomic) __weak MMNoMenuTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMBaseSearchLogic *searchLogic; // @synthesize searchLogic=_searchLogic;
@property(retain, nonatomic) NSArray *showingSearchResults; // @synthesize showingSearchResults=_showingSearchResults;
@property(retain, nonatomic) NSString *selectedID; // @synthesize selectedID=_selectedID;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) __weak NSView *stageView; // @synthesize stageView=_stageView;
@property(retain, nonatomic) NSVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) RBLPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
@property(nonatomic) __weak MMCustomSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)onSearchRecentItemFolded;
- (void)onSearchRecentItemShowAll;
- (void)onSearchRecentItemDelete:(id)arg1;
- (void)onSearchRecentItemDeleteAll;
- (unsigned long long)findRecentHeaderIndex;
- (void)delayReportQueryHistoryRecentLog;
- (void)onScrollViewBoundsDidChanged:(id)arg1;
- (void)createFloatFooterView;
- (void)onUserLogout;
- (void)cellView:(id)arg1 onMouseBeforeSetSeleted:(id)arg2;
- (BOOL)canMouseEnterSetSelected:(id)arg1;
- (void)cellView:(id)arg1 dragOperation:(id)arg2 withContact:(id)arg3;
- (BOOL)cellView:(id)arg1 isValidOperation:(id)arg2 withContact:(id)arg3;
- (void)startAddFriendSearch;
- (void)startFavSearch;
- (void)startWebSearchWithKeyWord:(id)arg1;
- (void)startWebSearch;
- (void)startChooseContacts:(id)arg1;
- (void)mmSearchTableSectionAllViewDidClicked:(id)arg1;
- (void)reloadTableView;
- (void)OpenIMResourceWordingIds:(id)arg1 didFinish:(id)arg2;
- (void)searchFunctionCellView:(id)arg1;
- (void)chooseItem:(id)arg1;
- (void)singleClickOnTableView:(id)arg1;
- (void)setTableViewNotSelected;
- (void)updateSelectedRowDisplay:(BOOL)arg1;
- (void)_updateTableviewSelectionDisplay;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)handleSpecialSearchCommandWithResult:(id)arg1;
- (id)specialCommandResWithKeyword:(id)arg1;
- (void)closeSessionPreviewWindow;
- (BOOL)openCurrentSelectRowPreviewWindow;
- (void)openSessionPreviewWindow;
- (BOOL)isPopoverWindow;
- (void)setSelectRow:(unsigned long long)arg1;
- (void)selectAndScrollToRow:(long long)arg1 allUpdate:(BOOL)arg2;
- (BOOL)selectLeftItem;
- (BOOL)selectRightItem;
- (void)selectPreviousItem;
- (void)selectNextItem;
- (void)selectFirstItem;
- (void)chooseCurrentItem;
- (BOOL)hasHeaderItem:(id)arg1;
- (id)getSearchResultItem:(id)arg1 type:(unsigned long long)arg2;
- (void)setTableViewFirstItemSelected:(long long)arg1;
- (BOOL)shouldShowSearchFriendCell:(id)arg1;
- (id)handleMouseDown:(id)arg1;
- (void)showPopoverWindow;
- (double)calPopoverWidth;
- (double)calPopoverHeight;
- (double)estimateContentHeight;
- (void)setKeyWordShowResultCount;
- (id)getShowSearchResults:(id)arg1;
- (void)_doShowWithResults:(id)arg1;
- (void)doShowWithResults:(id)arg1;
- (void)showWithResults:(id)arg1 resultsWithKeyword:(id)arg2;
- (void)reportExposeSearchResult;
- (void)doSearch;
- (void)doSearchFindNewContact;
- (void)hide;
- (void)searchContactWithKeyword:(id)arg1 andShowInView:(id)arg2;
- (void)searchWithKeyword:(id)arg1 andShowInView:(id)arg2;
- (void)tellMeSearchFieldTextDidEndEditing;
- (void)awakeFromNib;
- (void)dealloc;
- (void)viewChangedEffectiveAppearance;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

