//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMessageServiceFileExt-Protocol.h"
#import "MMCDNDownloadMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class MessageData, NSMutableArray, NSMutableDictionary, NSObject, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface MessageBatchExportMgr : MMService <MMCDNDownloadMgrExt, IMessageServiceFileExt, MMService>
{
    NSString *m_nsExportTaskId;
    NSString *m_nsDestExportPath;
    BOOL m_isDoingBatchExport;
    NSRecursiveLock *m_oLock;
    NSObject<OS_dispatch_queue> *m_msgExportQueue;
    NSMutableDictionary *m_dictCanExportMsg;
    NSRecursiveLock *m_oLockForDictCanExportMsg;
    NSMutableDictionary *m_dictNeedDownloadMsg;
    NSRecursiveLock *m_oLockForDictNeedDownloadMsg;
    unsigned int m_uiTotalFileToExport;
    unsigned int m_uiExportedFileCount;
    unsigned int m_uiEPFailedFileCount;
    NSMutableArray *m_exportFailedMsgList;
    NSMutableDictionary *m_dictExportFailedErrMsg;
    BOOL m_bShouldShowExportProgress;
    MessageData *m_currentExportMsgData;
    unsigned int m_uiSelectMsgCount;
    unsigned int m_uiDownloadedMsgCnt;
    unsigned int m_uiNeedDownloadMsgCnt;
    unsigned int m_uiExpiredMsgCnt;
    unsigned int m_uiServerFaultsMsgCnt;
    unsigned int m_uiClientFaultsMsgCnt;
    unsigned int m_uiCanceledMsgCnt;
    unsigned int m_uiSaveFaultsMsgCnt;
}

- (void).cxx_destruct;
- (void)startCdnDownloadFail:(id)arg1;
- (void)onFileDidFailDownloadWithMessage:(id)arg1;
- (void)cdnDownloadMgrDidCanceledDownloadWithCdnTask:(id)arg1;
- (void)cdnDownloadMgrDidFailedDownloadWithCdnTask:(id)arg1;
- (void)cdnDownloadMgrDidFinishedDownloadWithCdnTask:(id)arg1;
- (void)doClear;
- (void)exportFinishedWithMessage:(id)arg1 isSuccess:(BOOL)arg2 errMsg:(id)arg3;
- (id)pathWithoutDuplicates:(id)arg1;
- (void)doExportWithMessage:(id)arg1;
- (BOOL)BatchExportToDestExportPath:(id)arg1 canExportMsgList:(id)arg2 needDownloadMsgList:(id)arg3 selectedMsgCount:(unsigned int)arg4;
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

