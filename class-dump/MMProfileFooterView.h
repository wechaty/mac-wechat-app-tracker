//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class SVGButton;

@interface MMProfileFooterView : NSView
{
    CDUnknownBlockType _didButtonClick;
    SVGButton *_leftButton;
    SVGButton *_rightButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SVGButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) SVGButton *leftButton; // @synthesize leftButton=_leftButton;
@property(copy, nonatomic) CDUnknownBlockType didButtonClick; // @synthesize didButtonClick=_didButtonClick;
- (void)onButtonClick:(id)arg1;
- (void)updateUI:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

