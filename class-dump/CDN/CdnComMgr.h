//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMCGIDelegate-Protocol.h"
#import "MMNetExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSDate, NSMutableDictionary, NSString;

@interface CdnComMgr : MMService <MMNetExt, MMCGIDelegate, MMService>
{
    shared_ptr_67bd78cc m_pCallback;
    unsigned int m_uiGetCdnDnsInfoEventID;
    unsigned int m_uiGetCdnCount;
    NSDate *m_tGetCdn;
    NSString *m_nsCdnIpList;
    BOOL m_hasClearData;
    BOOL m_bHasGetCdnDns;
    BOOL m_bUseSafeCdn;
    BOOL m_bInitCdnCom;
    NSMutableDictionary *_warningCountMap;
}

+ (struct Config)GetWxConfig;
+ (id)GetCdnRootPath;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *warningCountMap; // @synthesize warningCountMap=_warningCountMap;
@property(retain, nonatomic) NSDate *m_tGetCdn; // @synthesize m_tGetCdn;
- (void)setUseSafeCdn:(BOOL)arg1;
- (BOOL)useSafeCdn;
- (id)genarateResAesKey;
- (unsigned int)calcFileCrc32WithFilePath:(id)arg1;
- (id)calcFileMd5WithFilePath:(id)arg1;
- (int)startDownloadTpDataFile:(struct C2CDownloadRequest)arg1 andTpUrl:(id)arg2 andAuthkey:(id)arg3 andDownloadMode:(int)arg4;
- (BOOL)StartDownloadTpDataFile:(struct C2CDownloadRequest *)arg1 andTpUrl:(id)arg2 andAuthkey:(id)arg3;
- (void)StopUploadRecordMedia:(id)arg1;
- (BOOL)StartUploadRecordMedia:(id)arg1 enableHitCheck:(BOOL)arg2;
- (BOOL)CheckAppAttachExist:(id)arg1 IsLargeFile:(BOOL)arg2;
- (void)CheckCdnInfo;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (id)GetCdnIpList;
- (void)GetCdnDnsInfo;
- (BOOL)shouldGetCdnDnsInfo;
- (void)onNetStatusChange:(int)arg1;
- (void)SetCdnDnsInfo:(id)arg1;
- (void)OnMoovReady:(id)arg1;
- (void)CallDownloadMoovReadyExtendsion:(id)arg1;
- (void)OnDownloadPartialVideoData:(id)arg1;
- (void)CallDownloadPartialDataExtendsion:(id)arg1;
- (void)OnDownloadEnd:(id)arg1;
- (void)CallDownloadExtendsion:(id)arg1;
- (void)OnUploadEnd:(id)arg1;
- (void)CallUploadExtendsion:(id)arg1;
- (void)OnDownloadProgress:(id)arg1;
- (void)CallDownloadProgressExtendsion:(id)arg1;
- (void)OnUploadProgress:(id)arg1;
- (void)CallUploadProgressExtendsion:(id)arg1;
- (BOOL)StopCDNDownloadTask:(id)arg1 retCode:(int *)arg2;
- (BOOL)StopCDNDownloadTask:(id)arg1;
- (BOOL)tryMultisockC2CUpload:(struct C2CUploadRequest)arg1;
- (int)StartUploadTimelineMediaOfSight:(id)arg1;
- (int)StartUploadTimelineMediaOfSightThumb:(id)arg1;
- (void)StopUploadTimelineMedia:(id)arg1;
- (int)StartUploadTimelineMedia:(id)arg1;
- (int)StartDownloadSnsImage:(id)arg1;
- (BOOL)IsVideoDataAvailableByClientMediaID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (BOOL)RequestVideoDataByClientMediaID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (BOOL)StartSNSDownloadWithTaskInfoWrap:(id)arg1;
- (void)StopDownloadFavMedia:(id)arg1;
- (BOOL)StrartDownloadFavMedia:(id)arg1;
- (void)StopUploadFavMedia:(id)arg1;
- (BOOL)StartUploadFavMedia:(id)arg1 error:(int *)arg2;
- (void)StopDownloadComMedia:(id)arg1;
- (BOOL)StartDownloadComMedia:(id)arg1;
- (id)GetDownloadProgressInfo:(id)arg1;
- (void)StopDownloadMedia:(id)arg1;
- (BOOL)StartDownloadMedia:(struct C2CDownloadRequest *)arg1;
- (BOOL)StartDownloadMedia:(struct C2CDownloadRequest *)arg1 message:(id)arg2 type:(int)arg3;
- (void)StopUploadComMedia:(id)arg1;
- (BOOL)StartUploadComMedia:(id)arg1;
- (BOOL)StopDownloadComMedia:(id)arg1 CdnDownloadTaskInfo:(id)arg2;
- (void)InitCdn;
- (shared_ptr_67bd78cc)callback;
- (BOOL)IsCdnAvaible;
- (void)UnInit;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
