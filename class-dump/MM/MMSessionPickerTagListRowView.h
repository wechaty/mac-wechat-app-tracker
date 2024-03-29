//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPSelectionBaseRowView.h"

@class MMDivider, NSTextField, NSTrackingArea, SVGButton;

@interface MMSessionPickerTagListRowView : SPSelectionBaseRowView
{
    BOOL _highlighted;
    NSTrackingArea *_trackingArea;
    long long trackingTag;
    BOOL _isSingleChoice;
    BOOL _preSelected;
    BOOL _disabled;
    BOOL _keyboardFocused;
    id _target;
    SEL _action;
    id _context;
    SVGButton *_checkbox;
    NSTextField *_tagTitleField;
    NSTextField *_tagContentField;
    MMDivider *_divider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMDivider *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) NSTextField *tagContentField; // @synthesize tagContentField=_tagContentField;
@property(retain, nonatomic) NSTextField *tagTitleField; // @synthesize tagTitleField=_tagTitleField;
@property(retain, nonatomic) SVGButton *checkbox; // @synthesize checkbox=_checkbox;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) BOOL keyboardFocused; // @synthesize keyboardFocused=_keyboardFocused;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) BOOL preSelected; // @synthesize preSelected=_preSelected;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) BOOL isSingleChoice; // @synthesize isSingleChoice=_isSingleChoice;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
- (void)setupWithSessionPickerRow:(id)arg1 keyword:(id)arg2;
- (void)_callDelegate;
- (void)checkboxChecked:(id)arg1;
@property(nonatomic) BOOL chosen;
- (id)currentBgColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewDidMoveToSuperview;
- (void)prepareForReuse;
- (void)_commonInit;
- (void)initViews;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

