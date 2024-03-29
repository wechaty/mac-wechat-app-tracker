//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMessageDataExt-Protocol.h"
#import "IMsgExtendOperation-Protocol.h"
#import "NSCopying-Protocol.h"

@class ImgMsgPreDownloadInfo, MessageData, NSData, NSString, SendImageInfo;

@interface CExtendInfoOfImg : NSObject <IMessageDataExt, IMsgExtendOperation, NSCopying>
{
    unsigned int m_uiHDImgSize;
    unsigned int m_uiNormalImgSize;
    unsigned int m_uiHevcNormalImgSize;
    NSString *m_nsImgHDUrl;
    NSString *m_nsImgMidUrl;
    NSData *m_dtImg;
    SendImageInfo *m_oImageInfo;
    unsigned int m_uiPercent;
    NSString *imgSourceUrl;
    NSString *m_nsAesKey;
    NSString *m_nsMsgThumbUrl;
    NSString *m_nsMsgThumbAesKey;
    unsigned int m_uiMsgThumbSize;
    unsigned int m_uiMsgThumbWidth;
    unsigned int m_uiMsgThumbHeight;
    NSString *m_nsCommentUrl;
    NSString *m_nsMsgMd5;
    NSString *m_authKey;
    ImgMsgPreDownloadInfo *imgPreDownloadInfo;
    MessageData *m_refMessageData;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ImgMsgPreDownloadInfo *imgPreDownloadInfo; // @synthesize imgPreDownloadInfo;
@property(nonatomic) unsigned int m_uiPercent; // @synthesize m_uiPercent;
@property(nonatomic) __weak MessageData *m_refMessageData; // @synthesize m_refMessageData;
@property(retain, nonatomic) SendImageInfo *imageInfo; // @synthesize imageInfo=m_oImageInfo;
@property(copy, nonatomic) NSString *m_authKey; // @synthesize m_authKey;
@property(copy, nonatomic) NSString *m_nsMsgMd5; // @synthesize m_nsMsgMd5;
@property(retain, nonatomic) NSData *dtImg; // @synthesize dtImg=m_dtImg;
@property(nonatomic) unsigned int m_uiHevcNormalImgSize; // @synthesize m_uiHevcNormalImgSize;
@property(nonatomic) unsigned int m_uiNormalImgSize; // @synthesize m_uiNormalImgSize;
@property(nonatomic) unsigned int m_uiMsgThumbWidth; // @synthesize m_uiMsgThumbWidth;
@property(nonatomic) unsigned int m_uiMsgThumbSize; // @synthesize m_uiMsgThumbSize;
@property(nonatomic) unsigned int m_uiMsgThumbHeight; // @synthesize m_uiMsgThumbHeight;
@property(nonatomic) unsigned int m_uiHDImgSize; // @synthesize m_uiHDImgSize;
@property(copy, nonatomic) NSString *m_nsMsgThumbUrl; // @synthesize m_nsMsgThumbUrl;
@property(copy, nonatomic) NSString *m_nsMsgThumbAesKey; // @synthesize m_nsMsgThumbAesKey;
@property(copy, nonatomic) NSString *m_nsImgMidUrl; // @synthesize m_nsImgMidUrl;
@property(copy, nonatomic) NSString *imgSourceUrl; // @synthesize imgSourceUrl;
@property(copy, nonatomic) NSString *m_nsImgHDUrl; // @synthesize m_nsImgHDUrl;
@property(copy, nonatomic) NSString *m_nsCommentUrl; // @synthesize m_nsCommentUrl;
@property(copy, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
- (BOOL)saveImgDataToFile:(id)arg1 filePath:(id)arg2;
- (BOOL)isLargeFileForFavOrRecord;
- (BOOL)isLargeFileForForward;
- (BOOL)isMidFinishUploadOrDownload;
- (BOOL)isOriginFinishUploadOrDownload;
- (BOOL)isFinishUploadOrDownload;
- (BOOL)cleanupMediaRes;
- (BOOL)isNeedDownloadThumb;
- (BOOL)isThumbImgExist;
- (BOOL)isMidImgExist;
- (BOOL)isImgExist;
- (BOOL)isHDImg;
- (BOOL)saveMsgDefaultThumbWithData:(id)arg1 shouldCached:(BOOL)arg2;
- (BOOL)saveMsgThumbImg;
- (BOOL)saveMsgImg;
- (BOOL)isCanUseCdnDownload;
- (void)encodeMsgFieldToXML:(id)arg1;
- (void)parseMsgFieldFromXML;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

