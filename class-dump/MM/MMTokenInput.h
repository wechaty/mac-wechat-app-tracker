//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import "MMTokenSearchPopoverBackgroundViewDelegate-Protocol.h"
#import "MMTokenSearchViewControllerDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class MMTimer, MMTokenSearchViewController, NSString, RBLPopover;
@protocol MMTokenInputDelegate;

@interface MMTokenInput : NSTextField <MMTokenSearchViewControllerDelegate, MMTokenSearchPopoverBackgroundViewDelegate, NSTextFieldDelegate>
{
    BOOL _modifying;
    int _index;
    id <MMTokenInputDelegate> _mmDelegate;
    CDUnknownBlockType _didLeftMouseDownBlock;
    MMTokenSearchViewController *_tokenSearchViewController;
    RBLPopover *_tokenSearchPopover;
    MMTimer *_searchDelayTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *searchDelayTimer; // @synthesize searchDelayTimer=_searchDelayTimer;
@property(retain, nonatomic) RBLPopover *tokenSearchPopover; // @synthesize tokenSearchPopover=_tokenSearchPopover;
@property(retain, nonatomic) MMTokenSearchViewController *tokenSearchViewController; // @synthesize tokenSearchViewController=_tokenSearchViewController;
@property(copy, nonatomic) CDUnknownBlockType didLeftMouseDownBlock; // @synthesize didLeftMouseDownBlock=_didLeftMouseDownBlock;
@property(nonatomic) __weak id <MMTokenInputDelegate> mmDelegate; // @synthesize mmDelegate=_mmDelegate;
@property(nonatomic) BOOL modifying; // @synthesize modifying=_modifying;
@property(nonatomic) int index; // @synthesize index=_index;
- (id)baseTextAttributesWithSize;
- (id)formatStringText:(id)arg1;
- (struct CGSize)sizeForBackgroundViewWithContentSize:(struct CGSize)arg1 popoverEdge:(unsigned int)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)cancelOperation:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)hidePopover;
- (void)enterKeyup;
- (void)downArrowKeyup;
- (void)upArrowKeyup;
- (void)sizeAutoFixToAttributedString;
- (void)setStringValue:(id)arg1;
- (void)showInView:(id)arg1 withRelativeRect:(struct CGRect)arg2 preferredEdge:(unsigned int)arg3;
- (BOOL)isTokenSearchPopoverShown;
- (void)hideTokenSearchPopover;
- (void)_setupPopover;
- (void)didChooseItem:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)isStringValueExist;
- (void)doSearch;
- (void)stopTimer;
- (void)textDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
