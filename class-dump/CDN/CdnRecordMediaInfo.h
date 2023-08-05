//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMCDNRecordDownloadTask.h"

#import "MMAppAttachFileMgrExt-Protocol.h"

@class CdnUploadTaskInfo, FavoritesItemDataField, MessageData, NSString;

@interface CdnRecordMediaInfo : MMCDNRecordDownloadTask <MMAppAttachFileMgrExt>
{
    BOOL _largeFileAlreadyChecked;
    BOOL _m_enableHitCheck;
    unsigned int _m_uiScene;
    NSString *_m_nsThumbPath;
    NSString *_m_nsUsername;
    CdnUploadTaskInfo *_m_taskResultInfo;
    NSString *_m_authKey;
    MessageData *_messageData;
    FavoritesItemDataField *_recordDataField;
    NSString *_signature;
    NSString *_fakeAeskey;
    NSString *_fakeSignature;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL m_enableHitCheck; // @synthesize m_enableHitCheck=_m_enableHitCheck;
@property(copy, nonatomic) NSString *fakeSignature; // @synthesize fakeSignature=_fakeSignature;
@property(copy, nonatomic) NSString *fakeAeskey; // @synthesize fakeAeskey=_fakeAeskey;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(nonatomic) BOOL largeFileAlreadyChecked; // @synthesize largeFileAlreadyChecked=_largeFileAlreadyChecked;
@property(retain, nonatomic) FavoritesItemDataField *recordDataField; // @synthesize recordDataField=_recordDataField;
@property(retain, nonatomic) MessageData *messageData; // @synthesize messageData=_messageData;
@property(copy, nonatomic) NSString *m_authKey; // @synthesize m_authKey=_m_authKey;
@property(retain, nonatomic) CdnUploadTaskInfo *m_taskResultInfo; // @synthesize m_taskResultInfo=_m_taskResultInfo;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene=_m_uiScene;
@property(retain, nonatomic) NSString *m_nsUsername; // @synthesize m_nsUsername=_m_nsUsername;
@property(retain, nonatomic) NSString *m_nsThumbPath; // @synthesize m_nsThumbPath=_m_nsThumbPath;
- (void)onCheckBigFileDownloadResult:(BOOL)arg1 resp:(id)arg2 clientMsgID:(id)arg3 errMsg:(id)arg4;
- (void)_startDownload;
- (BOOL)_checkBigFileIfNeeded;
- (void)cancel;
- (void)resume;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

