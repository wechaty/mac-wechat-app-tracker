//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

#import "IContactMgrExt-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class MMChatDetailSingleViewController, MMChatMemberSingleViewController, MMChatMessageMaskView, NSButton, NSString, NSTextField, NSView, SVGButton, WCContactData;

@interface MMChatDetailSingleWindowController : MMWindowController <NSWindowDelegate, IContactMgrExt>
{
    WCContactData *_chatContact;
    NSString *_searchKey;
    NSView *_headerContainerView;
    NSTextField *_headerView;
    NSView *_divider;
    NSView *_detailContainer;
    NSButton *_mmCloseBtn;
    NSButton *_mmZoomButton;
    SVGButton *_detailButton;
    MMChatMessageMaskView *_maskView;
    MMChatMemberSingleViewController *_memberSingleViewController;
    MMChatDetailSingleViewController *_mmChatMessageViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMChatDetailSingleViewController *mmChatMessageViewController; // @synthesize mmChatMessageViewController=_mmChatMessageViewController;
@property(retain, nonatomic) MMChatMemberSingleViewController *memberSingleViewController; // @synthesize memberSingleViewController=_memberSingleViewController;
@property(retain, nonatomic) MMChatMessageMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) SVGButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) NSButton *mmZoomButton; // @synthesize mmZoomButton=_mmZoomButton;
@property(retain, nonatomic) NSButton *mmCloseBtn; // @synthesize mmCloseBtn=_mmCloseBtn;
@property(nonatomic) __weak NSView *detailContainer; // @synthesize detailContainer=_detailContainer;
@property(nonatomic) __weak NSView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) NSTextField *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(retain, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) WCContactData *chatContact; // @synthesize chatContact=_chatContact;
- (id)_genChatNameAttrString:(id)arg1;
- (void)setContact:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)closeMemberSingleView;
- (void)showWindow:(id)arg1;
- (void)pushWindow:(id)arg1;
- (void)close:(id)arg1;
- (void)doSomethingWhenUserLogout;
- (void)doSomethingWhenLocked;
- (void)cancel:(id)arg1;
- (void)onFullScreenZoomBtnClicked:(id)arg1;
- (void)toggleFullScreenWithSender:(id)arg1;
- (void)chatContactToggle:(id)arg1;
- (void)setupChatMessageView;
- (void)setUpContentView;
- (void)windowDidChangedEffectiveAppearance;
- (void)windowDidLoad;
- (void)windowDidResize:(id)arg1;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
