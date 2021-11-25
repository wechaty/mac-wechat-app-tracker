//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMentionViewController, NSView, WCContactData;

@protocol MMMentionViewControllerDelegate <NSObject>
- (void)showInView:(NSView *)arg1 withRelativeRect:(struct CGRect)arg2 preferredEdge:(unsigned int)arg3;
- (BOOL)isMentionPopoverShown;
- (void)hideMentionPopover;
- (void)mentionViewController:(MMMentionViewController *)arg1 didChooseContact:(WCContactData *)arg2;
@end
