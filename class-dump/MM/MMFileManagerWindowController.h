//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "AccountServiceExt-Protocol.h"
#import "MMCustomSearchFieldDelegate-Protocol.h"
#import "MMFileManagerExt-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class MMCustomSearchField, MMFileSearchViewController, MMFileTabBarViewController, MMIgnoreEventView, MMTimer, NSString, NSToolbar;

@interface MMFileManagerWindowController : NSWindowController <NSToolbarDelegate, AccountServiceExt, MMFileManagerExt, NSWindowDelegate, MMCustomSearchFieldDelegate>
{
    BOOL _isSearchMode;
    MMFileTabBarViewController *_tabbarVC;
    MMFileSearchViewController *_searchVC;
    NSToolbar *_toolBar;
    MMCustomSearchField *_searchField;
    MMIgnoreEventView *_loadingView;
    MMTimer *_loadingTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *loadingTimer; // @synthesize loadingTimer=_loadingTimer;
@property(retain, nonatomic) MMIgnoreEventView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) BOOL isSearchMode; // @synthesize isSearchMode=_isSearchMode;
@property(retain, nonatomic) MMCustomSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) NSToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) MMFileSearchViewController *searchVC; // @synthesize searchVC=_searchVC;
@property(retain, nonatomic) MMFileTabBarViewController *tabbarVC; // @synthesize tabbarVC=_tabbarVC;
- (void)stopLoadingTimer;
- (void)stopLoading;
- (void)onInitialIndexFinished;
- (void)onInitialIndexBegin;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)onUserLogout;
- (void)onSearchFiledDidEnd:(id)arg1;
- (void)onSearchFiledTextDidEndEditing:(id)arg1 info:(id)arg2;
- (void)onSearchFiledTextDidChange:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (void)enterSearchMode;
- (void)quitSearchMode;
- (void)setUpLoadingView;
- (void)setUpToolbar;
- (void)pushWindow:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)dealloc;
- (void)windowDidLoad;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
