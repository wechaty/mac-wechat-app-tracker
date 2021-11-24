//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMChatManagerTableCellView, NSString;
@protocol NSDraggingInfo;

@protocol MMChatManagerTableCellViewDelegate <NSObject>

@optional
- (void)cellViewDidPerformRenameAction:(MMChatManagerTableCellView *)arg1;
- (void)cellView:(MMChatManagerTableCellView *)arg1 showProfileWithUserName:(NSString *)arg2;
- (void)cellView:(MMChatManagerTableCellView *)arg1 deleteWithUserName:(NSString *)arg2;
- (BOOL)validateDragOperation:(id <NSDraggingInfo>)arg1 forCell:(MMChatManagerTableCellView *)arg2;
- (void)cellView:(MMChatManagerTableCellView *)arg1 performDragOperation:(id <NSDraggingInfo>)arg2;
@end

