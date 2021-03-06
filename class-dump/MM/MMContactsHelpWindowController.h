//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

@class MMTimer, NSData, NSImageView, NSTextField, SVGImageView;

@interface MMContactsHelpWindowController : MMWindowController
{
    NSData *_antiSpamBuffer;
    SVGImageView *_iconImageView;
    NSTextField *_titleTextField;
    NSTextField *_descTextField;
    NSImageView *_qrImageView;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSImageView *qrImageView; // @synthesize qrImageView=_qrImageView;
@property(retain, nonatomic) NSTextField *descTextField; // @synthesize descTextField=_descTextField;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) SVGImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSData *antiSpamBuffer; // @synthesize antiSpamBuffer=_antiSpamBuffer;
- (void)initSubViews;
- (void)onCloseButtonClicked;
- (void)addCloseButtonAction;
- (void)windowWillClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)windowDidLoad;
- (id)initWithWindowNibName:(id)arg1;

@end

