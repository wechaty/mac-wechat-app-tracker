//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "AccountServiceExt-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class MMUserExtInfosTextView, NSString;

@interface MMUserExtInfosViewerWindowController : NSWindowController <NSWindowDelegate, AccountServiceExt>
{
    MMUserExtInfosTextView *m_contentTextView;
    int m_type;
}

- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)onUserLogout;
- (void)viewDBCpInfoContent;
- (void)viewBrandDBFileInfoContent;
- (void)viewDBFileInfoContent;
- (void)viewConfigContent;
- (void)viewFavDBEssentialInfo;
- (void)viewSettingsHistory;
- (void)viewUpgradeHistory;
- (id)title;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)defaultParagraphStyle;
- (id)initWithUserExtInfosViewerType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

