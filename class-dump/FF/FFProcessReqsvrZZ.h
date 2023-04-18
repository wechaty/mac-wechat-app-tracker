//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "AppMessageHandlerDelegate-Protocol.h"
#import "EmoticonMessageHandlerDelegate-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "IMessageServiceFileExt-Protocol.h"
#import "IMessageServiceImageExt-Protocol.h"
#import "IMessageServiceVideoExt-Protocol.h"
#import "ImgMessageHandlerDelegate-Protocol.h"
#import "MMCDNDownloadMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "RecordMessageHandlerDelegate-Protocol.h"
#import "RoomHistoryMessageHandlerDelegate-Protocol.h"
#import "TextMessageHandlerDelegate-Protocol.h"
#import "VideoMessageHandlerDelegate-Protocol.h"
#import "VoiceMessageHandlerDelegate-Protocol.h"

@class AppMessageHandler, AppMessageHandlerForWeWork, EmoticonMessageHandler, FIFOQueue, FastSyncMsgFilter, ImgMessageHandler, ImgMessageHandlerForWeWork, MMThreadSafeDictionary, MessageDBWrapper, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSRecursiveLock, NSString, NSURLSession, RecordMessageHandler, RoomHistoryMessageHandler, TextMessageHandler, VideoMessageHandler, VideoMessageHandlerForWeWork, VoiceMessageHandler;

@interface FFProcessReqsvrZZ : MMService <ImgMessageHandlerDelegate, VideoMessageHandlerDelegate, AppMessageHandlerDelegate, TextMessageHandlerDelegate, VoiceMessageHandlerDelegate, EmoticonMessageHandlerDelegate, RecordMessageHandlerDelegate, MMCDNDownloadMgrExt, IMessageExt, RoomHistoryMessageHandlerDelegate, IMessageServiceVideoExt, IMessageServiceImageExt, IMessageServiceFileExt, MMService>
{
    ImgMessageHandlerForWeWork *m_imgMsgHandlerForWeWork;
    VideoMessageHandlerForWeWork *m_videoMessageHandlerForWeWork;
    AppMessageHandlerForWeWork *m_appMessageHandlerForWeWork;
    TextMessageHandler *m_textMsgHandler;
    VoiceMessageHandler *m_voiceMsgHandler;
    ImgMessageHandler *m_imgMsgHandler;
    VideoMessageHandler *m_videoMsgHandler;
    AppMessageHandler *m_appMsgHandler;
    EmoticonMessageHandler *m_emoticonMsgHandler;
    RecordMessageHandler *m_recordMsgHandler;
    RoomHistoryMessageHandler *m_roomHistoryMsgHandler;
    BOOL _m_hasClearData;
    MessageDBWrapper *_msgDBWrapper;
    NSOperationQueue *_batchSyncImagesDownloadQueue;
    NSMutableArray *_arrStashedMsgs;
    FastSyncMsgFilter *_filter;
    NSMutableArray *_arrMultiSelectMsgs;
    MMThreadSafeDictionary *_uploadingAppMessageSet;
    MMThreadSafeDictionary *_downloadingAppMessageSet;
    MMThreadSafeDictionary *_uploadingVideoMessageSet;
    MMThreadSafeDictionary *_downloadingVideoMessageSet;
    MMThreadSafeDictionary *_uploadingOriginImageSet;
    MMThreadSafeDictionary *_downloadingOriginImageSet;
    MMThreadSafeDictionary *_downloadingMidImageSet;
    NSMutableDictionary *_cdnDownloadTasks;
    MMThreadSafeDictionary *_checkingTpMediaMd5MessageSet;
    FIFOQueue *_fileSilentDownloadQueue;
    NSMutableDictionary *_videoSilentDownloadAndUploadTasks;
    NSMutableDictionary *_fileSilentDownloadAndUploadTasks;
    NSMutableDictionary *_fileDownloadedCallbacks;
    NSRecursiveLock *_cdnTaskLock;
    NSURLSession *_downloadMgr;
}

