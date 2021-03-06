//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTraitsViewController.h"

#import "NSPopoverDelegate-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"

@class NSAttributedString, NSPopover, NSScrollView, NSString, NSTextField, NSTextView;
@protocol MMContactProfileControllerDelegate;

@interface MMProfileTagDetailController : MMTraitsViewController <NSPopoverDelegate, NSTextViewDelegate>
{
    BOOL _isSupportCopy;
    id <MMContactProfileControllerDelegate> _delegate;
    NSString *_titleDesc;
    NSString *_plainText;
    NSAttributedString *_contentAtrStr;
    unsigned long long _rectEdge;
    double _contentW;
    double _contentH;
    NSString *_extraStr;
    long long _behavior;
    NSTextField *_titleTextField;
    NSTextView *_textField;
    NSPopover *_popover;
    NSScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) NSTextView *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property long long behavior; // @synthesize behavior=_behavior;
@property(copy, nonatomic) NSString *extraStr; // @synthesize extraStr=_extraStr;
@property(nonatomic) BOOL isSupportCopy; // @synthesize isSupportCopy=_isSupportCopy;
@property(nonatomic) double contentH; // @synthesize contentH=_contentH;
@property(nonatomic) double contentW; // @synthesize contentW=_contentW;
@property(nonatomic) unsigned long long rectEdge; // @synthesize rectEdge=_rectEdge;
@property(copy, nonatomic) NSAttributedString *contentAtrStr; // @synthesize contentAtrStr=_contentAtrStr;
@property(copy, nonatomic) NSString *plainText; // @synthesize plainText=_plainText;
@property(copy, nonatomic) NSString *titleDesc; // @synthesize titleDesc=_titleDesc;
@property(nonatomic) __weak id <MMContactProfileControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)hide;
- (void)showInView:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)setupPopover;
- (void)dealloc;
- (void)viewChangedEffectiveAppearance;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

