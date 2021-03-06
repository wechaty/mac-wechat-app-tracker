//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "IMainWindowExtensionsViewExt-Protocol.h"
#import "MASPreferencesViewController-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class MMITSwitch, NSButton, NSImage, NSMutableArray, NSMutableDictionary, NSScrollView, NSString, NSTableView, NSTextField;

@interface MMPreferencesNotificationController : NSViewController <MASPreferencesViewController, NSTableViewDelegate, NSTableViewDataSource, IMainWindowExtensionsViewExt>
{
    NSTextField *_msgNotificationLabel;
    NSTextField *_notificationTabLabel;
    NSTextField *_notifyPreviewLable;
    NSTextField *_showPreviewNotification;
    NSTextField *_notifySound;
    NSTextField *_notificationTabTips;
    NSTextField *_notificationPreviewTips;
    NSScrollView *_scrollView;
    NSTableView *_tableView;
    MMITSwitch *_notificationPreviewButton;
    MMITSwitch *_notificationSoundButton;
    NSButton *_goToPreferencesButton;
    NSMutableDictionary *_mainWindowExtensions;
    NSMutableArray *_availableExtensions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *availableExtensions; // @synthesize availableExtensions=_availableExtensions;
@property(retain, nonatomic) NSMutableDictionary *mainWindowExtensions; // @synthesize mainWindowExtensions=_mainWindowExtensions;
@property(nonatomic) __weak NSButton *goToPreferencesButton; // @synthesize goToPreferencesButton=_goToPreferencesButton;
@property(nonatomic) __weak MMITSwitch *notificationSoundButton; // @synthesize notificationSoundButton=_notificationSoundButton;
@property(nonatomic) __weak MMITSwitch *notificationPreviewButton; // @synthesize notificationPreviewButton=_notificationPreviewButton;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak NSTextField *notificationPreviewTips; // @synthesize notificationPreviewTips=_notificationPreviewTips;
@property(nonatomic) __weak NSTextField *notificationTabTips; // @synthesize notificationTabTips=_notificationTabTips;
@property(nonatomic) __weak NSTextField *notifySound; // @synthesize notifySound=_notifySound;
@property(nonatomic) __weak NSTextField *showPreviewNotification; // @synthesize showPreviewNotification=_showPreviewNotification;
@property(nonatomic) __weak NSTextField *notifyPreviewLable; // @synthesize notifyPreviewLable=_notifyPreviewLable;
@property(nonatomic) __weak NSTextField *notificationTabLabel; // @synthesize notificationTabLabel=_notificationTabLabel;
@property(nonatomic) __weak NSTextField *msgNotificationLabel; // @synthesize msgNotificationLabel=_msgNotificationLabel;
- (void)onMainWindowExtensionsChange;
@property(readonly, nonatomic) BOOL hasResizableHeight;
@property(readonly, nonatomic) BOOL hasResizableWidth;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)onClickNotificationExtesionButton:(unsigned int)arg1 andChecked:(BOOL)arg2;
- (void)onClickNotificationSoundButton;
- (void)onClickNotificationPreviewButton;
- (void)updateMainWindowExtensions;
- (void)setupViewByAvailableExtensions;
- (void)dealloc;
- (void)viewWillAppear;
- (void)viewDidLoad;
@property(readonly, nonatomic) NSImage *toolbarItemImage;
@property(readonly, nonatomic) NSString *toolbarItemLabel;
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

