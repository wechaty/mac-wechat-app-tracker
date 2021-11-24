//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMSessionInfo, NSString;

@protocol IMMSessionMgrExt <NSObject>

@optional
- (void)getComparer:(id *)arg1 forSelector:(int)arg2;
- (void)askSessionByUserName:(NSString *)arg1 isHandled:(char *)arg2;
- (void)onSessionScrollRowToVisible:(MMSessionInfo *)arg1;
- (void)onSessionReorderedFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onSessionReordered;
- (void)onSessionReloadData;
- (void)onSessionSyncedWithSource:(int)arg1 count:(unsigned long long)arg2;
- (void)onSessionTotalUnreadCountChanged:(unsigned int)arg1;
- (void)onSessionDeletedWithUserName:(NSString *)arg1 atIndex:(long long)arg2;
- (void)onSessionUpdated:(MMSessionInfo *)arg1;
@end

