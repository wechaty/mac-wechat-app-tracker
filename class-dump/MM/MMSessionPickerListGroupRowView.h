//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPSelectionBaseRowView.h"

@class MMView, NSString, NSTextField;

@interface MMSessionPickerListGroupRowView : SPSelectionBaseRowView
{
    NSString *_title;
    NSTextField *_titleField;
    MMView *_bgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;

@end

