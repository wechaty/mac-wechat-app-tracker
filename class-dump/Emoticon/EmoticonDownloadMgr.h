//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "GetEmoticonByMD5ListCGIDelegate-Protocol.h"
#import "ICdnComMgrExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "MMEmoticonAddFromServerLogicDelegate-Protocol.h"
#import "MMEmoticonDeleteFromServerLogicDelegate-Protocol.h"
#import "MMService-Protocol.h"

@class EmoticonMsgInfoQueue, GetEmoticonByMD5ListCGI, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, NSURLSession;

@interface EmoticonDownloadMgr : MMService <ICdnComMgrExt, IMessageExt, GetEmoticonByMD5ListCGIDelegate, MMEmoticonAddFromServerLogicDelegate, MMEmoticonDeleteFromServerLogicDelegate, MMService>
{
    EmoticonMsgInfoQueue *m_downloadDataQueue;
    NSMutableDictionary *m_packageDownloads;
    NSMutableDictionary *m_httpDownloadTask;
    GetEmoticonByMD5ListCGI *m_getEmoticonCgi;
    BOOL m_isDownloading;
    NSRecursiveLock *m_Lock;
    int _downloadType;
    NSMutableArray *_serverNotifyTaskList;
    NSMutableArray *_downloadQueue;
    NSMutableArray *_storeIconDownloadQueue;
    NSMutableArray *_storeItemDownloadQueue;
    NSURLSession *_downloadMgr;
}

- (void).cxx_destruct;
@property(nonatomic) int downloadType; // @synthesize downloadType=_downloadType;
@property(retain, nonatomic) NSURLSession *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) NSMutableArray *storeItemDownloadQueue; // @synthesize storeItemDownloadQueue=_storeItemDownloadQueue;
@property(retain, nonatomic) NSMutableArray *storeIconDownloadQueue; // @synthesize storeIconDownloadQueue=_storeIconDownloadQueue;
@property(retain, nonatomic) NSMutableArray *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) NSMutableArray *serverNotifyTaskList; // @synthesize serverNotifyTaskList=_serverNotifyTaskList;
- (void)invalidateDownloadMgr;
- (void)setupDownloadMgr;
- (void)proxySettingsDidChange:(id)arg1;
- (void)saveFavEmoticonDataListToFile;
- (void)emoticonDidFinishedDownload;
- (void)emoticonDidFailedDownload;
- (void)startDownloadNextEmotionTask;
- (void)startDownloadEmoticonWithMD5List:(id)arg1;
- (void)storeItemDidFinishedDownload;
- (void)storeItemDidFailedDownload;
- (void)startDownloadNextStoreItemTask;
- (void)startDownloadStoreItemWithItemList:(id)arg1;
- (void)storeIconDidFinishedDownload;
- (void)storeIconDidFailedDownload;
- (void)startDownloadNextStoreIconTask;
- (void)startDownloadStoreIconWithMD5List:(id)arg1;
- (void)onDeleteSyncLogicComplete:(unsigned long long)arg1;
- (void)onAddSyncLogicBeginWithFullMd5List:(id)arg1;
- (void)runNotifyTask;
- (void)onGetNewXmlMsg:(id)arg1 type:(id)arg2 msgData:(id)arg3;
- (BOOL)_downloadIsFromEmoticonPackage:(id)arg1;
- (void)OnCdnDownloadFinished:(id)arg1;
- (BOOL)downloadEmoticon:(id)arg1;
- (id)donwloadQueueInfoPath;
- (_Bool)saveEmoticonDownloadQueue;
- (void)loadEmoticonDownloadQueue;
- (void)onGetEmoticonByMD5ListFinishedWithMsgInfo:(id)arg1 emojiList:(id)arg2;
- (void)handleDownloadFinishedWithEmoticonMsgInfo:(id)arg1 isSucc:(BOOL)arg2;
- (void)cancelDownloadEmoticonWithMessageData:(id)arg1;
- (void)startDownloadEmoticonByInfo:(id)arg1 isWxamAvailable:(BOOL)arg2;
- (void)startDownloadEmoticonByInfo:(id)arg1;
- (BOOL)isEmoticonDownloaded:(id)arg1;
- (void)checkStartDownload;
- (void)addOpenEmoticonToQueue:(id)arg1;
- (void)downloadEmoticonWithMessageData:(id)arg1;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
