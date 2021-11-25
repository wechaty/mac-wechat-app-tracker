//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MessageHandler.h"

#import "AppDownloadTaskDelegate-Protocol.h"

@class FIFOQueue, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol AppMessageHandlerDelegate;

@interface AppMessageHandler : MessageHandler <AppDownloadTaskDelegate>
{
    FIFOQueue *m_downloadQueue;
    unsigned long long m_downloadTaskId;
    NSMutableDictionary *m_dictDownloadTask;
    NSRecursiveLock *m_oLockForDictDownloadTask;
    id <AppMessageHandlerDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AppMessageHandlerDelegate> delegate; // @synthesize delegate=m_delegate;
- (void)notifyUploadProgress:(id)arg1 msgData:(id)arg2 uploadedBytes:(int)arg3 totalBytes:(int)arg4;
- (void)onSendFinished:(id)arg1 taskId:(unsigned long long)arg2 msgData:(id)arg3 isSuccess:(BOOL)arg4;
- (void)onUploadFinished:(unsigned long long)arg1 msgData:(id)arg2 isSuccess:(BOOL)arg3;
- (void)addAppMsgToDownloadQueue:(id)arg1 msgData:(id)arg2;
- (void)cancelUpload:(id)arg1 withMessage:(id)arg2;
- (void)addMsgToSendQueue:(id)arg1 msgData:(id)arg2 scene:(unsigned int)arg3;
- (void)addMsgToSendQueue:(id)arg1 msgData:(id)arg2;
- (void)addMsgToUploadQueueForWeWork:(id)arg1 msgData:(id)arg2 andUploadExtendInfos:(id)arg3;
- (id)init;
- (void)notifyDownloadProgress:(id)arg1 msgData:(id)arg2 downloadedBytes:(int)arg3 totalBytes:(int)arg4;
- (void)onDownloadExpired:(id)arg1;
- (void)onDownloadFinish:(id)arg1 isSuccess:(BOOL)arg2;
- (void)cancelDownload:(id)arg1 withMessage:(id)arg2;
- (BOOL)IsMsgDownloading:(id)arg1;
- (BOOL)isInDownloadingQueue:(id)arg1;
- (void)checkDownloadQueue;
- (void)addTaskToDownloadQueue:(id)arg1 msgData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
