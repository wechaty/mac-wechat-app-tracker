//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IAppMsgPathMgr-Protocol.h"
#import "IMsgExtendOperation-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSPasteboardItemDataProvider-Protocol.h"
#import "WCTColumnCoding-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class AppProductItem, DownloadVideoReportData, FavoritesItem, MMLiveAppMsgInnerItem, MMTranslateResult, MessageDataPackedInfo, NSArray, NSData, NSMutableArray, NSString, OpenSDKAppBrandItem, PatMessageWrap, SecondMsgNode, SendImageInfo, UploadVideoReportData, WAAppMsgItem, WCFinderLiveShareItem, WCFinderMessageShareNameCard, WCFinderShareItem, WCPayInfoItem;
@protocol IMsgExtendOperation;

@interface MessageData : NSObject <NSPasteboardItemDataProvider, IAppMsgPathMgr, IMsgExtendOperation, NSCopying, WCTTableCoding, WCTColumnCoding>
{
    unsigned int mesLocalID;
    long long mesSvrID;
    NSString *fromUsrName;
    NSString *toUsrName;
    unsigned int messageType;
    NSString *msgContent;
    NSString *msgVoiceText;
    unsigned int m_uiVoiceToTextStatus;
    unsigned int msgStatus;
    unsigned int msgImgStatus;
    NSString *msgRealChatUsr;
    NSString *msgPushContent;
    unsigned int m_uiTranslateStatus;
    NSString *msgSource;
    unsigned int mesDes;
    unsigned int msgSeq;
    BOOL bForward;
    NSData *m_dtThumbnail;
    unsigned int msgCreateTime;
    unsigned int m_uiSendTime;
    unsigned int m_uiDownloadStatus;
    id <IMsgExtendOperation> m_extendInfoWithMsgType;
    id <IMsgExtendOperation> m_extendInfoWithFromUsr;
    BOOL isAutoIncrement;
    BOOL m_bShouldShowAll;
    BOOL m_bIsMultiForwardMessage;
    BOOL m_shouldReloadOriginal;
    BOOL m_bHasOriginalMessage;
    unsigned int IntRes1;
    unsigned int IntRes2;
    unsigned int m_uiFileUploadStatus;
    unsigned int m_uiOriginalImgHeight;
    unsigned int m_uiOriginalImgWidth;
    unsigned int m_uiSrcCreateTime;
    unsigned int _m_nsMsgCrc32;
    unsigned int _m_uiUploadedBytes;
    unsigned int _m_uiDownloadedBytes;
    unsigned int _m_uiTotalBytes;
    int _m_nCdnServerRetCode;
    unsigned int _m_uiResendMessageCount;
    long long lastInsertedRowID;
    NSString *StrRes1;
    NSString *StrRes2;
    MMTranslateResult *m_nsTranslationResult;
    NSString *m_nsFilePath;
    NSString *m_nsVideoPath;
    NSString *m_nsVideoThumbPath;
    NSString *dataMd5;
    MessageData *m_refMessageData;
    MessageDataPackedInfo *m_packedInfo;
    NSString *m_nsSrcUserName;
    NSString *m_nsSrcNickName;
    NSString *m_nsAtUserList;
    NSString *_m_nsImgFileName;
    NSString *_m_nsBigFileErrMsg;
    SecondMsgNode *_secondMsgNode;
    MessageData *_referHostMsg;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_dataMd5;
+ (void)PBArrayAdd_m_uiOriginalImgWidth;
+ (void)PBArrayAdd_m_uiOriginalImgHeight;
+ (void)PBArrayAdd_m_nsVideoThumbPath;
+ (void)PBArrayAdd_m_nsVideoPath;
+ (void)PBArrayAdd_msgSeq;
+ (void)PBArrayAdd_m_uiTranslateStatus;
+ (void)PBArrayAdd_m_uiVoiceToTextStatus;
+ (void)PBArrayAdd_msgVoiceText;
+ (void)PBArrayAdd_m_uiFileUploadStatus;
+ (void)PBArrayAdd_m_nsFilePath;
+ (void)PBArrayAdd_m_nsTranslationResult;
+ (void)PBArrayAdd_m_uiDownloadStatus;
+ (void)PBArrayAdd_m_uiSendTime;
+ (void)PBArrayAdd_msgPushContent;
+ (void)PBArrayAdd_msgRealChatUsr;
+ (void)PBArrayAdd_bForward;
+ (void)PBArrayAdd_toUsrName;
+ (void)PBArrayAdd_fromUsrName;
+ (void)PBArrayAdd_StrRes2;
+ (void)PBArrayAdd_StrRes1;
+ (void)PBArrayAdd_IntRes2;
+ (void)PBArrayAdd_IntRes1;
+ (void)PBArrayAdd_msgSource;
+ (void)PBArrayAdd_mesDes;
+ (void)PBArrayAdd_messageType;
+ (void)PBArrayAdd_msgImgStatus;
+ (void)PBArrayAdd_msgStatus;
+ (void)PBArrayAdd_msgContent;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_mesSvrID;
+ (void)PBArrayAdd_mesLocalID;
+ (const struct WCTProperty *)m_packedInfo;
+ (const struct WCTProperty *)msgSeq;
+ (const struct WCTProperty *)msgVoiceText;
+ (const struct WCTProperty *)StrRes2;
+ (const struct WCTProperty *)StrRes1;
+ (const struct WCTProperty *)IntRes2;
+ (const struct WCTProperty *)IntRes1;
+ (const struct WCTProperty *)msgSource;
+ (const struct WCTProperty *)mesDes;
+ (const struct WCTProperty *)messageType;
+ (const struct WCTProperty *)msgImgStatus;
+ (const struct WCTProperty *)msgStatus;
+ (const struct WCTProperty *)msgContent;
+ (const struct WCTProperty *)msgCreateTime;
+ (const struct WCTProperty *)mesSvrID;
+ (const struct WCTProperty *)mesLocalID;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (id)messagesFromPasteboardItemDecodeByPBCoder:(id)arg1;
+ (id)messagesFromPasteboard:(id)arg1;
+ (void)GetWeChatPathOfAppThumb:(id)arg1 nsPath:(id)arg2 retStrPath:(id *)arg3;
+ (void)GetWeChatPathOfAppDataByUserName:(id)arg1 andMessageWrap:(id)arg2 andAttachId:(id)arg3 andAttachFileExt:(id)arg4 retStrPath:(id *)arg5;
+ (void)GetWeChatPathOfAppDataByUserName:(id)arg1 andMessageWrap:(id)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppRemindAttach:(id)arg1 retStrPath:(id *)arg2;
+ (void)GetPathOfAppThumb:(id)arg1 LocalID:(unsigned int)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppDataTemp:(id)arg1 LocalID:(unsigned int)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppDataTemp:(id)arg1 LocalID:(unsigned int)arg2 AttachId:(id)arg3 retStrPath:(id *)arg4;
+ (void)GetPathOfAppDataTemp:(id)arg1 LocalID:(unsigned int)arg2 RecordDataID:(id)arg3 retStrPath:(id *)arg4;
+ (void)GetPathOfAppDataByUserName:(id)arg1 andMessageWrap:(id)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppDataByUserName:(id)arg1 andMessageWrap:(id)arg2 andAttachId:(id)arg3 andAttachFileExt:(id)arg4 retStrPath:(id *)arg5;
+ (void)GetPathOfAppData:(id)arg1 LocalID:(unsigned int)arg2 FileExt:(id)arg3 retStrPath:(id *)arg4;
+ (void)GetPathOfAppDir:(id)arg1 retStrPath:(id *)arg2;
+ (void)RegisterClsMethod_AppMsgPath;
+ (id)convertWebVideoItem2MsgData:(id)arg1 toUser:(id)arg2;
+ (id)checkSourcePathFileFromMsg:(id)arg1 withDataList:(id)arg2;
+ (id)convertNoteItem2MsgData:(id)arg1 toUser:(id)arg2;
+ (id)convertRecordItem2MsgData:(id)arg1 toUser:(id)arg2 fromScene:(unsigned long long)arg3;
+ (id)convertRecordDataField2MsgData:(id)arg1 toUser:(id)arg2;
+ (id)convertFeed2MsgData:(id)arg1 toUser:(id)arg2;
+ (id)convertReaderMsgDataWrap:(id)arg1 withOriginMsgWrap:(id)arg2 toUser:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak MessageData *referHostMsg; // @synthesize referHostMsg=_referHostMsg;
@property(retain, nonatomic) SecondMsgNode *secondMsgNode; // @synthesize secondMsgNode=_secondMsgNode;
@property(nonatomic) unsigned int m_uiResendMessageCount; // @synthesize m_uiResendMessageCount=_m_uiResendMessageCount;
@property(nonatomic) int m_nCdnServerRetCode; // @synthesize m_nCdnServerRetCode=_m_nCdnServerRetCode;
@property(nonatomic) unsigned int m_uiTotalBytes; // @synthesize m_uiTotalBytes=_m_uiTotalBytes;
@property(nonatomic) unsigned int m_uiDownloadedBytes; // @synthesize m_uiDownloadedBytes=_m_uiDownloadedBytes;
@property(nonatomic) unsigned int m_uiUploadedBytes; // @synthesize m_uiUploadedBytes=_m_uiUploadedBytes;
@property(nonatomic) unsigned int m_nsMsgCrc32; // @synthesize m_nsMsgCrc32=_m_nsMsgCrc32;
@property(retain, nonatomic) NSString *m_nsBigFileErrMsg; // @synthesize m_nsBigFileErrMsg=_m_nsBigFileErrMsg;
@property(retain, nonatomic) NSString *m_nsImgFileName; // @synthesize m_nsImgFileName=_m_nsImgFileName;
@property(nonatomic) BOOL m_bHasOriginalMessage; // @synthesize m_bHasOriginalMessage;
@property(nonatomic) BOOL m_shouldReloadOriginal; // @synthesize m_shouldReloadOriginal;
@property(nonatomic) BOOL m_bIsMultiForwardMessage; // @synthesize m_bIsMultiForwardMessage;
@property(retain, nonatomic) NSString *m_nsAtUserList; // @synthesize m_nsAtUserList;
@property(nonatomic) unsigned int m_uiSrcCreateTime; // @synthesize m_uiSrcCreateTime;
@property(retain, nonatomic) NSString *m_nsSrcNickName; // @synthesize m_nsSrcNickName;
@property(retain, nonatomic) NSString *m_nsSrcUserName; // @synthesize m_nsSrcUserName;
@property(nonatomic) __weak MessageData *m_refMessageData; // @synthesize m_refMessageData;
@property(retain, nonatomic) NSData *dtThumbnail; // @synthesize dtThumbnail=m_dtThumbnail;
@property(retain, nonatomic) id <IMsgExtendOperation> extendInfoWithFromUsr; // @synthesize extendInfoWithFromUsr=m_extendInfoWithFromUsr;
@property(retain, nonatomic) id <IMsgExtendOperation> extendInfoWithMsgType; // @synthesize extendInfoWithMsgType=m_extendInfoWithMsgType;
@property(nonatomic) BOOL m_bShouldShowAll; // @synthesize m_bShouldShowAll;
@property(retain, nonatomic) NSString *dataMd5; // @synthesize dataMd5;
@property(nonatomic) unsigned int m_uiOriginalImgWidth; // @synthesize m_uiOriginalImgWidth;
@property(nonatomic) unsigned int m_uiOriginalImgHeight; // @synthesize m_uiOriginalImgHeight;
@property(retain, nonatomic) NSString *m_nsVideoThumbPath; // @synthesize m_nsVideoThumbPath;
@property(retain, nonatomic) NSString *m_nsVideoPath; // @synthesize m_nsVideoPath;
@property(nonatomic) unsigned int msgSeq; // @synthesize msgSeq;
@property(nonatomic) unsigned int m_uiTranslateStatus; // @synthesize m_uiTranslateStatus;
@property(nonatomic) unsigned int m_uiVoiceToTextStatus; // @synthesize m_uiVoiceToTextStatus;
@property(retain, nonatomic) NSString *msgVoiceText; // @synthesize msgVoiceText;
@property(nonatomic) unsigned int m_uiFileUploadStatus; // @synthesize m_uiFileUploadStatus;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) MMTranslateResult *m_nsTranslationResult; // @synthesize m_nsTranslationResult;
@property(nonatomic) unsigned int m_uiDownloadStatus; // @synthesize m_uiDownloadStatus;
@property(nonatomic) unsigned int m_uiSendTime; // @synthesize m_uiSendTime;
@property(retain, nonatomic) NSString *msgPushContent; // @synthesize msgPushContent;
@property(retain, nonatomic) NSString *msgRealChatUsr; // @synthesize msgRealChatUsr;
@property(nonatomic) BOOL bForward; // @synthesize bForward;
@property(retain, nonatomic) NSString *toUsrName; // @synthesize toUsrName;
@property(retain, nonatomic) NSString *fromUsrName; // @synthesize fromUsrName;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(retain, nonatomic) NSString *msgSource; // @synthesize msgSource;
@property(nonatomic) unsigned int mesDes; // @synthesize mesDes;
@property(nonatomic) unsigned int messageType; // @synthesize messageType;
@property(nonatomic) unsigned int msgImgStatus; // @synthesize msgImgStatus;
@property(nonatomic) unsigned int msgStatus; // @synthesize msgStatus;
@property(retain, nonatomic) NSString *msgContent; // @synthesize msgContent;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime;
@property(nonatomic) long long mesSvrID; // @synthesize mesSvrID;
@property(nonatomic) unsigned int mesLocalID; // @synthesize mesLocalID;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) BOOL isAutoIncrement; // @synthesize isAutoIncrement;
- (id)archivedWCTValue;
@property(retain, nonatomic) MessageDataPackedInfo *m_packedInfo; // @synthesize m_packedInfo;
- (id)referUniqueID;
- (id)msgReferSummary;
- (id)msgReferSender:(id)arg1;
- (id)msgReferContent:(id)arg1;
- (id)referIcon;
- (BOOL)hasReferIcon;
- (BOOL)hasReferThumb;
- (BOOL)msgCanBeRefered;
- (BOOL)isAppImgUseCdn;
- (BOOL)isVideoUseCdn;
- (BOOL)isImgUseCdn;
- (id)parseMsgClusterType;
- (BOOL)isSelfInAtUserList;
- (void)parseMsgFieldFromXML;
- (BOOL)isCanUseCdnDownload;
- (BOOL)isCanUseCdnUpload;
- (id)getMsgThumbnailClientMsgID;
- (id)getMsgClientMsgID;
- (id)cdnClientMediaID;
- (id)getRealMessageContent;
- (id)getSubMsgContent;
- (id)getChatRoomContent;
- (BOOL)isNonSupportedMessageData;
- (id)getChatRoomUsrName;
- (id)getChatNameForCurMsg;
- (void)ChangeForMsgSource;
- (BOOL)IsSameMsg:(id)arg1;
- (BOOL)isAnnouncementMsg;
- (BOOL)isVoipInviteMsg;
- (BOOL)isMassSendMsg;
- (BOOL)isBottleMsg;
- (BOOL)isMicroBlogMsg;
- (BOOL)isPushMailMessage;
- (BOOL)isTencentNewsMessage;
- (BOOL)isChatRoomMessage;
- (BOOL)isSendBySendMsg;
- (BOOL)isQQMsg;
- (BOOL)isAppMsg;
- (BOOL)isVoiceMsg;
- (BOOL)isSightVideoMsg;
- (BOOL)isVideoMsg;
- (BOOL)isCustomEmojiMsg;
- (BOOL)isImgMsg;
- (BOOL)isUnreadMessage;
- (BOOL)isSendFromSelf;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)uniqueID;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithMsgType:(long long)arg1 nsFromUsr:(id)arg2;
- (id)initWithMsgType:(long long)arg1;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)fileSender;
- (id)fileContent;
- (id)finderUserName;
- (id)finderDesc;
- (id)content;
- (BOOL)doRevokeHistoryRecord;
- (BOOL)hasRevokedHistoryRecord;
- (BOOL)hasDownloadHistoryRecord;
- (BOOL)isWithHistoryRecord;
- (void)writeToPasteboardItemEncodeByPBCoder:(id)arg1;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (void)writeToPasteboard:(id)arg1;
- (void)setPasterDataProvider:(id)arg1;
- (void)writeToPasteboardItem:(id)arg1;
@property(nonatomic) unsigned long long readerWrapIndex;
- (void)UpdateContent:(id)arg1;
- (BOOL)allowFavorite;
- (BOOL)allowMergeForwardToWework;
- (BOOL)allowMergeForward;
- (BOOL)allowForward;
- (BOOL)isFinishSending;
- (BOOL)isDownloadedIfNeed;
- (BOOL)isFileExist;
- (BOOL)hasFileForUpload;
- (BOOL)checkRecordUploadFile:(id)arg1;
- (void)updateMsgSource;
- (long long)compareMessageByMsgCreatetimeAscending:(id)arg1;
- (long long)compareMessageDescending:(id)arg1;
- (long long)compareMessageAscending:(id)arg1;
- (BOOL)canSaveToLocalPath;
- (BOOL)canExport;
- (BOOL)canSaveToFavorites;
- (BOOL)canForward;
- (BOOL)canRecall;
- (id)realChatUserName;
- (id)realMessageContent;
- (void)handleNewsAppMsgIfNeed;
- (id)summaryString:(BOOL)arg1;
- (id)generateMessageDisplayContent;
- (id)chatSenderDisplayNameWithRemark:(BOOL)arg1;
- (id)groupChatSenderDisplayName;
- (id)referMsgSenderDisplayName;
- (id)savingImageFileNameWithLocalID;
- (id)savingImageFileName;
- (BOOL)isOriginalImageDownload;
- (id)editImageFilePath;
- (id)originalImageFilePath;
- (id)blurImageFilePath;
- (id)middleImageFilePath;
- (id)thumbnailImageFilePath;
- (unsigned long long)messageUploadFileStatus;
- (unsigned long long)messageDownloadFileStatus;
- (id)generateFileDownloadPath;
- (int)fileMessageType;
- (id)fileNameForExportWithFormat:(id)arg1;
- (id)thumbnailImage;
- (id)originalImage;
- (struct CGSize)originalImageSize;
- (id)exportVideoFileNameWithLocalID;
- (id)exportVideoFileName;
- (BOOL)videoFileDownloaded;
- (struct CGSize)sightVideoViewSize;
- (id)videoThumbFilePath;
- (id)videoFilePath;
- (struct CGSize)videoViewSize;
- (id)getVoipMessageRealTextContent;
- (id)mapsURLWithProvider:(unsigned long long)arg1;
- (int)yoType;
- (unsigned long long)yoCount;
- (double)originImageSize;
- (BOOL)isLargeImageForPreview;
- (BOOL)isWideOrLongImg;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *arrCCList; // @dynamic arrCCList;
@property(retain, nonatomic) NSMutableArray *arrToList; // @dynamic arrToList;
@property(nonatomic) BOOL bAppMsgCompleteFlag; // @dynamic bAppMsgCompleteFlag;
@property(nonatomic) BOOL bHasAttachment; // @dynamic bHasAttachment;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) WCFinderLiveShareItem *finderLiveShareItem; // @dynamic finderLiveShareItem;
@property(retain, nonatomic) WCFinderMessageShareNameCard *finderMessageShareNameCard; // @dynamic finderMessageShareNameCard;
@property(retain, nonatomic) WCFinderShareItem *finderShareItem; // @dynamic finderShareItem;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SendImageInfo *imageInfo; // @dynamic imageInfo;
@property(retain, nonatomic) MMLiveAppMsgInnerItem *liveAppMsgInnerItem; // @dynamic liveAppMsgInnerItem;
@property(retain, nonatomic) NSArray *m_arrCustomWrap; // @dynamic m_arrCustomWrap;
@property(retain, nonatomic) NSArray *m_arrReaderWaps; // @dynamic m_arrReaderWaps;
@property(copy, nonatomic) NSString *m_authKey; // @dynamic m_authKey;
@property(nonatomic) BOOL m_bIsForceUpdate; // @dynamic m_bIsForceUpdate;
@property(retain, nonatomic) NSString *m_content; // @dynamic m_content;
@property(retain, nonatomic) DownloadVideoReportData *m_downloadVideoReportData; // @dynamic m_downloadVideoReportData;
@property(retain, nonatomic) NSData *m_dtImg; // @dynamic m_dtImg;
@property(retain, nonatomic) NSData *m_dtVoice; // @dynamic m_dtVoice;
@property(nonatomic) unsigned int m_duration; // @dynamic m_duration;
@property(nonatomic) unsigned int m_fullXmlLength; // @dynamic m_fullXmlLength;
@property(retain, nonatomic) NSString *m_historyAesKey; // @dynamic m_historyAesKey;
@property(retain, nonatomic) NSString *m_historyFileId; // @dynamic m_historyFileId;
@property(nonatomic) unsigned int m_historyFileLength; // @dynamic m_historyFileLength;
@property(nonatomic) unsigned long long m_historyId; // @dynamic m_historyId;
@property(retain, nonatomic) NSString *m_historyMd5; // @dynamic m_historyMd5;
@property(nonatomic) unsigned int m_historyMsgCount; // @dynamic m_historyMsgCount;
@property(retain, nonatomic) MessageData *m_historyRecordMsg; // @dynamic m_historyRecordMsg;
@property(nonatomic) long long m_i64VoipKey; // @dynamic m_i64VoipKey;
@property(nonatomic) int m_iFromAnswer; // @dynamic m_iFromAnswer;
@property(nonatomic) int m_iVoipRoomid; // @dynamic m_iVoipRoomid;
@property(nonatomic) BOOL m_isDirectSend; // @dynamic m_isDirectSend;
@property(nonatomic) double m_latitude; // @dynamic m_latitude;
@property(retain, nonatomic) NSString *m_locationLabel; // @dynamic m_locationLabel;
@property(nonatomic) double m_longitude; // @dynamic m_longitude;
@property(nonatomic) int m_mapScale; // @dynamic m_mapScale;
@property(retain, nonatomic) NSString *m_mapType; // @dynamic m_mapType;
@property(copy, nonatomic) NSString *m_nsAesKey; // @dynamic m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsAppAction; // @dynamic m_nsAppAction;
@property(retain, nonatomic) NSString *m_nsAppAttachID; // @dynamic m_nsAppAttachID;
@property(retain, nonatomic) NSString *m_nsAppContent; // @dynamic m_nsAppContent;
@property(retain, nonatomic) NSString *m_nsAppExtInfo; // @dynamic m_nsAppExtInfo;
@property(retain, nonatomic) NSString *m_nsAppFileExt; // @dynamic m_nsAppFileExt;
@property(retain, nonatomic) NSString *m_nsAppID; // @dynamic m_nsAppID;
@property(retain, nonatomic) NSString *m_nsAppMediaDataUrl; // @dynamic m_nsAppMediaDataUrl;
@property(retain, nonatomic) NSString *m_nsAppMediaLowBandDataUrl; // @dynamic m_nsAppMediaLowBandDataUrl;
@property(retain, nonatomic) NSString *m_nsAppMediaLowUrl; // @dynamic m_nsAppMediaLowUrl;
@property(retain, nonatomic) NSString *m_nsAppMediaTagName; // @dynamic m_nsAppMediaTagName;
@property(retain, nonatomic) NSString *m_nsAppMediaUrl; // @dynamic m_nsAppMediaUrl;
@property(retain, nonatomic) NSString *m_nsAppMessageAction; // @dynamic m_nsAppMessageAction;
@property(retain, nonatomic) NSString *m_nsAppName; // @dynamic m_nsAppName;
@property(copy, nonatomic) NSString *m_nsCommentUrl; // @dynamic m_nsCommentUrl;
@property(retain, nonatomic) NSString *m_nsDesc; // @dynamic m_nsDesc;
@property(copy, nonatomic) NSString *m_nsEmoticonBelongToProductID; // @dynamic m_nsEmoticonBelongToProductID;
@property(copy, nonatomic) NSString *m_nsEmoticonMD5; // @dynamic m_nsEmoticonMD5;
@property(retain, nonatomic) NSString *m_nsGuardianTicket;
@property(copy, nonatomic) NSString *m_nsImgHDUrl; // @dynamic m_nsImgHDUrl;
@property(copy, nonatomic) NSString *m_nsImgMidUrl; // @dynamic m_nsImgMidUrl;
@property(retain, nonatomic) NSString *m_nsJsAppId; // @dynamic m_nsJsAppId;
@property(retain, nonatomic) NSString *m_nsMsgAttachUrl; // @dynamic m_nsMsgAttachUrl;
@property(copy, nonatomic) NSString *m_nsMsgDataUrl; // @dynamic m_nsMsgDataUrl;
@property(retain, nonatomic) NSString *m_nsMsgFileUploadToken; // @dynamic m_nsMsgFileUploadToken;
@property(retain, nonatomic) NSString *m_nsMsgMd5; // @dynamic m_nsMsgMd5;
@property(copy, nonatomic) NSString *m_nsMsgThumbAesKey; // @dynamic m_nsMsgThumbAesKey;
@property(retain, nonatomic) NSString *m_nsMsgThumbMd5; // @dynamic m_nsMsgThumbMd5;
@property(copy, nonatomic) NSString *m_nsMsgThumbUrl; // @dynamic m_nsMsgThumbUrl;
@property(retain, nonatomic) NSString *m_nsRemindAttachId; // @dynamic m_nsRemindAttachId;
@property(retain, nonatomic) NSString *m_nsShareOpenUrl; // @dynamic m_nsShareOpenUrl;
@property(retain, nonatomic) NSString *m_nsShareOriginUrl; // @dynamic m_nsShareOriginUrl;
@property(retain, nonatomic) NSString *m_nsSolitaireXml; // @dynamic m_nsSolitaireXml;
@property(retain, nonatomic) NSString *m_nsSourceDisplayname; // @dynamic m_nsSourceDisplayname;
@property(retain, nonatomic) NSString *m_nsSourceUsername; // @dynamic m_nsSourceUsername;
@property(retain, nonatomic) NSString *m_nsStatExtStr; // @dynamic m_nsStatExtStr;
@property(retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo; // @dynamic m_nsStreamVideoAdUxInfo;
@property(retain, nonatomic) NSString *m_nsStreamVideoPublishId; // @dynamic m_nsStreamVideoPublishId;
@property(retain, nonatomic) NSString *m_nsStreamVideoThumbUrl; // @dynamic m_nsStreamVideoThumbUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoTitle; // @dynamic m_nsStreamVideoTitle;
@property(retain, nonatomic) NSString *m_nsStreamVideoUrl; // @dynamic m_nsStreamVideoUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWebUrl; // @dynamic m_nsStreamVideoWebUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWording; // @dynamic m_nsStreamVideoWording;
@property(retain, nonatomic) NSString *m_nsTempAccessBizKey;
@property(retain, nonatomic) NSString *m_nsThumbUrl; // @dynamic m_nsThumbUrl;
@property(retain, nonatomic) NSString *m_nsTitle; // @dynamic m_nsTitle;
@property(retain, nonatomic) AppProductItem *m_oAppProductItem; // @dynamic m_oAppProductItem;
@property(retain, nonatomic) FavoritesItem *m_oAppRecordItem; // @dynamic m_oAppRecordItem;
@property(retain, nonatomic) PatMessageWrap *m_oPatMessageWrap; // @dynamic m_oPatMessageWrap;
@property(retain, nonatomic) FavoritesItem *m_oRecordItem; // @dynamic m_oRecordItem;
@property(retain, nonatomic) WAAppMsgItem *m_oWAAppItem;
@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem; // @dynamic m_oWCPayInfoItem;
@property(retain, nonatomic) OpenSDKAppBrandItem *m_openSDKAppBrandItem;
@property(nonatomic) long long m_overwriteNewMsgId; // @dynamic m_overwriteNewMsgId;
@property(retain, nonatomic) NSString *m_poiName; // @dynamic m_poiName;
@property(nonatomic) unsigned int m_realInnerType; // @dynamic m_realInnerType;
@property(copy, nonatomic) NSString *m_tpUrlString; // @dynamic m_tpUrlString;
@property(nonatomic) unsigned int m_uiApiSDKVersion; // @dynamic m_uiApiSDKVersion;
@property(nonatomic) unsigned int m_uiAppDataSize; // @dynamic m_uiAppDataSize;
@property(nonatomic) unsigned int m_uiAppExtShowType; // @dynamic m_uiAppExtShowType;
@property(nonatomic) unsigned int m_uiAppMsgInnerType; // @dynamic m_uiAppMsgInnerType;
@property(nonatomic) unsigned int m_uiAppVersion; // @dynamic m_uiAppVersion;
@property(nonatomic) unsigned int m_uiCameraType; // @dynamic m_uiCameraType;
@property(nonatomic) unsigned int m_uiContinueUploadCount; // @dynamic m_uiContinueUploadCount;
@property(nonatomic) unsigned int m_uiEmoticonHeight; // @dynamic m_uiEmoticonHeight;
@property(nonatomic) unsigned int m_uiEmoticonType; // @dynamic m_uiEmoticonType;
@property(nonatomic) unsigned int m_uiEmoticonWidth; // @dynamic m_uiEmoticonWidth;
@property(nonatomic) unsigned int m_uiEncryVer; // @dynamic m_uiEncryVer;
@property(nonatomic) unsigned int m_uiGameContent; // @dynamic m_uiGameContent;
@property(nonatomic) unsigned int m_uiGameType; // @dynamic m_uiGameType;
@property(nonatomic) unsigned int m_uiHDImgSize; // @dynamic m_uiHDImgSize;
@property(nonatomic) unsigned int m_uiHevcNormalImgSize; // @dynamic m_uiHevcNormalImgSize;
@property(nonatomic) unsigned int m_uiMsgThumbHeight; // @dynamic m_uiMsgThumbHeight;
@property(nonatomic) unsigned int m_uiMsgThumbSize; // @dynamic m_uiMsgThumbSize;
@property(nonatomic) unsigned int m_uiMsgThumbWidth; // @dynamic m_uiMsgThumbWidth;
@property(nonatomic) unsigned int m_uiNormalImgSize; // @dynamic m_uiNormalImgSize;
@property(nonatomic) unsigned int m_uiOriginFormat; // @dynamic m_uiOriginFormat;
@property(nonatomic) unsigned int m_uiOriginMsgSvrId; // @dynamic m_uiOriginMsgSvrId;
@property(nonatomic) unsigned int m_uiPercent; // @dynamic m_uiPercent;
@property(nonatomic) unsigned int m_uiRemindAttachTotalLen; // @dynamic m_uiRemindAttachTotalLen;
@property(nonatomic) unsigned int m_uiRemindFormat; // @dynamic m_uiRemindFormat;
@property(nonatomic) unsigned int m_uiRemindId; // @dynamic m_uiRemindId;
@property(nonatomic) unsigned int m_uiRemindTime; // @dynamic m_uiRemindTime;
@property(nonatomic) unsigned int m_uiShowType; // @dynamic m_uiShowType;
@property(nonatomic) unsigned int m_uiStreamVideoTime; // @dynamic m_uiStreamVideoTime;
@property(nonatomic) unsigned int m_uiTempAccessAgreenTime;
@property(nonatomic) unsigned int m_uiTempAccessBizType;
@property(nonatomic) unsigned int m_uiUploadStatus; // @dynamic m_uiUploadStatus;
@property(nonatomic) unsigned int m_uiVideoCompressStatus; // @dynamic m_uiVideoCompressStatus;
@property(nonatomic) unsigned int m_uiVideoLen; // @dynamic m_uiVideoLen;
@property(nonatomic) unsigned int m_uiVideoOffset; // @dynamic m_uiVideoOffset;
@property(nonatomic) unsigned int m_uiVideoSource; // @dynamic m_uiVideoSource;
@property(nonatomic) unsigned int m_uiVideoTime; // @dynamic m_uiVideoTime;
@property(nonatomic) unsigned int m_uiVoiceCancelFlag; // @dynamic m_uiVoiceCancelFlag;
@property(nonatomic) unsigned int m_uiVoiceEndFlag; // @dynamic m_uiVoiceEndFlag;
@property(nonatomic) unsigned int m_uiVoiceFormat; // @dynamic m_uiVoiceFormat;
@property(nonatomic) unsigned int m_uiVoiceForwardFlag; // @dynamic m_uiVoiceForwardFlag;
@property(nonatomic) unsigned int m_uiVoiceTime; // @dynamic m_uiVoiceTime;
@property(nonatomic) unsigned int m_uiVoipInviteType; // @dynamic m_uiVoipInviteType;
@property(nonatomic) unsigned int m_uiVoipRecvTime; // @dynamic m_uiVoipRecvTime;
@property(nonatomic) unsigned int m_uiVoipStatus; // @dynamic m_uiVoipStatus;
@property(nonatomic) unsigned int m_uiWeAppState;
@property(nonatomic) unsigned int m_uiWeAppVersion;
@property(retain, nonatomic) UploadVideoReportData *m_uploadVideoReportData; // @dynamic m_uploadVideoReportData;
@property(nonatomic) unsigned int m_wordingType; // @dynamic m_wordingType;
@property(retain, nonatomic) NSString *nsAccount; // @dynamic nsAccount;
@property(retain, nonatomic) NSString *nsArgs; // @dynamic nsArgs;
@property(retain, nonatomic) NSString *nsDate; // @dynamic nsDate;
@property(retain, nonatomic) NSString *nsDigest; // @dynamic nsDigest;
@property(retain, nonatomic) NSString *nsMailID; // @dynamic nsMailID;
@property(retain, nonatomic) NSString *nsSender; // @dynamic nsSender;
@property(retain, nonatomic) NSString *nsSenderAddress; // @dynamic nsSenderAddress;
@property(retain, nonatomic) NSString *nsSubject; // @dynamic nsSubject;
@property(retain, nonatomic) NSString *nsWapLink; // @dynamic nsWapLink;
@property(retain, nonatomic) NSString *referMessageSenderDisplayName;
@property(retain, nonatomic) NSString *referMessageSenderUsrname;
@property(retain, nonatomic) MessageData *referingMessageWrap;
@property(readonly) Class superclass;
@property(nonatomic) unsigned long long uiUin; // @dynamic uiUin;

@end

