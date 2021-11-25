//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface WCDBManager : MMService <MMService>
{
    unsigned int _lastTime;
    NSMutableDictionary *_dbInfoDic;
    NSRecursiveLock *_dbLock;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) NSRecursiveLock *dbLock; // @synthesize dbLock=_dbLock;
@property(retain, nonatomic) NSMutableDictionary *dbInfoDic; // @synthesize dbInfoDic=_dbInfoDic;
- (void)doCheckpoint;
- (void)onServiceDidWake;
- (void)onServiceWillSleep;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)getDbInfoDic;
- (void)registerWCDBInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
