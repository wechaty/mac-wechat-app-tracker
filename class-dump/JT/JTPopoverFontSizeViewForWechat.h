//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JTPopoverFontSizeView.h"

#import "JTPopoverFontSizeMenuForWechatDelegate-Protocol.h"

@class JTPopoverFontButton, JTPopoverFontSizeMenuForWechat, NSString;

@interface JTPopoverFontSizeViewForWechat : JTPopoverFontSizeView <JTPopoverFontSizeMenuForWechatDelegate>
{
    JTPopoverFontButton *_chooseButton;
    JTPopoverFontSizeMenuForWechat *_fontSizeMenu;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JTPopoverFontSizeMenuForWechat *fontSizeMenu; // @synthesize fontSizeMenu=_fontSizeMenu;
@property(retain, nonatomic) JTPopoverFontButton *chooseButton; // @synthesize chooseButton=_chooseButton;
- (id)availabeFontSizeArray;
- (void)configAppearanceAndLayout;
- (void)hideMenu;
- (void)drawRect:(struct CGRect)arg1;
- (unsigned long long)buttonTypeOfFontSize:(double)arg1;
- (double)fontSizeOfButtonType:(unsigned long long)arg1;
- (void)fontSizeDidChange:(unsigned long long)arg1;
- (void)showPopoverFontSizeMenu:(id)arg1;
- (unsigned long long)fontSize;
- (void)setFontSize:(unsigned long long)arg1;
- (unsigned long long)defaultFontSize;
- (struct CGSize)viewSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
