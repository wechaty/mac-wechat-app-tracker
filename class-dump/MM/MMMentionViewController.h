//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewController.h"

#import "IGroupMgrExt-Protocol.h"
#import "MMTableViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSString;
@protocol MMMentionViewControllerDelegate;

@interface MMMentionViewController : MMViewController <NSTableViewDelegate, NSTableViewDataSource, MMTableViewDelegate, IGroupMgrExt>
{
    id <MMMentionViewControllerDelegate> _delegate;
    NSMutableArray *_contacts;
    NSMutableArray *_filteredData;
    NSString *_groupChatUserName;
    MMTableView *_tableView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *groupChatUserName; // @synthesize groupChatUserName=_groupChatUserName;
@property(retain, nonatomic) NSMutableArray *filteredData; // @synthesize filteredData=_filteredData;
@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) id <MMMentionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3;
- (void)OnAddGroupMember:(id)arg1 withStatus:(unsigned int)arg2 memberList:(id)arg3 contactList:(id)arg4;
- (void)filterWithKeyword:(id)arg1;
- (void)updateMentionDataWithChatContact:(id)arg1;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)chooseCurrentContact;
- (void)selectNextItem;
- (void)selectPrevItem;
- (void)hide;
- (double)suggestDisplayHeight;
- (void)showInView:(id)arg1 withRelativeRect:(struct CGRect)arg2;
- (BOOL)isValid;
- (BOOL)isDisplaying;
- (unsigned long long)filteredDataCount;
- (void)viewChangedEffectiveAppearance;
- (void)dealloc;
- (void)awakeFromNib;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
