//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"
#import "MMCGIDelegate-Protocol.h"

@class CdnTaskInfo, FavoritesItemDataField, MessageData, NSString;
@protocol AppDownloadTaskDelegate;

@interface AppDownloadTask : NSObject <ICdnComMgrExt, MMCGIDelegate>
{
    MessageData *m_msgData;
    unsigned long long m_taskId;
    NSString *m_nsChatName;
    CdnTaskInfo *_curTaskInfo;
    id <AppDownloadTaskDelegate> m_delegate;
    unsigned int m_uiStartPos;
    unsigned int m_uTotalLen;
    unsigned int m_cgiSessionId;
    int _type;
    FavoritesItemDataField *_recordMsgData;
}

- (void).cxx_destruct;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) FavoritesItemDataField *recordMsgData; // @synthesize recordMsgData=_recordMsgData;
@property(nonatomic) id <AppDownloadTaskDelegate> delegate; // @synthesize delegate=m_delegate;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=m_nsChatName;
@property(nonatomic) unsigned long long taskId; // @synthesize taskId=m_taskId;
@property(retain, nonatomic) MessageData *msgData; // @synthesize msgData=m_msgData;
- (void)OnCdnDownloadFinished:(id)arg1;
- (id)getDownloadFilePathWithMessageData:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)updataRecorsMessageData:(id)arg1;
- (void)cancelDownload;
- (void)downloadOk:(id)arg1;
- (void)downloadFail:(unsigned int)arg1;
- (void)downloadExpired:(unsigned int)arg1;
- (BOOL)isAppFileDataExist;
- (void)downloadFailByCDN:(int)arg1;
- (void)downloadOkByCDN;
- (BOOL)sendAppDownloadReq;
- (void)downloadAppContent;
- (void)downloadAppContentByCDN;
- (void)startDownloading;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

