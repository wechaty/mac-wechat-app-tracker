//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

#import "MMCustomSearchFieldDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class MMChatManagerDetailViewController, MMChatManagerSessionViewController, MMCustomSearchField, NSImageView, NSProgressIndicator, NSString, NSTextField, NSView;

@interface MMGlobalChatManagerWindowController : MMWindowController <NSWindowDelegate, MMCustomSearchFieldDelegate>
{
    NSView *_headerView;
    NSTextField *_headLabel;
    NSView *_globalDetailContainer;
    MMCustomSearchField *_globalSearchField;
    NSView *_sessionView;
    NSView *_chatDetailView;
    MMChatManagerDetailViewController *_globalChatManagerDetailViewController;
    MMChatManagerSessionViewController *_chatManagerSessionViewController;
    NSView *_noGlobalRecordsView;
    NSImageView *_wechatLogoImageView;
    NSView *_globalResultView;
    NSView *_horizontalDivider;
    NSView *_verticalDivider;
    NSTextField *_noRecordsTipTextField;
    id _mouseEvent;
    NSProgressIndicator *_loadingProgressIndicator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSProgressIndicator *loadingProgressIndicator; // @synthesize loadingProgressIndicator=_loadingProgressIndicator;
@property(retain, nonatomic) id mouseEvent; // @synthesize mouseEvent=_mouseEvent;
@property __weak NSTextField *noRecordsTipTextField; // @synthesize noRecordsTipTextField=_noRecordsTipTextField;
@property __weak NSView *verticalDivider; // @synthesize verticalDivider=_verticalDivider;
@property __weak NSView *horizontalDivider; // @synthesize horizontalDivider=_horizontalDivider;
@property __weak NSView *globalResultView; // @synthesize globalResultView=_globalResultView;
@property(nonatomic) __weak NSImageView *wechatLogoImageView; // @synthesize wechatLogoImageView=_wechatLogoImageView;
@property(retain, nonatomic) NSView *noGlobalRecordsView; // @synthesize noGlobalRecordsView=_noGlobalRecordsView;
@property(retain, nonatomic) MMChatManagerSessionViewController *chatManagerSessionViewController; // @synthesize chatManagerSessionViewController=_chatManagerSessionViewController;
@property(retain, nonatomic) MMChatManagerDetailViewController *globalChatManagerDetailViewController; // @synthesize globalChatManagerDetailViewController=_globalChatManagerDetailViewController;
@property(nonatomic) __weak NSView *chatDetailView; // @synthesize chatDetailView=_chatDetailView;
@property(nonatomic) __weak NSView *sessionView; // @synthesize sessionView=_sessionView;
@property(retain, nonatomic) MMCustomSearchField *globalSearchField; // @synthesize globalSearchField=_globalSearchField;
@property(nonatomic) __weak NSView *globalDetailContainer; // @synthesize globalDetailContainer=_globalDetailContainer;
@property(nonatomic) __weak NSTextField *headLabel; // @synthesize headLabel=_headLabel;
@property __weak NSView *headerView; // @synthesize headerView=_headerView;
- (void)onSearchFiledTextDidChange:(id)arg1;
- (void)onSearchFiledTextDidEndEditing:(id)arg1 info:(id)arg2;
- (void)onSearchFiledDidEnd:(id)arg1;
- (void)shouldShowNoGlobalResultsView:(unsigned char)arg1;
- (void)windowWillClose:(id)arg1;
- (void)pushWindow:(id)arg1 withKey:(id)arg2 selectSession:(id)arg3;
- (void)windowDidChangedEffectiveAppearance;
- (void)stopLoading;
- (void)startLoading;
- (void)setupProgressIndicator;
- (struct CGSize)getWindowSize;
- (void)handleAppFontSize;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

