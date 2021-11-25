//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMessageServiceFileExt-Protocol.h"
#import "MMService-Protocol.h"

@class MMAppMsgDownloadDB, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMAppMsgDownloadMgr : MMService <IMessageServiceFileExt, MMService>
{
    MMAppMsgDownloadDB *_m_db;
    NSRecursiveLock *_m_lock;
    NSMutableDictionary *_dictDownloadInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictDownloadInfo; // @synthesize dictDownloadInfo=_dictDownloadInfo;
@property(retain, nonatomic) NSRecursiveLock *m_lock; // @synthesize m_lock=_m_lock;
@property(retain, nonatomic) MMAppMsgDownloadDB *m_db; // @synthesize m_db=_m_db;
- (void)onFileDownloaded:(int)arg1 of:(int)arg2 withMessage:(id)arg3;
- (double)getAppMsgApproximateRemainTime:(id)arg1;
- (unsigned long long)getAppMsgTransferStatus:(id)arg1;
- (BOOL)checkIfCanDownload:(id)arg1;
- (unsigned int)getAppMsgDownloadedBytes:(id)arg1;
- (unsigned int)updateAppMsgDownloadStatus:(id)arg1;
- (unsigned int)getAppMsgDownloadStatus:(id)arg1;
- (void)deleteDuplicateMsg:(id)arg1;
- (void)appMsgDownloadExpired:(id)arg1;
- (void)appMsgDownloadFailed:(id)arg1;
- (void)appMsgDownloadComplete:(id)arg1;
- (void)appMsgDownloadPause:(id)arg1;
- (void)appMsgDownloadStart:(id)arg1;
- (void)appMsgUploadComplete:(id)arg1 svrId:(long long)arg2;
- (void)appMsgUploadPause:(id)arg1;
- (void)appMsgUploadingDownload:(id)arg1;
- (BOOL)appMsgStartUploadCouldNotAddDB:(id)arg1;
- (void)appMsgUploadStart:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