+ (void)registerClsMethod_MessageDataExt;
+ (void)RegisterClsMethod;
+ (const void *)orderOfDescCreateTimeAndMsgLocalId;
+ (const void *)orderOfAscCreateTimeAndMsgLocalId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSession *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) NSRecursiveLock *cdnTaskLock; // @synthesize cdnTaskLock=_cdnTaskLock;
@property(retain, nonatomic) NSMutableDictionary *fileDownloadedCallbacks; // @synthesize fileDownloadedCallbacks=_fileDownloadedCallbacks;
@property(retain, nonatomic) NSMutableDictionary *fileSilentDownloadAndUploadTasks; // @synthesize fileSilentDownloadAndUploadTasks=_fileSilentDownloadAndUploadTasks;
@property(retain, nonatomic) NSMutableDictionary *videoSilentDownloadAndUploadTasks; // @synthesize videoSilentDownloadAndUploadTasks=_videoSilentDownloadAndUploadTasks;
@property(retain, nonatomic) FIFOQueue *fileSilentDownloadQueue; // @synthesize fileSilentDownloadQueue=_fileSilentDownloadQueue;
@property(retain, nonatomic) MMThreadSafeDictionary *checkingTpMediaMd5MessageSet; // @synthesize checkingTpMediaMd5MessageSet=_checkingTpMediaMd5MessageSet;
@property(retain, nonatomic) NSMutableDictionary *cdnDownloadTasks; // @synthesize cdnDownloadTasks=_cdnDownloadTasks;
@property(retain, nonatomic) MMThreadSafeDictionary *downloadingMidImageSet; // @synthesize downloadingMidImageSet=_downloadingMidImageSet;
@property(retain, nonatomic) MMThreadSafeDictionary *downloadingOriginImageSet; // @synthesize downloadingOriginImageSet=_downloadingOriginImageSet;
@property(retain, nonatomic) MMThreadSafeDictionary *uploadingOriginImageSet; // @synthesize uploadingOriginImageSet=_uploadingOriginImageSet;
@property(retain, nonatomic) MMThreadSafeDictionary *downloadingVideoMessageSet; // @synthesize downloadingVideoMessageSet=_downloadingVideoMessageSet;
@property(retain, nonatomic) MMThreadSafeDictionary *uploadingVideoMessageSet; // @synthesize uploadingVideoMessageSet=_uploadingVideoMessageSet;
@property(retain, nonatomic) MMThreadSafeDictionary *downloadingAppMessageSet; // @synthesize downloadingAppMessageSet=_downloadingAppMessageSet;
@property(retain, nonatomic) MMThreadSafeDictionary *uploadingAppMessageSet; // @synthesize uploadingAppMessageSet=_uploadingAppMessageSet;
@property(retain, nonatomic) NSMutableArray *arrMultiSelectMsgs; // @synthesize arrMultiSelectMsgs=_arrMultiSelectMsgs;
@property(retain, nonatomic) FastSyncMsgFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) NSMutableArray *arrStashedMsgs; // @synthesize arrStashedMsgs=_arrStashedMsgs;
@property(retain, nonatomic) NSOperationQueue *batchSyncImagesDownloadQueue; // @synthesize batchSyncImagesDownloadQueue=_batchSyncImagesDownloadQueue;
@property BOOL m_hasClearData; // @synthesize m_hasClearData=_m_hasClearData;
@property(retain, nonatomic) MessageDBWrapper *msgDBWrapper; // @synthesize msgDBWrapper=_msgDBWrapper;
- (BOOL)hasRoomHistoryMsgProcessed:(id)arg1 historyId:(unsigned long long)arg2;
- (void)filterAtUserWithMsg:(id)arg1;
- (int)delMultiSelectMsg:(id)arg1;
- (int)addMultiSelectMsg:(id)arg1;
- (id)getAllMultiSelectMsgs;
- (void)clearMultiSelectMsg;
- (id)tempWeAppLogDataPath;
- (void)cleanTempWeAppFilePath;
- (void)addTempWeAppFilePath:(id)arg1;
- (void)preprocessingIPXXMessage:(id)arg1;
- (id)preFilterDuplicateMsgList:(id)arg1 bFunFlag:(BOOL)arg2;
- (BOOL)preFilterDuplicateMsg:(id)arg1 chatName:(id)arg2 bFunFlag:(BOOL)arg3;
- (BOOL)isMsgSpecialProcess:(id)arg1;
- (void)setupDownloadMgr;
- (void)proxySettingsDidChange:(id)arg1;
- (void)addAppMsgToSendQueue:(id)arg1 toUserName:(id)arg2 scene:(unsigned int)arg3;
- (id)forwardAppReferMsgMessage:(id)arg1 toUser:(id)arg2 errMsg:(id *)arg3;
- (id)forwardAppMsgMessage:(id)arg1 toUser:(id)arg2 errMsg:(id *)arg3;
- (id)forwardAppImageMessage:(id)arg1 toUser:(id)arg2 errMsg:(id *)arg3;
- (id)forwardNameCardMessage:(id)arg1 toUser:(id)arg2 errMsg:(id *)arg3;
- (id)forwardVideoMessage:(id)arg1 toUser:(id)arg2 errMsg:(id *)arg3;
- (id)forwardMessage:(id)arg1 withReaderWrap:(id)arg2 toUser:(id)arg3;
- (id)forwardMessage:(id)arg1 toUser:(id)arg2 errMsg:(id *)arg3;
- (id)forwardAppEmojiMessage:(id)arg1 toUser:(id)arg2 errMsg:(id *)arg3;
- (id)forwardAppFileMessage:(id)arg1 toUser:(id)arg2 errMsg:(id *)arg3;
- (id)forwardEmojiMessage:(id)arg1 toUser:(id)arg2 errMsg:(id *)arg3;
- (id)forwardImageMessage:(id)arg1 toUser:(id)arg2 errMsg:(id *)arg3;
- (id)ForwardMessageToWeWork:(id)arg1;
- (id)forwardTransferTextMessage:(id)arg1 toUser:(id)arg2 errMsg:(id *)arg3;
- (id)forwardTextMessage:(id)arg1 toUser:(id)arg2 errMsg:(id *)arg3;
- (void)notifyUIAndSessionOnMainThread:(id)arg1 withMsg:(id)arg2;
- (id)createNewMessage:(id)arg1 withUserName:(id)arg2;
- (id)resendAppReferMessage:(id)arg1 toUser:(id)arg2;
- (void)resendMsg:(id)arg1 toUser:(id)arg2;
- (id)sendAppReferMessage:(id)arg1 withText:(id)arg2 fromUsrName:(id)arg3 toUsrName:(id)arg4 atUserList:(id)arg5;
- (id)sendWebStreamVideoMessage:(id)arg1 toUsrName:(id)arg2;
- (id)SendVideoMessage:(id)arg1 toUsrName:(id)arg2 videoInfo:(id)arg3 msgType:(unsigned int)arg4 refMesageData:(id)arg5;
- (void)asyncCompressVideoInGlobalQueue:(id)arg1 videoDataInfo:(id)arg2 toUsrName:(id)arg3;
- (void)sendChatSyncAppMsg:(id)arg1;
- (id)forwardGroupNoticeAppMsg:(id)arg1 toUsr:(id)arg2 errMsg:(id *)arg3 isWeWorkGN:(BOOL)arg4;
- (id)SendSolitaireAppMsg:(id)arg1;
- (id)forwardSolitaireAppMsg:(id)arg1 toUsr:(id)arg2 errMsg:(id *)arg3;
- (id)resendSolitaireAppMsg:(id)arg1 toUsr:(id)arg2 errMsg:(id *)arg3;
- (id)CreateAppSolitaireTextMsgWithSolitaire:(id)arg1;
- (id)SendNoteAppMsgTo:(id)arg1 withFavoritesItem:(id)arg2;
- (id)SendRecordAppMsgTo:(id)arg1 withFavoritesItem:(id)arg2;
- (id)ForwardRawVideoMessageTo:(id)arg1 withFavoritesItem:(id)arg2 isSight:(BOOL)arg3;
- (id)ForwardVideoMessageTo:(id)arg1 withFavoritesItem:(id)arg2;
- (id)SendFileAppMsgTo:(id)arg1 fileName:(id)arg2 filePath:(id)arg3;
- (id)SendGifAppMsgFromUsr:(id)arg1 toUser:(id)arg2 gifFilePath:(id)arg3;
- (id)SendGifFileMsgFromUsr:(id)arg1 toUser:(id)arg2 gifFileName:(id)arg3 gifFilePath:(id)arg4;
- (id)getEmoticonMsgContentWithMD5:(id)arg1 emoticonType:(unsigned int)arg2;
- (id)_getWWNamecardMsgContentForContact:(id)arg1;
- (id)_getNamecardMsgContentForContact:(id)arg1;
- (id)SendLocationMsgFromUser:(id)arg1 toUser:(id)arg2 withLatitude:(double)arg3 longitude:(double)arg4 poiName:(id)arg5 label:(id)arg6;
- (id)SendNamecardMsgFromUser:(id)arg1 toUser:(id)arg2 containingContact:(id)arg3;
- (id)SendStickerStoreEmoticonMsgFromUsr:(id)arg1 toUsrName:(id)arg2 md5:(id)arg3 productID:(id)arg4;
- (id)SendEmoticonMsgFromUsr:(id)arg1 toUsrName:(id)arg2 md5:(id)arg3 emoticonType:(unsigned int)arg4;
- (id)SendImgMessage:(id)arg1 toUsrName:(id)arg2 thumbImgData:(id)arg3 imgData:(id)arg4 imgInfo:(id)arg5;
- (id)FFProcessTReqZZ:(id)arg1 toUsrName:(id)arg2 msgText:(id)arg3 atUserList:(id)arg4 senderInfo:(id)arg5;
- (id)FFProcessTReqZZ:(id)arg1 toUsrName:(id)arg2 msgText:(id)arg3 atUserList:(id)arg4;
- (BOOL)FFProcessTReqWithStrZZ:(id)arg1 toUser:(id)arg2;
- (id)SendAppMusicMessageFromUser:(id)arg1 toUsrName:(id)arg2 withTitle:(id)arg3 url:(id)arg4 description:(id)arg5 thumbnailData:(id)arg6;
- (id)SendAppURLMessageFromUser:(id)arg1 toUsrName:(id)arg2 withTitle:(id)arg3 url:(id)arg4 description:(id)arg5 thumbnailData:(id)arg6;
- (id)SendAppURLMessageFromUser:(id)arg1 toUsrName:(id)arg2 withTitle:(id)arg3 url:(id)arg4 description:(id)arg5 thumbUrl:(id)arg6 sourceUserName:(id)arg7 sourceDisplayName:(id)arg8;
- (id)SendAppURLMessageToWeWorkFromUser:(id)arg1 withTitle:(id)arg2 url:(id)arg3 description:(id)arg4 thumbUrl:(id)arg5 sourceUserName:(id)arg6 sourceDisplayName:(id)arg7;
- (void)handleAppMsg:(id)arg1;
- (void)onSyncAddFileAppMsg:(id)arg1;
- (void)onGroupTopMsg:(id)arg1 sessionMsgList:(id)arg2;
- (void)FFToNameFavChatZZ:(id)arg1 sessionMsgList:(id)arg2;
- (void)processSysMsg:(id)arg1;
- (void)processVoipInviteMsg:(id)arg1;
- (void)processYoMsg:(id)arg1;
- (void)processNewXMLMsg:(id)arg1 sessionMsgList:(id)arg2;
- (void)onRevokeRoomHistory:(id)arg1;
- (void)OnSyncBatchHistoryMsgs:(id)arg1 chatName:(id)arg2 historyId:(unsigned long long)arg3;
- (void)addNewMsgToDBAndNotify:(id)arg1 sessionMsgList:(id)arg2 nsChatName:(id)arg3 msgDB:(id)arg4;
- (void)onTemplateNewXmlMsg:(id)arg1 sessionMsgList:(id)arg2;
- (void)addSyncShareCardStatus:(id)arg1 arg:(id)arg2;
- (void)addDeleteMessages:(id)arg1 inChat:(id)arg2;
- (void)addClearSession:(id)arg1;
- (void)addDeleteSession:(id)arg1;
- (void)addHideSession:(id)arg1;
- (void)addEnterFunction:(id)arg1;
- (void)addSendCommand:(id)arg1;
- (void)addMarkFunction:(id)arg1;
- (void)addChatList:(id)arg1;
- (void)addMarkRead:(id)arg1 createTime:(unsigned int)arg2;
- (void)addQuitSession:(id)arg1;
- (void)addEnterSession:(id)arg1;
- (void)addMarkUnRead:(id)arg1 createTime:(unsigned int)arg2;
- (BOOL)needSessionHide:(id)arg1 clearToTime:(unsigned int *)arg2;
- (void)processStatusNotify:(id)arg1 map:(id)arg2;
- (void)OnSyncModMsgStatus:(id)arg1;
- (void)OnSyncBatchAddFunctionMsgs:(id)arg1 isFirstSync:(BOOL)arg2;
- (void)BatchAddFilteredMsgList:(id)arg1 isFirstSync:(BOOL)arg2;
- (void)FFImgToOnFavInfoInfoVCZZ:(id)arg1 isFirstSync:(BOOL)arg2;
- (void)processNormalStatusNotify:(id)arg1;
- (void)processUnreadCountStatusNotify:(id)arg1 addMsgListCount:(unsigned long long)arg2;
- (BOOL)addMsgListToDB:(id)arg1 chatName:(id)arg2 andIgnoreFlag:(BOOL)arg3;
- (void)FFVideoToOnFavInfoInfoVCZZ:(id)arg1 andIsFirstSync:(BOOL)arg2;
- (void)FFSingleToOnFavInfoInfoVCZZ:(id)arg1;
- (void)onFastSyncBatchStashMsgs:(id)arg1 isFirstSync:(BOOL)arg2 isLastSync:(BOOL)arg3;
- (void)postHandleAddMsg:(id)arg1 chatName:(id)arg2 bFirstSync:(BOOL)arg3 bFunFlag:(BOOL)arg4;
- (BOOL)preFilterAddMsg:(id)arg1 chatName:(id)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;
- (void)notifyUnreadCntChangeOnMainThread:(id)arg1;
- (void)notifyAddMsgListForSessionOnMainThread:(id)arg1;
- (void)notifyDelAllMsgOnMainThread:(id)arg1;
- (void)notifyMsgDeletedForSessionOnMainThread:(id)arg1;
- (void)notifyDelMsgOnMainThread:(id)arg1 msgData:(id)arg2 isRevoke:(BOOL)arg3;
- (void)notifyOperateGroupTopMsgOnMainThread:(id)arg1 msgData:(id)arg2;
- (void)notifyAddRevokePromptMsgOnMainThread:(id)arg1 msgData:(id)arg2;
- (void)notifyRevokePatMsgOnMainThread:(id)arg1 n64MsgId:(long long)arg2;
- (void)notifyModMsgOnMainThread:(id)arg1 msgData:(id)arg2;
- (void)notifyChatSyncMessagesMergedOnMainThread:(id)arg1;
- (void)notifyChatSyncMsgs:(id)arg1 msgList:(id)arg2;
- (void)notifyAddMsgOnMainThread:(id)arg1 msgData:(id)arg2;
- (void)notifyNewMsgNotificationOnMainThread:(id)arg1 msgData:(id)arg2;
- (void)GenBrandMessageDBInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)AddTestMsg:(id)arg1 msgData:(id)arg2;
- (void)AddLocalMsg:(id)arg1 msgData:(id)arg2;
- (BOOL)p_deleteAllMsg:(id)arg1 isManual:(BOOL)arg2 msgDB:(id)arg3;
- (BOOL)DeleteAllMsgInDB:(id)arg1 isManual:(BOOL)arg2;
- (BOOL)DeleteAllMsgInDB:(id)arg1;
- (BOOL)p_deleteMsgList:(id)arg1 chatName:(id)arg2 isManual:(BOOL)arg3 msgDB:(id)arg4;
- (BOOL)DeleteMsgListInDB:(id)arg1 chatName:(id)arg2 isManual:(BOOL)arg3;
- (BOOL)DeleteMsgListInDB:(id)arg1 chatName:(id)arg2;
- (void)DelMsg:(id)arg1 msgList:(id)arg2 isDelAll:(BOOL)arg3 isManual:(BOOL)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)DelMsg:(id)arg1 msgList:(id)arg2 isDelAll:(BOOL)arg3 isManual:(BOOL)arg4;
- (void)DelRevokedMsg:(id)arg1 msgData:(id)arg2;
- (void)UpdateReferMsgAsRevoked:(id)arg1 chatName:(id)arg2;
- (void)ClearUnReadForSync:(id)arg1 ToCreateTime:(unsigned int)arg2;
- (void)ClearUnRead:(id)arg1 FromCreateTime:(unsigned int)arg2 ToCreateTime:(unsigned int)arg3;
- (BOOL)p_modifyMsgData:(id)arg1 msgDataList:(id)arg2 type:(unsigned long long)arg3;
- (BOOL)ModifyMsgDataOnType:(unsigned long long)arg1 msgDataList:(id)arg2 forChat:(id)arg3;
- (BOOL)ModifyMsgDataOnType:(unsigned long long)arg1 msgData:(id)arg2;
- (BOOL)p_modifyMsgData:(id)arg1 msgData:(id)arg2 msgDB:(id)arg3;
- (void)ModifyMsgData:(id)arg1 msgData:(id)arg2;
- (BOOL)p_modifyMsgDataField:(id)arg1 msgData:(id)arg2 bitSet:(unsigned int)arg3 msgDB:(id)arg4;
- (void)ModifyMsgDataField:(id)arg1 msgData:(id)arg2 bitSet:(unsigned int)arg3;
- (BOOL)UpdateImageOriginSize:(id)arg1 realSize:(struct CGSize)arg2;
- (void)CheckDownloadStatus:(id)arg1;
- (void)CheckUploadStatus:(id)arg1;
- (void)CheckReferMessageAsRevoked:(id)arg1 chatName:(id)arg2;
- (id)ExistingSvrIdList:(id)arg1 chatName:(id)arg2;
- (BOOL)IsSvrIdExists:(unsigned long long)arg1 chatName:(id)arg2;
- (BOOL)IsLocalIdExists:(unsigned int)arg1 chatName:(id)arg2;
- (BOOL)HasMsgInChat:(id)arg1;
- (long long)getMessageCountFromDB:(id)arg1 where:(const void *)arg2;
- (unsigned int)getMaxCreateTimeInMessage:(id)arg1;
- (unsigned int)getMinCreateTimeInMessage:(id)arg1;
- (void)GetUnReadCount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (unsigned int)GetUnReadCount:(id)arg1;
- (id)GetMsgData:(id)arg1 svrIdList:(id)arg2;
- (id)GetMsgData:(id)arg1 svrId:(unsigned long long)arg2 opBitSet:(unsigned int)arg3;
- (id)GetMsgData:(id)arg1 svrId:(unsigned long long)arg2;
- (id)GetMsgData:(id)arg1 localId:(unsigned int)arg2 opBitSet:(unsigned int)arg3;
- (id)GetMsgData:(id)arg1 localId:(unsigned int)arg2;
- (id)GetAllMsgWithChatName:(id)arg1 messageType:(unsigned int)arg2;
- (id)getMsgCreateTimeListWithChatName:(id)arg1 localIdList:(id)arg2;
- (id)GetMsgListWithChatName:(id)arg1 maxCreateTime:(unsigned int)arg2 minCreateTime:(unsigned int)arg3 localId:(unsigned long long)arg4 limitCnt:(unsigned int)arg5 messageTypes:(id)arg6 fromOldToNew:(BOOL)arg7 sortAscend:(BOOL)arg8;
- (id)GetMsgListWithChatName:(id)arg1 fromCreateTime:(unsigned int)arg2 toCreateTime:(unsigned int)arg3 limitCnt:(unsigned int)arg4 hasMore:(char *)arg5 messageTypes:(id)arg6 sortAscend:(BOOL)arg7;
- (id)GetMsgListWithChatName:(id)arg1 fromMinCreateTime:(unsigned int)arg2 localId:(unsigned long long)arg3 limitCnt:(unsigned int)arg4 hasMore:(char *)arg5;
- (id)GetMsgListWithChatName:(id)arg1 fromCreateTime:(unsigned int)arg2 localId:(unsigned long long)arg3 limitCnt:(unsigned int)arg4 hasMore:(char *)arg5 messageTypes:(id)arg6 sortAscend:(BOOL)arg7;
- (void)GetMsgListWithChatName:(id)arg1 fromCreateTime:(unsigned int)arg2 localId:(unsigned long long)arg3 limitCnt:(unsigned int)arg4 messageTypes:(id)arg5 sortAscend:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
- (id)GetMsgListWithChatName:(id)arg1 fromCreateTime:(unsigned int)arg2 localId:(unsigned long long)arg3 limitCnt:(unsigned int)arg4 hasMore:(char *)arg5 sortAscend:(BOOL)arg6;
- (id)GetLastAppMsg:(id)arg1 opBitSet:(unsigned int)arg2;
- (id)GetLastAppMsg:(id)arg1;
- (id)GetLastMsg:(id)arg1 opBitSet:(unsigned int)arg2;
- (id)GetLastMsg:(id)arg1;
- (unsigned int)GetLastMsgCreateTime:(id)arg1;
- (unsigned int)GetLastMsgLocalId:(id)arg1;
- (id)GetMsgDBTableName:(id)arg1;
- (id)GetMsgDBIndetifier:(id)arg1;
- (id)GetMsgDBName:(id)arg1;
- (id)GetMsgDBWithIdentifier:(id)arg1;
- (id)GetMsgDBForChat:(id)arg1;
- (id)GetMsgDB:(id)arg1;
- (id)GetImgOrVideoNextMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4;
- (id)GetImgOrVideoLastMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4;
- (id)GetFileMsgList:(id)arg1 arrFTSMessageData:(id)arg2;
- (long long)GetAppMsgListCount:(id)arg1 minMesLocalId:(unsigned int)arg2;
- (id)GetAppMsgList:(id)arg1 minMesLocalId:(unsigned int)arg2 limitCnt:(unsigned int)arg3;
- (void)onRecordMsgUploadCDNModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)notifyAppMsgDownloadProgress:(id)arg1 downloadedBytes:(int)arg2 totalBytes:(int)arg3;
- (void)onAppMsgDownloadCancel:(id)arg1;
- (void)onAppMsgDownloadExpired:(id)arg1;
- (void)onAppMsgDownloadFinish:(id)arg1 isSuccess:(BOOL)arg2;
- (void)notifyAppMsgUploadProgress:(id)arg1 msgData:(id)arg2 uploadedBytes:(int)arg3 totalBytes:(int)arg4;
- (void)onAppMsgSendFinish:(id)arg1 msgData:(id)arg2 isSuccess:(BOOL)arg3;
- (void)onVoiceFailedToParseXMLWhenDownloading:(id)arg1;
- (void)onVoiceDowloadFinished:(id)arg1 isSuccess:(BOOL)arg2 isNeedSave:(BOOL)arg3 offset:(unsigned long long)arg4;
- (void)onVoiceUploadCanceledWhenDownloading:(id)arg1;
- (void)notifyVideoMsgUploadProgress:(id)arg1 msgData:(id)arg2 uploadedBytes:(int)arg3 totalBytes:(int)arg4;
- (void)onVideoMsgSendFinish:(id)arg1 msgData:(id)arg2 isSuccess:(BOOL)arg3;
- (void)notifyImgMsgUploadProgress:(id)arg1 msgData:(id)arg2 uploadedBytes:(int)arg3 totalBytes:(int)arg4;
- (void)onImgMsgSendFinish:(id)arg1 msgData:(id)arg2 isSuccess:(BOOL)arg3;
- (void)onTextMsgSendFinish:(id)arg1 msgData:(id)arg2 isSuccess:(BOOL)arg3;
- (void)onEmoticonMsgSendFinish:(id)arg1 msgData:(id)arg2 isSuccess:(BOOL)arg3;
- (void)_finishDownloadImageWithMessage:(id)arg1 type:(int)arg2 downloadType:(unsigned long long)arg3 isSuccess:(BOOL)arg4 msgIsFromWeWork:(BOOL)arg5;
- (void)_finishDownloadImageWithMessage:(id)arg1 type:(int)arg2 downloadType:(unsigned long long)arg3 isSuccess:(BOOL)arg4;
- (void)cdnDownloadMgrDidFinishedDownloadWithChatName:(id)arg1 localID:(unsigned int)arg2 recordMsgData:(id)arg3 type:(int)arg4 isSuccess:(BOOL)arg5;
- (void)cdnDownloadMgrDidFailedDownloadWithChatName:(id)arg1 localID:(unsigned int)arg2 recordMsgData:(id)arg3 type:(int)arg4;
- (void)cdnDownloadMgrDidFinishedDownloadWithChatName:(id)arg1 localID:(unsigned int)arg2 recordMsgData:(id)arg3 type:(int)arg4;
- (void)cdnDownloadMgrDidCanceledDownloadWithCdnTask:(id)arg1;
- (void)cdnDownloadMgrDidFailedDownloadWithCdnTask:(id)arg1;
- (void)cdnDownloadMgrDidFinishedDownloadWithCdnTask:(id)arg1;
- (void)cdnDownloadMgrDownloaded:(int)arg1 of:(int)arg2 withMessage:(id)arg3 type:(int)arg4 downloadType:(unsigned long long)arg5;
- (void)canceldDownloadAppMessage:(id)arg1;
- (void)downloadAppMessage:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)downloadAppMessage:(id)arg1;
- (BOOL)isAppMsgDownloading:(id)arg1;
- (BOOL)isAppMsgUploading:(id)arg1;
- (void)downloadVoiceWithMessage:(id)arg1;
- (id)getCheckingTpMediaMd5MessageForUniqueID:(id)arg1;
- (id)getUploadingVideoMessageForUniqueID:(id)arg1;
- (id)getDownloadingVideoMessageForUniqueID:(id)arg1;
- (void)cancelUploadVideoWithMessage:(id)arg1;
- (void)cancelPredownloadVideoWithMessage:(id)arg1 mediaType:(unsigned long long)arg2;
- (void)cancelDownloadVideoWithMessage:(id)arg1;
- (BOOL)downloadVideoWithMessage:(id)arg1 priorityInfo:(id)arg2 downloadType:(unsigned long long)arg3;
- (BOOL)downloadVideoWithMessage:(id)arg1;
- (void)onVideoSilentDownloadedSuccess:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onVideoDownloadCancel:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onVideoDownloadFailed:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onVideoDownloadFinished:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onVideoDownloading:(id)arg1 downloadType:(unsigned long long)arg2;
- (BOOL)isVideoMsgDownloading:(id)arg1;
- (BOOL)isVideoMsgUploading:(id)arg1;
- (BOOL)isFileSilentDownloading:(id)arg1;
- (BOOL)isFileMessageUploading:(id)arg1;
- (BOOL)isFileMessageDownloading:(id)arg1;
- (void)fileReTransferOfChat:(id)arg1 forMessage:(long long)arg2;
- (unsigned int)getFileMessageUploadedBytes:(id)arg1;
- (unsigned int)getFileMessageDownloadedBytes:(id)arg1;
- (id)getUploadingFileMessageForUniqueID:(id)arg1;
- (id)getDownloadingFileMessageForUniqueID:(id)arg1;
- (void)continueUploadFileWithMessage:(id)arg1;
- (void)cancelUploadFileWithMessage:(id)arg1;
- (void)cancelPredownloadFileWithMessage:(id)arg1;
- (void)cancelDownloadFileWithMessage:(id)arg1;
- (void)_startDownloadFileWithMessage:(id)arg1 destinationPath:(id)arg2 signature:(id)arg3 fakeAeskey:(id)arg4 fakeSignature:(id)arg5 priorityInfo:(id)arg6 downloadType:(unsigned long long)arg7;
- (void)downloadFileWithMessage:(id)arg1 chatName:(id)arg2 destinationPath:(id)arg3 priorityInfo:(id)arg4 downloadType:(unsigned long long)arg5;
- (void)downloadFileWithMessage:(id)arg1 chatName:(id)arg2 destinationPath:(id)arg3;
- (void)addFileDownloadedCallback:(CDUnknownBlockType)arg1 withMessage:(id)arg2;
- (void)onFileDownloadCancel:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onFileDownloadFailed:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onFileDownloadFinished:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onFileDownloading:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)cancelPredownloadImageWithMessage:(id)arg1 mediaType:(unsigned long long)arg2;
- (void)cancelDownloadImageWithMessage:(id)arg1;
- (BOOL)_startDownloadThumbImageByHttp:(id)arg1 httpUrl:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadThumbImageByHttp:(id)arg1 httpUrl:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_startDownloadThumbImageByCDN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadThumbImageByCDN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadThumbImage:(id)arg1 httpUrl:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)downloadMidImageWithMessage:(id)arg1 priorityInfo:(id)arg2 downloadType:(unsigned long long)arg3;
- (BOOL)downloadMidImageWithMessage:(id)arg1;
- (BOOL)downloadImageWithMessage:(id)arg1 priorityInfo:(id)arg2 downloadType:(unsigned long long)arg3;
- (BOOL)downloadImageWithMessage:(id)arg1;
- (void)onImageDownloadCancel:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onImageDownloadFailed:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onImageDownloadFinished:(id)arg1 downloadType:(unsigned long long)arg2 fileMD5:(id)arg3;
- (void)onImageDownloading:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onMidImageDownloadCancel:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onMidImageDownloadFailed:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onMidImageDownloadFinished:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onMidImageDownloading:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onThumbImageDownloadFailed:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)onThumbImageDownloadFinished:(id)arg1 downloadType:(unsigned long long)arg2;
- (BOOL)isMidImgMsgDownloading:(id)arg1;
- (BOOL)isImgMsgDownloading:(id)arg1;
- (BOOL)isImgMsgUploading:(id)arg1;
- (BOOL)isEmojiMsgUploading:(id)arg1;
- (BOOL)isTextMsgUploading:(id)arg1;
- (BOOL)normalDownloadWithMsgData:(id)arg1 source:(unsigned long long)arg2 mediaType:(unsigned long long)arg3;
- (void)handleMessageDownload:(id)arg1 source:(unsigned long long)arg2 mediaType:(unsigned long long)arg3 bAsync:(BOOL)arg4;
- (void)handleMessageDownload:(id)arg1 source:(unsigned long long)arg2 bAsync:(BOOL)arg3;
- (BOOL)checkFileNeedDownload:(id)arg1 fromDB:(BOOL)arg2;
- (BOOL)checkOriginImageNeedDownload:(id)arg1 fromDB:(BOOL)arg2;
- (BOOL)checkMidImageNeedDownload:(id)arg1;
- (BOOL)checkVideoNeedDownload:(id)arg1 fromDB:(BOOL)arg2;
- (BOOL)checkMessageExistInDB:(id)arg1;
- (BOOL)checkMessageTypeNeedDownload:(id)arg1;
- (void)cleanUploadTask:(id)arg1;
- (void)cleanDownloadTask:(id)arg1;
- (BOOL)isAutoDownload:(id)arg1;
- (id)GetMsgList:(id)arg1 arrFTSMessageData:(id)arg2;
- (id)GetMsgListWithChatName:(id)arg1 minCreateTime:(unsigned int)arg2 limitCnt:(unsigned int)arg3;
- (id)GetMsgListWithChatName:(id)arg1 minMesLocalId:(unsigned int)arg2 limitCnt:(unsigned int)arg3;
- (id)GetMaxLocalIdMsg:(id)arg1;
- (id)SearchWithKeyword:(id)arg1 chatName:(id)arg2 minMesLocalID:(unsigned int)arg3 limitCount:(unsigned int)arg4;
- (id)genMessage:(id)arg1 withReaderWrap:(id)arg2 msgLocalId:(unsigned int)arg3;
- (id)forwardMessageToWeWork:(id)arg1 withReaderWrap:(id)arg2;
- (id)SendRecordAppMsgToWeWork:(id)arg1 isSeparate:(BOOL)arg2;
- (id)SendEmojiMsgToWeWork:(BOOL)arg1 msgLocalId:(unsigned int)arg2;
- (id)SendNoteAppMsgToWeWork:(id)arg1 isSeparate:(BOOL)arg2;
- (id)SendFileAppMsgToWeWork:(id)arg1 filePath:(id)arg2 isSeparate:(BOOL)arg3 msgLocalId:(unsigned int)arg4;
- (id)SendVideoMsgToWeWork:(id)arg1 isSeparate:(BOOL)arg2;
- (void)asyncCompressVideoInGlobalQueueForWeWork:(id)arg1 videoDataInfo:(id)arg2 toUsrName:(id)arg3 isSeparate:(BOOL)arg4;
- (id)SendVideoMessageToWeWork:(id)arg1 msgType:(unsigned int)arg2 refMesageData:(id)arg3 isSeparate:(BOOL)arg4 msgLocalId:(unsigned int)arg5;
- (id)sendWebStreamVideoMessageToWeWork:(id)arg1 isSeparate:(BOOL)arg2;
- (id)SendImgMessageToWeWork:(id)arg1 imgData:(id)arg2 imgInfo:(id)arg3 isSeparate:(BOOL)arg4 msgLocalId:(unsigned int)arg5;
- (id)SendLocationMsgToWeWork:(double)arg1 longitude:(double)arg2 poiName:(id)arg3 label:(id)arg4 isSeparate:(BOOL)arg5 msgLocalId:(unsigned int)arg6;
- (id)SendMusicMsgToWeWork:(BOOL)arg1 msgLocalId:(unsigned int)arg2;
- (id)SendAppMusicMessageToWeWork:(id)arg1 url:(id)arg2 description:(id)arg3 thumbnailData:(id)arg4 isSeparate:(BOOL)arg5 msgLocalId:(unsigned int)arg6;
- (id)SendAppURLMessageToWeWork:(id)arg1 url:(id)arg2 description:(id)arg3 thumbnailData:(id)arg4 isSeparate:(BOOL)arg5 msgLocalId:(unsigned int)arg6;
- (id)SendAppURLMessageToWeWork:(id)arg1 url:(id)arg2 description:(id)arg3 thumbUrl:(id)arg4 sourceUserName:(id)arg5 sourceDisplayName:(id)arg6 isSeparate:(BOOL)arg7 msgLocalId:(unsigned int)arg8;
- (id)SendTextMessageToWeWork:(id)arg1 atUserList:(id)arg2 senderInfo:(id)arg3 isSeparate:(BOOL)arg4 msgLocalId:(unsigned int)arg5;
- (id)forwardUnsupportTypeMessageToWeWork:(id)arg1 isSpeperateForward:(BOOL)arg2;
- (id)forwardSolitaireAppMsgToWeWork:(id)arg1 isSpeperateForward:(BOOL)arg2;
- (id)forwardGroupNoticeAppMsgToWeWork:(id)arg1 isSpeperateForward:(BOOL)arg2;
- (id)forwardAppReferMsgMessageToWeWork:(id)arg1 isSpeperateForward:(BOOL)arg2;
- (id)forwardAppFileMessageToWeWork:(id)arg1 isSpeperateForward:(BOOL)arg2;
- (id)forwardAppMessageToWeWork:(id)arg1 isSeparateForward:(BOOL)arg2 mustUploadSource:(BOOL)arg3;
- (id)forwardVideoMessageToWeWork:(id)arg1 isSpeperateForward:(BOOL)arg2;
- (id)forwardImageMessageToWeWork:(id)arg1 isSpeperateForward:(BOOL)arg2;
- (id)forwardTextMessageToWeWork:(id)arg1 isSpeperateForward:(BOOL)arg2;
- (id)forwardSingleMessageToWeWork:(id)arg1 isSeparateForward:(BOOL)arg2;
- (id)forwardSingleMessageToWeWork:(id)arg1;
- (BOOL)forwardMessageDatasToWeWork:(id)arg1;
- (id)sendImageFromFile:(id)arg1 idx:(unsigned int)arg2;
- (BOOL)sendFilesToWeWork:(id)arg1;
- (void)onAppMsgCheckIsExist:(id)arg1 isSuccess:(BOOL)arg2;
- (void)checkOneAppMsgIsExist:(id)arg1;
- (void)pushAndCheckFileQueue:(id)arg1;
- (void)trySilentDownloadNextFile;
- (void)onFileDidCancelSilentDownloadWithMessage:(id)arg1;
- (void)onFileDidFailDownloadWithMessage:(id)arg1;
- (void)onFileDidFinishSilentDownloadWithMessage:(id)arg1;
- (void)silentUploadFile:(id)arg1;
- (id)forwardRecordMsgFromWeWork:(id)arg1 spMsgData:(id)arg2 toUser:(id)arg3 isSingleRecord:(BOOL)arg4 errMsg:(id *)arg5;
- (id)downloadAndForwardAppFileMessage:(id)arg1 spMsgData:(id)arg2 toUser:(id)arg3 errMsg:(id *)arg4;
- (void)onImgMsgCheckExistFinish:(id)arg1 isSuccess:(BOOL)arg2;
- (void)silentUploadImg:(id)arg1;
- (id)downloadAndForwardImageMessage:(id)arg1 spMsgData:(id)arg2 toUser:(id)arg3 errMsg:(id *)arg4;
- (void)onVideoCheckExistFinish:(id)arg1 isSuccess:(BOOL)arg2;
- (void)silentUploadVideo:(id)arg1;
- (id)downloadAndForwardVideoMessage:(id)arg1 spMsgData:(id)arg2 toUser:(id)arg3 errMsg:(id *)arg4;
- (id)forwardMessageFromWeWork:(id)arg1 spMsgData:(id)arg2 toUser:(id)arg3 isSingleRecord:(BOOL)arg4 errMsg:(id *)arg5;
- (BOOL)checkMediaFileSize:(id)arg1 tarFileSize:(unsigned int)arg2;
- (id)getMsgDeletion:(id)arg1 mesSvrId:(long long)arg2 msgDB:(id)arg3;
- (id)getLastMsgDeletion:(id)arg1 msgDB:(id)arg2;
- (BOOL)deleteMsgGapBy:(id)arg1;
- (BOOL)updateMsgGapBy:(id)arg1;
- (BOOL)deleteMsgGapEarlierThan:(unsigned int)arg1;
- (id)getMsgGapsFrom:(unsigned int)arg1 to:(unsigned int)arg2 chat:(id)arg3;
- (void)addMsgGapForSessions:(id)arg1 startTime:(unsigned int)arg2 endTime:(unsigned int)arg3;
- (int)changeType:(id)arg1 oldMsg:(id)arg2;
- (id)getOldMsg:(long long)arg1 oldMsgList:(id)arg2;
- (void)movePathsFromOldMessage:(id)arg1 toNewMessage:(id)arg2;
- (void)sendChatSyncNewXml:(id)arg1 startTime:(unsigned int)arg2 endTime:(unsigned int)arg3 sessionName:(id)arg4 identifier:(id)arg5 limit:(unsigned int)arg6;
- (BOOL)insertMsgList:(id)arg1 chatName:(id)arg2 toDB:(id)arg3 oldMsgList:(id)arg4;
- (id)genMsgDataFromBakChatMsgItem:(id)arg1;
- (BOOL)shouldFilterMsgRead:(id)arg1;
- (void)updateSession:(id)arg1 chatName:(id)arg2 toDB:(id)arg3;
- (BOOL)isInMessageException:(id)arg1 chatName:(id)arg2 toDB:(id)arg3 sender:(id)arg4;
- (id)getAdjustMessage:(id)arg1 chatName:(id)arg2 toDB:(id)arg3 oldMsgList:(id)arg4;
- (id)getFilterDeleteMessage:(id)arg1 chatName:(id)arg2 toDB:(id)arg3;
- (id)getFilterUnSupportMessage:(id)arg1;
- (id)parseAndSortSyncMsgList:(id)arg1;
- (void)OnSyncBatchBakChatMsg:(id)arg1 sender:(id)arg2 message:(id)arg3 msgGap:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

