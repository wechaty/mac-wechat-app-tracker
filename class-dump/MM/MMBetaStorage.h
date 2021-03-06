//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSString, WCTDatabase, WCTTable;

@interface MMBetaStorage : MMService <MMService>
{
    WCTDatabase *m_db;
    WCTTable *m_inviteTable;
    WCTTable *m_packageTable;
}

+ (void)deleteBetaStorageDB;
- (void).cxx_destruct;
- (id)_beforeAuthPackageFilePath;
- (id)getBeforeAuthPackage;
- (void)saveBeforeAuthPackage:(id)arg1;
- (BOOL)cleanAllPackage;
- (BOOL)updatePackageWithPackage:(id)arg1;
- (id)getPackageByCommitCount:(unsigned long long)arg1;
- (id)getLastPackage;
- (BOOL)addNewPackage:(id)arg1;
- (BOOL)updateInvitationWithInvitation:(id)arg1;
- (id)getInvitationByCommitCount:(unsigned long long)arg1;
- (id)getLastInvitation;
- (BOOL)addNewInvitation:(id)arg1;
- (void)dealloc;
- (void)closeDB;
- (void)closeDBBeforeInit;
- (void)initDataBase;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

