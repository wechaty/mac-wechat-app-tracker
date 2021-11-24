//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt-Protocol.h"
#import "MMAppAttachFileMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class CdnRecordMediaInfo, FavoritesItemDataField, MessageData, NSMutableArray, NSString;

@interface MMRecordNestedDownloadMgr : MMService <MMAppAttachFileMgrExt, ICdnComMgrExt, MMService>
{
    MessageData *_m_curDownMsgWrap;
    FavoritesItemDataField *_m_curDownDataField;
    FavoritesItemDataField *_m_waitDownDataField;
    NSMutableArray *_m_arrCDNDownloadInfo;
    CdnRecordMediaInfo *_m_curDownMediaInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CdnRecordMediaInfo *m_curDownMediaInfo; // @synthesize m_curDownMediaInfo=_m_curDownMediaInfo;
@property(retain, nonatomic) NSMutableArray *m_arrCDNDownloadInfo; // @synthesize m_arrCDNDownloadInfo=_m_arrCDNDownloadInfo;
@property(retain, nonatomic) FavoritesItemDataField *m_waitDownDataField; // @synthesize m_waitDownDataField=_m_waitDownDataField;
@property(retain, nonatomic) FavoritesItemDataField *m_curDownDataField; // @synthesize m_curDownDataField=_m_curDownDataField;
@property(retain, nonatomic) MessageData *m_curDownMsgWrap; // @synthesize m_curDownMsgWrap=_m_curDownMsgWrap;
- (void)onCheckBigFileDownloadResult:(BOOL)arg1 resp:(id)arg2 clientMsgID:(id)arg3 errMsg:(id)arg4;
- (void)OnCdnDownloadFinished:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)DownLoadOK;
- (void)DownloadFail:(int)arg1 Expired:(BOOL)arg2;
- (void)CheckDownloadRecordData;
- (void)StartDownloadCurDataField;
- (void)StartDownloadByDataField:(id)arg1 withParentMsg:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

