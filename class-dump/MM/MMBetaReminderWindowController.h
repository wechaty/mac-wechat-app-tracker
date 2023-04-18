//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

#import "NSWindowDelegate-Protocol.h"

@class MMOutlineButton, MMTextField, MMView, NSButton, NSImageView, NSString;

@interface MMBetaReminderWindowController : MMWindowController <NSWindowDelegate>
{
    NSImageView *_logobkgImageView;
    MMTextField *_titleLabel;
    MMView *_backgroundView;
    MMTextField *_descLabel;
    NSButton *_moreButton;
    MMOutlineButton *_downloadButton;
    MMOutlineButton *_ignoreButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMOutlineButton *ignoreButton; // @synthesize ignoreButton=_ignoreButton;
@property(retain, nonatomic) MMOutlineButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(nonatomic) __weak NSButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) __weak MMTextField *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak MMView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak MMTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property __weak NSImageView *logobkgImageView; // @synthesize logobkgImageView=_logobkgImageView;
- (void)onClickMoreButton:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)initData;
- (void)initView;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

