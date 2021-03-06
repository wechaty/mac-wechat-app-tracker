//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet;
@protocol MMChatBackupSessionLogicDelegate;

@interface MMChatBackupSessionLogic : NSObject
{
    NSMutableOrderedSet *m_sessionSet;
    NSMutableOrderedSet *m_selectedUserNamesSet;
    NSMutableArray *m_sessionUserNames;
    id <MMChatBackupSessionLogicDelegate> _delegate;
    NSMutableArray *_sessionUserNames;
    long long _startTime;
    long long _endTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableArray *sessionUserNames; // @synthesize sessionUserNames=_sessionUserNames;
@property(nonatomic) __weak id <MMChatBackupSessionLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enableSessionRow:(id)arg1;
- (void)disableSessionRow:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedUserNames;
@property(readonly, nonatomic) NSArray *sessionList;
- (void)setupSessionInfoList:(id)arg1;
- (void)deselectAllRows;
- (void)selectAllRows;
- (void)setChosen:(BOOL)arg1 forRow:(id)arg2;
- (id)init;

@end

