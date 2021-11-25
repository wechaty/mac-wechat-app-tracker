//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

#import "NSWindowDelegate-Protocol.h"

@class MMContactsPrivacyContainerView, MMOutlineButton, NSMutableDictionary, NSString, NSTextField, WCContactData;

@interface MMContactsPrivacyWindowController : MMWindowController <NSWindowDelegate>
{
    BOOL _bUnFolder;
    WCContactData *_oContact;
    long long _scene;
    MMOutlineButton *_confirmButton;
    MMOutlineButton *_cancelButton;
    NSTextField *_firstSectionName;
    NSTextField *_secdSectionName;
    MMContactsPrivacyContainerView *_firstContainer;
    MMContactsPrivacyContainerView *_secdContainer;
    NSMutableDictionary *_cellViews;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL bUnFolder; // @synthesize bUnFolder=_bUnFolder;
@property(retain, nonatomic) NSMutableDictionary *cellViews; // @synthesize cellViews=_cellViews;
@property(retain, nonatomic) MMContactsPrivacyContainerView *secdContainer; // @synthesize secdContainer=_secdContainer;
@property(retain, nonatomic) MMContactsPrivacyContainerView *firstContainer; // @synthesize firstContainer=_firstContainer;
@property(retain, nonatomic) NSTextField *secdSectionName; // @synthesize secdSectionName=_secdSectionName;
@property(retain, nonatomic) NSTextField *firstSectionName; // @synthesize firstSectionName=_firstSectionName;
@property(retain, nonatomic) MMOutlineButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMOutlineButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCContactData *oContact; // @synthesize oContact=_oContact;
- (void)keyDown:(id)arg1;
- (void)onConfirmButtonClick:(id)arg1;
- (void)onCancleButtonClick:(id)arg1;
- (void)didCellViewClick:(id)arg1;
- (void)setHiddenSubviews:(BOOL)arg1;
- (void)relayoutSubviewIfNeeded;
- (void)setupCellViewModel;
- (void)setupCellView;
- (void)setupSubview;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (void)showWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
