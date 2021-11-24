//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MMWebViewCustomSlider, NSTextField;
@protocol BaseWebViewFontAdjustDelegate, MMWebViewFontAdjustControllerDelegate;

@interface MMWebViewFontAdjustController : NSViewController
{
    id <BaseWebViewFontAdjustDelegate> _delegate;
    id <MMWebViewFontAdjustControllerDelegate> _adjustDelegate;
    MMWebViewCustomSlider *_fontSizeSlider;
    NSTextField *_minSizeLabel;
    NSTextField *_standardSizeLabel;
    NSTextField *_maxSizeLabel;
}

- (void).cxx_destruct;
@property __weak NSTextField *maxSizeLabel; // @synthesize maxSizeLabel=_maxSizeLabel;
@property __weak NSTextField *standardSizeLabel; // @synthesize standardSizeLabel=_standardSizeLabel;
@property __weak NSTextField *minSizeLabel; // @synthesize minSizeLabel=_minSizeLabel;
@property(retain, nonatomic) MMWebViewCustomSlider *fontSizeSlider; // @synthesize fontSizeSlider=_fontSizeSlider;
@property(nonatomic) __weak id <MMWebViewFontAdjustControllerDelegate> adjustDelegate; // @synthesize adjustDelegate=_adjustDelegate;
@property(nonatomic) __weak id <BaseWebViewFontAdjustDelegate> delegate; // @synthesize delegate=_delegate;
- (void)changeSliderValue:(int)arg1 withNewFontSize:(BOOL)arg2;
- (void)changeSliderValue:(int)arg1;
- (void)newFontSizeChanged:(id)arg1;
- (void)changeWebviewFontSize;
- (int)currentWebviewFontSize;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

