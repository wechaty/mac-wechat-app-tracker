//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSView;

@protocol MMContactsToolBarDelegate <NSObject>
- (NSMutableArray *)getCurrentSelectedContacts;
- (void)onToolBarAddMemberButtonClick:(NSView *)arg1;
- (void)onToolBarRemoveButtonClick:(NSView *)arg1;
- (void)onToolBarAddTagButtonClick:(NSView *)arg1;
- (void)onToolBarModifyButtonClick:(NSView *)arg1;
- (void)onToolBarDeleteButtonClick:(NSView *)arg1;
- (void)onToolBarClearButtonClick;
@end

