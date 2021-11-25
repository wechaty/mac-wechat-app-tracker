//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol BaseWebViewControllerDelegate <NSObject>

@optional
- (void)canGoForwardStatusChange:(BOOL)arg1;
- (void)canGoBackStatusChange:(BOOL)arg1;
- (void)exitMiniMode;
- (void)enterMiniModeWithWidth:(int)arg1 andHeight:(int)arg2;
- (void)showMiniButton;
- (void)onPageStateChaged:(NSString *)arg1;
- (void)showTitleWithValue:(double)arg1;
- (void)showTitle:(BOOL)arg1;
- (void)updateTitle:(NSString *)arg1;
- (BOOL)shouldUpdateWindowTitle;
- (BOOL)shouldUpdateTitle;
- (NSString *)currentTitle;
@end
