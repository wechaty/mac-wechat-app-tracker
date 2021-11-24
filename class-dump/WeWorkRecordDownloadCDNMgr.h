//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt-Protocol.h"
#import "MMAppAttachFileMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class MessageData, NSMutableArray, NSString, WeWorkCDNRecordMediaInfo;

@interface WeWorkRecordDownloadCDNMgr : MMService <MMAppAttachFileMgrExt, ICdnComMgrExt, MMService>
{
    BOOL _isToWeWork;
    MessageData *_m_curDownMsgWrap;
    NSMutableArray *_arrUploadExtendInfos;
    NSMutableArray *_m_arrCDNDownloadInfo;
    WeWorkCDNRecordMediaInfo *_m_curDownMediaInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WeWorkCDNRecordMediaInfo *m_curDownMediaInfo; // @synthesize m_curDownMediaInfo=_m_curDownMediaInfo;
@property(retain, nonatomic) NSMutableArray *m_arrCDNDownloadInfo; // @synthesize m_arrCDNDownloadInfo=_m_arrCDNDownloadInfo;
@property(retain, nonatomic) NSMutableArray *arrUploadExtendInfos; // @synthesize arrUploadExtendInfos=_arrUploadExtendInfos;
@property(nonatomic) BOOL isToWeWork; // @synthesize isToWeWork=_isToWeWork;
@property(retain, nonatomic) MessageData *m_curDownMsgWrap; // @synthesize m_curDownMsgWrap=_m_curDownMsgWrap;
- (void)onCheckBigFileDownloadResult:(BOOL)arg1 resp:(id)arg2 clientMsgID:(id)arg3 errMsg:(id)arg4;
- (void)OnCdnDownloadFinished:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)DownLoadOK;
- (void)DownloadFail:(int)arg1 Expired:(BOOL)arg2;
- (void)CheckDownloadRecordData;
- (id)getDownloadInfo:(id)arg1 DataId:(id)arg2 thumb:(BOOL)arg3 data:(BOOL)arg4;
- (id)getDownloadInfo:(id)arg1 dataField:(id)arg2 andMessage:(id)arg3 thumb:(BOOL)arg4 data:(BOOL)arg5;
- (void)StopCurDownload;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2 thumb:(BOOL)arg3 data:(BOOL)arg4;
- (void)StartDownloadByDataField:(id)arg1 withParentMsg:(id)arg2 andDepth:(unsigned int)arg3;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2;
- (void)checkAndDownloadRecord:(id)arg1 andDepth:(unsigned int)arg2 andIndex:(unsigned int)arg3;
- (void)StartDownloadByRecordMsg:(id)arg1 isToWeWork:(BOOL)arg2 andArrUploadExtendInfos:(id)arg3;
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

