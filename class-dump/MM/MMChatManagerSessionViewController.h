//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "IMMSessionMgrExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "MMChatManagerTableCellViewDelegate-Protocol.h"
#import "MMTableViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class MMChatManagerDetailViewController, MMTableView, NSString, NSView;

@interface MMChatManagerSessionViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, MMTableViewDelegate, IMMSessionMgrExt, MMChatManagerTableCellViewDelegate, NSTextFieldDelegate, IMessageExt>
{
    NSString *_selectSession;
    CDUnknownBlockType _viewDidLoadBlock;
    MMChatManagerDetailViewController *_chatManagerDetailViewController;
    NSView *_containerView;
    MMTableView *_tableView;
    long long _lastSelectedRow;
    NSString *_selectedUserName;
    long long _selectRetryCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long selectRetryCount; // @synthesize selectRetryCount=_selectRetryCount;
@property(retain, nonatomic) NSString *selectedUserName; // @synthesize selectedUserName=_selectedUserName;
@property(nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property __weak NSView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak MMChatManagerDetailViewController *chatManagerDetailViewController; // @synthesize chatManagerDetailViewController=_chatManagerDetailViewController;
@property(copy, nonatomic) CDUnknownBlockType viewDidLoadBlock; // @synthesize viewDidLoadBlock=_viewDidLoadBlock;
@property(retain, nonatomic) NSString *selectSession; // @synthesize selectSession=_selectSession;
- (void)handleAppFontSize;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2 isRevoke:(BOOL)arg3;
- (id)getSearchKeyWordsByString:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)selectClickSession;
- (void)reloadData;
- (void)viewDidAppear;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
