//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMCGIDelegate-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WAContactMgr : MMService <MMConfigMgrExt, MMCGIDelegate, MMService>
{
    NSObject<OS_dispatch_queue> *_worker_queue;
    NSMutableDictionary *_dicContactCache;
    NSMutableDictionary *_dicAppid2UsernameCache;
    NSMutableArray *_arrSingleAttrSyncWait;
    NSMutableArray *_arrSingleAttrSyncRequest;
    unsigned int _singleAttrSyncRequestInterval;
    NSMutableArray *_arrBatchAttrSyncWait;
    NSMutableSet *_setBatchAttrSyncRequest;
    unsigned int _batchAttrSyncRequestInterval;
    unsigned int m_cgiSessionId;
}

- (void).cxx_destruct;
- (id)getUsernameForAppid:(id)arg1;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)workThread_processBatchWxaAttrSyncWithRequestedBufferDic:(id)arg1 response:(id)arg2 completeHandlerOnMainThread:(CDUnknownBlockType)arg3;
- (void)processBatchWxaAttrSyncWithRequestedBufferDic:(id)arg1 response:(id)arg2 completeHandlerOnMainThread:(CDUnknownBlockType)arg3;
- (void)onResponseBatchWxaAttrSync:(id)arg1;
- (BOOL)requestBatchWxaAttrSync:(id)arg1 versionList:(id)arg2;
- (void)checkBatchWxaAttrSyncWaitQueue;
- (void)mainThread_batchUpdateWeAppContact:(id)arg1;
- (void)setHeadImageStatusForNewContact:(id)arg1 withOldContact:(id)arg2;
- (void)workThread_processWxaAttrSyncResponse:(id)arg1 withUserName:(id)arg2 completeHandlerOnMainThread:(CDUnknownBlockType)arg3;
- (void)processWxaAttrSyncResponse:(id)arg1 withRequest:(id)arg2 completeHandlerOnMainThread:(CDUnknownBlockType)arg3;
- (void)onResponseWxaAttrSync:(id)arg1;
- (BOOL)requestWxaAttrSync:(id)arg1;
- (BOOL)isUsernameHasHigherRemoteContactVersion:(id)arg1 getReportId:(unsigned int *)arg2;
- (BOOL)isBufferInBatchUpdateInterval:(id)arg1;
- (BOOL)isBufferInUpdateInterval:(id)arg1;
- (BOOL)isUsernameInContactUpdateInterval:(id)arg1;
- (void)removeUpdateTask:(id)arg1;
- (void)checkWxaAttrSyncWaitQueue;
- (BOOL)checkIsInQueue:(id)arg1 withTask:(id)arg2;
- (BOOL)checkIsInSingleWaitingQueue:(id)arg1;
- (BOOL)checkIsInSingleRequestingQueue:(id)arg1;
- (void)markWaitTaskBeForcedUpdated:(id)arg1;
- (void)mainThread_updateWeAppContact:(id)arg1;
- (void)updateContact:(id)arg1 withBizAttr:(id)arg2;
- (id)getNewContactWithUserName:(id)arg1 bizAttr:(id)arg2;
- (void)loadWxaAttrSyncRequestInterval;
- (void)onMMDynamicConfigUpdated;
- (void)removeContactListInCache:(id)arg1;
- (void)setContactListToCache:(id)arg1;
- (id)getContactFromCacheWithAppid:(id)arg1;
- (id)getContactFromCache:(id)arg1;
- (id)getContactFromCacheWithKey:(id)arg1 type:(unsigned long long)arg2;
- (void)mainthread_callExtensionDeleteContact:(id)arg1;
- (void)mainthread_callExtensionModifyContactList:(id)arg1;
- (void)mainthread_callExtensionModifyContact:(id)arg1;
- (void)notifyContactListModify:(id)arg1;
- (BOOL)updateContactListToDBAndCache:(id)arg1;
- (void)updateContactCacheAndCallModifyContact:(id)arg1;
- (BOOL)updateContactDataWithWxaAttrSyncResponse:(id)arg1 userName:(id)arg2;
- (BOOL)modifyHeadImageStatus:(id)arg1 withUserName:(id)arg2;
- (BOOL)modifyWxAppOptWithBitMask:(unsigned int)arg1 bitValue:(unsigned int)arg2 userName:(id)arg3;
- (void)batchUpdateWeAppContact:(id)arg1;
- (void)updateWeAppContactWithAppid:(id)arg1 isForce:(BOOL)arg2;
- (void)updateWeAppContactWithAppid:(id)arg1;
- (void)updateWeAppContact:(id)arg1 isForce:(BOOL)arg2;
- (void)updateWeAppContact:(id)arg1;
- (void)updateWeAppContactWithKey:(id)arg1 updateType:(unsigned long long)arg2 isForce:(BOOL)arg3;
- (void)updateWeAppContactWithKey:(id)arg1 updateType:(unsigned long long)arg2;
- (BOOL)isKeyValidWithKey:(id)arg1 keyType:(unsigned long long)arg2;
- (void)deleteWeAppContactList:(id)arg1;
- (id)getAllWeAppContact;
- (id)getWeAppContact:(id)arg1;
- (id)getWeAppContactWithKey:(id)arg1 type:(unsigned long long)arg2;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
