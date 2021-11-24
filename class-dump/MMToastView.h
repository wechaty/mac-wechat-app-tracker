//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMView.h"

@class MMImageView, NSImageView, NSProgressIndicator, NSTextField, NSView;

@interface MMToastView : MMView
{
    NSView *_containerView;
    NSImageView *_imageView;
    NSProgressIndicator *_activityView;
    NSTextField *_textField;
    MMImageView *_loadingImageView;
    CDUnknownBlockType _didClickOnToastView;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didClickOnToastView; // @synthesize didClickOnToastView=_didClickOnToastView;
@property(retain, nonatomic) MMImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSProgressIndicator *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)updateToastWithText:(id)arg1 image:(id)arg2;
- (void)makeToastWithText:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)makeToastActivityWithText:(id)arg1 image:(id)arg2;
- (void)startAnimation;
- (void)makeToastActivityWithText:(id)arg1;
- (void)makeToastWithText:(id)arg1 duration:(double)arg2 image:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)makeToastWithText:(id)arg1 image:(id)arg2;
- (void)setupImaegViewWithImage:(id)arg1;
- (void)setupTextFieldForTextToast;
- (void)setupTextField:(id)arg1;
- (void)setupActivityView;
- (void)addBubbleMaskToView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

