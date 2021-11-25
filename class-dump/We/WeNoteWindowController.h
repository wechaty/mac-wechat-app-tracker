//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

#import "NSWindowDelegate-Protocol.h"

@class FavoritesItem, MMFavBrowseDetailReportData, MMMediumDivider, MMWindow, MessageData, NSButton, NSString, NSTextField, NSView, SVGButton, WeNoteArticleToolBar, WeNoteDetailViewController;
@protocol WeNoteWindowControllerDelegate;

@interface WeNoteWindowController : MMWindowController <NSWindowDelegate>
{
    WeNoteDetailViewController *m_detailViewController;
    BOOL m_isOnClosing;
    BOOL _isFullScreen;
    NSString *_identifier;
    id <WeNoteWindowControllerDelegate> _delegate;
    WeNoteArticleToolBar *_toolBar;
    MMFavBrowseDetailReportData *_reportData;
    MessageData *_parentMsg;
    FavoritesItem *_parentFavItem;
    NSButton *_mmCloseButton;
    NSButton *_mmFullScreenButton;
    NSView *_toolBarBgContainer;
    NSView *_toolBarContainer;
    NSView *_titleBarBkView;
    MMMediumDivider *_divider;
    NSTextField *_titleTextView;
    NSView *_backgroundView;
    NSView *_windowControlContainer;
    NSView *_noteDetailViewContainer;
    NSTextField *_syncStatusWordingLabel;
    SVGButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SVGButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSTextField *syncStatusWordingLabel; // @synthesize syncStatusWordingLabel=_syncStatusWordingLabel;
@property(retain) NSView *noteDetailViewContainer; // @synthesize noteDetailViewContainer=_noteDetailViewContainer;
@property(retain) NSView *windowControlContainer; // @synthesize windowControlContainer=_windowControlContainer;
@property(retain) NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) NSTextField *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain) MMMediumDivider *divider; // @synthesize divider=_divider;
@property(retain) NSView *titleBarBkView; // @synthesize titleBarBkView=_titleBarBkView;
@property(retain) NSView *toolBarContainer; // @synthesize toolBarContainer=_toolBarContainer;
@property __weak NSView *toolBarBgContainer; // @synthesize toolBarBgContainer=_toolBarBgContainer;
@property(nonatomic) BOOL isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) NSButton *mmFullScreenButton; // @synthesize mmFullScreenButton=_mmFullScreenButton;
@property(retain, nonatomic) NSButton *mmCloseButton; // @synthesize mmCloseButton=_mmCloseButton;
@property(retain, nonatomic) FavoritesItem *parentFavItem; // @synthesize parentFavItem=_parentFavItem;
@property(retain, nonatomic) MessageData *parentMsg; // @synthesize parentMsg=_parentMsg;
@property(retain, nonatomic) MMFavBrowseDetailReportData *reportData; // @synthesize reportData=_reportData;
@property(retain, nonatomic) WeNoteArticleToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(nonatomic) __weak id <WeNoteWindowControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)initSyncStatusWordingLabel;
- (void)showAnimateSyncStatusTipsWording:(id)arg1 delayHidden:(BOOL)arg2 dotCount:(unsigned int)arg3;
- (void)doSomethingWhenUserLogout;
- (void)doSomethingWhenLocked;
- (void)onDetailViewSuperWindowShouldClose;
- (void)alertOnDeleteNote:(id)arg1;
- (void)resetParentFavItemOnConflict;
- (void)backupOnAppTerminate;
- (void)setupKeyDownHandler;
- (void)toggleFullScreenWithSender:(id)arg1;
- (void)delayDeleteEmptyNote:(id)arg1;
- (void)deleteEmptyNote:(id)arg1;
- (void)closeWithoutSave:(id)arg1;
- (void)delayCleanInstance;
- (void)closeWithSender:(id)arg1;
- (id)getCurrentTitleStr;
- (void)setupTitle:(id)arg1;
- (void)initTitleTextView;
- (void)share;
- (void)initToolBarWithNoteState:(int)arg1;
- (void)layoutReadOnlyModeToolBarView;
- (void)windowWillClose:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)onApplicationDidResignActive:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)windowDidChangedEffectiveAppearance;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithParentMsg:(id)arg1 orParentFavItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) MMWindow *window; // @dynamic window;

@end
