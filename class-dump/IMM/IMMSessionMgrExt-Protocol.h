//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMSessionInfo, NSArray, NSString;

@protocol IMMSessionMgrExt <NSObject>

@optional
- (void)getComparer:(id *)arg1 forSelector:(int)arg2;
- (void)askSessionByUserName:(NSString *)arg1 scene:(unsigned long long)arg2 isHandled:(char *)arg3;
- (void)onSessionScrollRowToVisible:(MMSessionInfo *)arg1;
- (void)onSessionReordered;
- (void)onSessionSynced;
- (void)onSessionTotalUnreadCountChanged;
- (void)onSessionDeletedWithUserName:(NSString *)arg1 inSessions:(unsigned long long)arg2 atIndex:(long long)arg3;
- (void)onSessionsUnfolded:(NSArray *)arg1 isAnimated:(BOOL)arg2;
- (void)onSessionsFolded:(NSArray *)arg1 isAnimated:(BOOL)arg2;
- (void)onSessionUpdated:(MMSessionInfo *)arg1;
@end

