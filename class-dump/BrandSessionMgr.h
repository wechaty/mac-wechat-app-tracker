//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt-Protocol.h"
#import "IMMSessionMgrExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "MMService-Protocol.h"

@class BrandSessionHolder, NSMutableArray, NSRecursiveLock, NSString;

@interface BrandSessionMgr : MMService <IMMSessionMgrExt, IContactMgrExt, IMessageExt, MMService>
{
    NSRecursiveLock *_m_brandSessionLock;
    NSMutableArray *_m_arrBrandInfo;
    BrandSessionHolder *_m_holder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandSessionHolder *m_holder; // @synthesize m_holder=_m_holder;
@property(retain, nonatomic) NSMutableArray *m_arrBrandInfo; // @synthesize m_arrBrandInfo=_m_arrBrandInfo;
@property(retain, nonatomic) NSRecursiveLock *m_brandSessionLock; // @synthesize m_brandSessionLock=_m_brandSessionLock;
- (id)getBrandSessionContact:(id)arg1 msgData:(id)arg2;
- (unsigned int)getMaxEnterTime;
- (id)genBrandSessionInfo:(id)arg1 withAddMsg:(id)arg2;
- (id)createBrandSessionWithContact:(id)arg1;
- (void)removeBrandSessionInfo:(id)arg1;
- (void)removeBrandSessionOfUserName:(id)arg1 isDelMsg:(BOOL)arg2;
- (void)deleteMessage:(id)arg1;
- (void)updateBrandSessionArray:(id)arg1;
- (void)updateBrandSession:(id)arg1 needReorder:(BOOL)arg2;
- (void)deleteBrandHolderSession;
- (BOOL)hasNewArrival;
- (id)getBrandHolderLastMsg;
- (BOOL)isNeedProcessContact:(id)arg1;
- (void)updateBrandHolderSessionInfo;
- (void)sortBrandSession;
- (void)loadBrandSessionHolderCache;
- (void)loadAllBrandSessions:(id)arg1;
- (void)clearBrandSessionHolderUnreadCount;
- (unsigned long long)getBrandSessionIndexByUserName:(id)arg1;
- (id)getBrandSessionByUserName:(id)arg1;
- (id)getBrandSessionAtIndex:(unsigned long long)arg1;
- (unsigned long long)getBrandSessionCount;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (void)processOnDeleteContacts:(id)arg1;
- (void)processOnModifyContacts:(id)arg1;
- (void)changeSessionUnreadCount:(id)arg1;
- (void)processOnMsgDeleted:(id)arg1;
- (void)processOnModMsg:(id)arg1 msgData:(id)arg2;
- (BOOL)isNeedCallNewMsgArrival:(id)arg1;
- (void)processOnAddMsgListForSession:(id)arg1;
- (void)onUnReadCountChange:(id)arg1;
- (void)onMsgDeletedForSession:(id)arg1;
- (void)onModMsg:(id)arg1 msgData:(id)arg2;
- (void)onAddMsgListForSession:(id)arg1;
- (void)onDeleteContacts:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)askSessionByUserName:(id)arg1 isHandled:(char *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

