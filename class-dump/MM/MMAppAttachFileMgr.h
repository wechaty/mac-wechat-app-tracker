//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMAppAttachFileMgr : MMService <ICdnComMgrExt, MMService>
{
    BOOL _isBigFileChecking;
    NSMutableDictionary *_msgWrapDict;
    NSMutableDictionary *_msgAttachUrlDict;
    NSRecursiveLock *_oLock;
    NSMutableArray *_bigFileCheckQueue;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isBigFileChecking; // @synthesize isBigFileChecking=_isBigFileChecking;
@property(retain, nonatomic) NSMutableArray *bigFileCheckQueue; // @synthesize bigFileCheckQueue=_bigFileCheckQueue;
@property(retain, nonatomic) NSRecursiveLock *oLock; // @synthesize oLock=_oLock;
@property(retain, nonatomic) NSMutableDictionary *msgAttachUrlDict; // @synthesize msgAttachUrlDict=_msgAttachUrlDict;
@property(retain, nonatomic) NSMutableDictionary *msgWrapDict; // @synthesize msgWrapDict=_msgWrapDict;
- (void)OnCdnUpload:(id)arg1;
- (void)batchCheckUploadDataList:(id)arg1 inMsg:(id)arg2;
- (void)checkDataFieldDownload:(id)arg1 inMsg:(id)arg2 withClientId:(id)arg3;
- (void)checkDownload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)CheckPCWechatFileWithMessageData:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)checkUploadInternal:(id)arg1 scene:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkoutFileCheckQueue;
- (void)addToCheckUploadQueue:(id)arg1 scene:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)calMessageDataFileMd5:(id)arg1 scene:(unsigned int)arg2 filePath:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)checkUpload:(id)arg1 scene:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkIfFileExistInSvrInternal:(id)arg1 IsLargeFile:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkIfFileExistInSvr:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isGBLargeFileMessage:(id)arg1;
- (BOOL)isLargeFileMessage:(id)arg1;
- (unsigned int)appRecordTotalInputLimitSize;
- (unsigned int)mergeMsgTotalInputLimitSize;
- (unsigned int)getRecordTotalSize:(id)arg1;
- (BOOL)isAppRecordOverLimit:(id)arg1;
- (BOOL)isOverLimitMergeMsgList:(id)arg1;
- (BOOL)isLargeFileWithDataList:(id)arg1;
- (BOOL)isLargeFileForForward:(id)arg1;
- (BOOL)isLargeFileForFav:(id)arg1;
- (unsigned long long)getMulitSelectMaxCount;
- (unsigned long long)getShareChatRoomMemberMaxCount;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)destroy;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
