//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTraitsViewController.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class MMButton, MMOutlineButton, NSImageView, NSMutableArray, NSString, NSTableCellView, NSTableView, NSTextField, NSView, RFOverlayScrollView, SVGButton, SolitaireObj, WCContactData;

@interface MMSolitaireDetailViewController : MMTraitsViewController <NSTableViewDelegate, NSTableViewDataSource, NSTextFieldDelegate>
{
    BOOL _bContentChanged;
    int _solitaireOpenType;
    CDUnknownBlockType _sendSolitaireMsg;
    SolitaireObj *_solitaireObj;
    WCContactData *_curChatContact;
    NSImageView *_avtartImageView;
    NSTextField *_descLabel;
    NSView *_contentTextContainerView;
    RFOverlayScrollView *_contentScrollView;
    NSTextField *_contentTextField;
    RFOverlayScrollView *_scrollView;
    NSTableView *_tableView;
    SVGButton *_addSolitaireMsgButton;
    MMButton *_remarkButton;
    NSView *_remarkTextContainerView;
    RFOverlayScrollView *_remarkScrollView;
    NSTextField *_addRemarkTipsTextField;
    MMOutlineButton *_sendSolitaireMsgButton;
    MMOutlineButton *_cancelSolitaireMsgButton;
    NSTableCellView *_solitaireCellView;
    NSMutableArray *_solitaireDataItemArray;
    double _headerH;
    double _footerH;
}

- (void).cxx_destruct;
@property(nonatomic) double footerH; // @synthesize footerH=_footerH;
@property(nonatomic) double headerH; // @synthesize headerH=_headerH;
@property(nonatomic) BOOL bContentChanged; // @synthesize bContentChanged=_bContentChanged;
@property(retain, nonatomic) NSMutableArray *solitaireDataItemArray; // @synthesize solitaireDataItemArray=_solitaireDataItemArray;
@property(retain) NSTableCellView *solitaireCellView; // @synthesize solitaireCellView=_solitaireCellView;
@property(retain, nonatomic) MMOutlineButton *cancelSolitaireMsgButton; // @synthesize cancelSolitaireMsgButton=_cancelSolitaireMsgButton;
@property(retain, nonatomic) MMOutlineButton *sendSolitaireMsgButton; // @synthesize sendSolitaireMsgButton=_sendSolitaireMsgButton;
@property(retain, nonatomic) NSTextField *addRemarkTipsTextField; // @synthesize addRemarkTipsTextField=_addRemarkTipsTextField;
@property(retain, nonatomic) RFOverlayScrollView *remarkScrollView; // @synthesize remarkScrollView=_remarkScrollView;
@property __weak NSView *remarkTextContainerView; // @synthesize remarkTextContainerView=_remarkTextContainerView;
@property(retain, nonatomic) MMButton *remarkButton; // @synthesize remarkButton=_remarkButton;
@property __weak SVGButton *addSolitaireMsgButton; // @synthesize addSolitaireMsgButton=_addSolitaireMsgButton;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property __weak RFOverlayScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSTextField *contentTextField; // @synthesize contentTextField=_contentTextField;
@property(retain, nonatomic) RFOverlayScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property __weak NSView *contentTextContainerView; // @synthesize contentTextContainerView=_contentTextContainerView;
@property __weak NSTextField *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) NSImageView *avtartImageView; // @synthesize avtartImageView=_avtartImageView;
@property(retain, nonatomic) WCContactData *curChatContact; // @synthesize curChatContact=_curChatContact;
@property(retain, nonatomic) SolitaireObj *solitaireObj; // @synthesize solitaireObj=_solitaireObj;
@property(nonatomic) int solitaireOpenType; // @synthesize solitaireOpenType=_solitaireOpenType;
@property(copy, nonatomic) CDUnknownBlockType sendSolitaireMsg; // @synthesize sendSolitaireMsg=_sendSolitaireMsg;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)cellNoteHeightReload:(id)arg1;
- (void)tableViewScrollToBottom;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)getTrimmedSoliatireArray;
- (id)getNewItemContent;
- (void)checkRemoveNoCotentSolitaireItem;
- (void)checkHiddenAddButtonIfNeeded;
- (void)makeLastTableRowBecomeFirstResponse;
- (void)addSolitaireMsg:(id)arg1;
- (void)checkContentStatus;
- (BOOL)isContentChanged;
- (void)onCancelButtonClick;
- (void)sendSolitaire;
- (void)onSendButtonClick;
- (void)onRemarkButtonClick;
- (void)adjustScrollViewAndWindowFrame:(BOOL)arg1;
- (void)updateScrollViewAndWindowFrame;
- (void)adjustHeaderFooterFrame;
- (void)updateHeaderFooterStatus;
- (void)updateDescContent;
- (void)setupButtonView;
- (void)setupFooterView;
- (void)setupBodyView;
- (void)setupHeaderView;
- (void)viewDidAppear;
- (void)viewChangedEffectiveAppearance;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

