//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

#import "NSWindowDelegate-Protocol.h"

@class MMOutlineButton, MMTextField, NSImageView, NSString, NSTextView, NSView;

@interface MMAboutWindowController : MMWindowController <NSWindowDelegate>
{
    MMTextField *_versionLabel;
    NSTextView *_copyrightLabel;
    NSView *_bgContainer;
    NSImageView *_weChatTitle;
    MMOutlineButton *_moreInfoButton;
    NSImageView *_wechatLogo;
}

- (void).cxx_destruct;
@property __weak NSImageView *wechatLogo; // @synthesize wechatLogo=_wechatLogo;
@property(retain, nonatomic) MMOutlineButton *moreInfoButton; // @synthesize moreInfoButton=_moreInfoButton;
@property __weak NSImageView *weChatTitle; // @synthesize weChatTitle=_weChatTitle;
@property(nonatomic) __weak NSView *bgContainer; // @synthesize bgContainer=_bgContainer;
@property(retain, nonatomic) NSTextView *copyrightLabel; // @synthesize copyrightLabel=_copyrightLabel;
@property(retain, nonatomic) MMTextField *versionLabel; // @synthesize versionLabel=_versionLabel;
- (void)showMoreInfo;
- (void)flagsChanged:(id)arg1;
- (void)copyVersionString;
- (void)copy:(id)arg1;
- (id)versionContextMenu:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

