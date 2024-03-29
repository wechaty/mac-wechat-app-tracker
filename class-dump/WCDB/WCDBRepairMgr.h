//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "AccountServiceExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;

@interface WCDBRepairMgr : MMService <AccountServiceExt, MMService>
{
    NSMutableDictionary *m_repairInfoDic;
    NSMutableSet *m_corruptedDBTagSet;
    NSMutableArray *m_repairFailedList;
    NSRecursiveLock *m_oLock;
    BOOL m_stopRepair;
    BOOL DBScanned;
}

+ (void)appendRepairlogToMMLog;
+ (void)clearLogFileIfNeeded;
+ (void)logRepairHistory:(id)arg1;
+ (BOOL)isRepairSupported:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)checkAndRepair;
- (_Bool)needToRepair;
- (id)getNeedRepairDBPath;
- (id)getMetasFromDB:(id)arg1;
- (void)deleteDBWith:(id)arg1;
- (void)deleteRepairFailedDB;
- (void)stopRepair;
- (void)deleteDestroyDB:(id)arg1;
- (void)repairCorruptedDBWith:(id)arg1;
- (void)deleteAllUnimportantCorruptedDB;
- (void)repairAllCorruptedDB;
- (void)addCorruptedDB:(id)arg1;
- (void)registerRepairInfo:(id)arg1;
- (void)doReluanchAppWhenUnknownDBError;
- (void)scanAllDB;
- (void)onRecvWCDBAutoDetectValueChanged:(id)arg1;
- (void)DBScanCanceled;
- (void)onNotifyCorruptedDB;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

