//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, CanvasInfo, NSMutableArray, NSString, OpenSDKInfo, SKBuiltinBuffer_t, SnsExtStatData, SnsPostCtocUploadInfo, SnsPostOperationFields, SnsWeAppInfo, TwitterInfo;

@interface SnsPostRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasObjectDesc:1;
    unsigned int hasWithUserListCount:1;
    unsigned int hasPrivacy:1;
    unsigned int hasSyncFlag:1;
    unsigned int hasClientId:1;
    unsigned int hasPostBgimgType:1;
    unsigned int hasGroupCount:1;
    unsigned int hasObjectSource:1;
    unsigned int hasReferId:1;
    unsigned int hasBlackListCount:1;
    unsigned int hasTwitterInfo:1;
    unsigned int hasGroupUserCount:1;
    unsigned int hasCtocUploadInfo:1;
    unsigned int hasSnsPostOperationFields:1;
    unsigned int hasPoiInfo:1;
    unsigned int hasFromScene:1;
    unsigned int hasCanvasInfo:1;
    unsigned int hasMediaInfoCount:1;
    unsigned int hasWeAppInfo:1;
    unsigned int hasClientCheckData:1;
    unsigned int hasExtSpamInfo:1;
    unsigned int hasOpenSdkinfo:1;
    unsigned int hasWithChatroomListCount:1;
    unsigned int hasWithTaUserListCount:1;
    unsigned int hasReportData:1;
    unsigned int hasExtStatData:1;
    unsigned int hasBlackContactTagIdListCount:1;
    int blackContactTagIdListMemoizedSerializedSize;
    unsigned int hasGroupContactTagIdListCount:1;
    int groupContactTagIdListMemoizedSerializedSize;
    unsigned int withUserListCount;
    unsigned int privacy;
    unsigned int syncFlag;
    unsigned int postBgimgType;
    unsigned int groupCount;
    unsigned int objectSource;
    unsigned int blackListCount;
    unsigned int groupUserCount;
    unsigned int mediaInfoCount;
    unsigned int withChatroomListCount;
    unsigned int withTaUserListCount;
    unsigned int blackContactTagIdListCount;
    unsigned int groupContactTagIdListCount;
    BaseRequest *baseRequest;
    SKBuiltinBuffer_t *objectDesc;
    NSMutableArray *mutableWithUserListList;
    NSString *clientId;
    NSMutableArray *mutableGroupIdsList;
    unsigned long long referId;
    NSMutableArray *mutableBlackListList;
    TwitterInfo *twitterInfo;
    NSMutableArray *mutableGroupUserList;
    SnsPostCtocUploadInfo *ctocUploadInfo;
    SnsPostOperationFields *snsPostOperationFields;
    SKBuiltinBuffer_t *poiInfo;
    NSString *fromScene;
    CanvasInfo *canvasInfo;
    NSMutableArray *mutableMediaInfoList;
    SnsWeAppInfo *weAppInfo;
    SKBuiltinBuffer_t *clientCheckData;
    SKBuiltinBuffer_t *extSpamInfo;
    OpenSDKInfo *openSdkinfo;
    NSMutableArray *mutableWithChatroomListList;
    NSMutableArray *mutableWithTaUserListList;
    NSString *reportData;
    SnsExtStatData *extStatData;
    NSMutableArray *mutableBlackContactTagIdListList;
    NSMutableArray *mutableGroupContactTagIdListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableGroupContactTagIdListList; // @synthesize mutableGroupContactTagIdListList;
@property(nonatomic, setter=SetGroupContactTagIdListCount:) unsigned int groupContactTagIdListCount; // @synthesize groupContactTagIdListCount;
@property(readonly, nonatomic) BOOL hasGroupContactTagIdListCount; // @synthesize hasGroupContactTagIdListCount;
@property(retain, nonatomic) NSMutableArray *mutableBlackContactTagIdListList; // @synthesize mutableBlackContactTagIdListList;
@property(nonatomic, setter=SetBlackContactTagIdListCount:) unsigned int blackContactTagIdListCount; // @synthesize blackContactTagIdListCount;
@property(readonly, nonatomic) BOOL hasBlackContactTagIdListCount; // @synthesize hasBlackContactTagIdListCount;
@property(retain, nonatomic, setter=SetExtStatData:) SnsExtStatData *extStatData; // @synthesize extStatData;
@property(readonly, nonatomic) BOOL hasExtStatData; // @synthesize hasExtStatData;
@property(retain, nonatomic, setter=SetReportData:) NSString *reportData; // @synthesize reportData;
@property(readonly, nonatomic) BOOL hasReportData; // @synthesize hasReportData;
@property(retain, nonatomic) NSMutableArray *mutableWithTaUserListList; // @synthesize mutableWithTaUserListList;
@property(nonatomic, setter=SetWithTaUserListCount:) unsigned int withTaUserListCount; // @synthesize withTaUserListCount;
@property(readonly, nonatomic) BOOL hasWithTaUserListCount; // @synthesize hasWithTaUserListCount;
@property(retain, nonatomic) NSMutableArray *mutableWithChatroomListList; // @synthesize mutableWithChatroomListList;
@property(nonatomic, setter=SetWithChatroomListCount:) unsigned int withChatroomListCount; // @synthesize withChatroomListCount;
@property(readonly, nonatomic) BOOL hasWithChatroomListCount; // @synthesize hasWithChatroomListCount;
@property(retain, nonatomic, setter=SetOpenSdkinfo:) OpenSDKInfo *openSdkinfo; // @synthesize openSdkinfo;
@property(readonly, nonatomic) BOOL hasOpenSdkinfo; // @synthesize hasOpenSdkinfo;
@property(retain, nonatomic, setter=SetExtSpamInfo:) SKBuiltinBuffer_t *extSpamInfo; // @synthesize extSpamInfo;
@property(readonly, nonatomic) BOOL hasExtSpamInfo; // @synthesize hasExtSpamInfo;
@property(retain, nonatomic, setter=SetClientCheckData:) SKBuiltinBuffer_t *clientCheckData; // @synthesize clientCheckData;
@property(readonly, nonatomic) BOOL hasClientCheckData; // @synthesize hasClientCheckData;
@property(retain, nonatomic, setter=SetWeAppInfo:) SnsWeAppInfo *weAppInfo; // @synthesize weAppInfo;
@property(readonly, nonatomic) BOOL hasWeAppInfo; // @synthesize hasWeAppInfo;
@property(retain, nonatomic) NSMutableArray *mutableMediaInfoList; // @synthesize mutableMediaInfoList;
@property(nonatomic, setter=SetMediaInfoCount:) unsigned int mediaInfoCount; // @synthesize mediaInfoCount;
@property(readonly, nonatomic) BOOL hasMediaInfoCount; // @synthesize hasMediaInfoCount;
@property(retain, nonatomic, setter=SetCanvasInfo:) CanvasInfo *canvasInfo; // @synthesize canvasInfo;
@property(readonly, nonatomic) BOOL hasCanvasInfo; // @synthesize hasCanvasInfo;
@property(retain, nonatomic, setter=SetFromScene:) NSString *fromScene; // @synthesize fromScene;
@property(readonly, nonatomic) BOOL hasFromScene; // @synthesize hasFromScene;
@property(retain, nonatomic, setter=SetPoiInfo:) SKBuiltinBuffer_t *poiInfo; // @synthesize poiInfo;
@property(readonly, nonatomic) BOOL hasPoiInfo; // @synthesize hasPoiInfo;
@property(retain, nonatomic, setter=SetSnsPostOperationFields:) SnsPostOperationFields *snsPostOperationFields; // @synthesize snsPostOperationFields;
@property(readonly, nonatomic) BOOL hasSnsPostOperationFields; // @synthesize hasSnsPostOperationFields;
@property(retain, nonatomic, setter=SetCtocUploadInfo:) SnsPostCtocUploadInfo *ctocUploadInfo; // @synthesize ctocUploadInfo;
@property(readonly, nonatomic) BOOL hasCtocUploadInfo; // @synthesize hasCtocUploadInfo;
@property(retain, nonatomic) NSMutableArray *mutableGroupUserList; // @synthesize mutableGroupUserList;
@property(nonatomic, setter=SetGroupUserCount:) unsigned int groupUserCount; // @synthesize groupUserCount;
@property(readonly, nonatomic) BOOL hasGroupUserCount; // @synthesize hasGroupUserCount;
@property(retain, nonatomic, setter=SetTwitterInfo:) TwitterInfo *twitterInfo; // @synthesize twitterInfo;
@property(readonly, nonatomic) BOOL hasTwitterInfo; // @synthesize hasTwitterInfo;
@property(retain, nonatomic) NSMutableArray *mutableBlackListList; // @synthesize mutableBlackListList;
@property(nonatomic, setter=SetBlackListCount:) unsigned int blackListCount; // @synthesize blackListCount;
@property(readonly, nonatomic) BOOL hasBlackListCount; // @synthesize hasBlackListCount;
@property(nonatomic, setter=SetReferId:) unsigned long long referId; // @synthesize referId;
@property(readonly, nonatomic) BOOL hasReferId; // @synthesize hasReferId;
@property(nonatomic, setter=SetObjectSource:) unsigned int objectSource; // @synthesize objectSource;
@property(readonly, nonatomic) BOOL hasObjectSource; // @synthesize hasObjectSource;
@property(retain, nonatomic) NSMutableArray *mutableGroupIdsList; // @synthesize mutableGroupIdsList;
@property(nonatomic, setter=SetGroupCount:) unsigned int groupCount; // @synthesize groupCount;
@property(readonly, nonatomic) BOOL hasGroupCount; // @synthesize hasGroupCount;
@property(nonatomic, setter=SetPostBgimgType:) unsigned int postBgimgType; // @synthesize postBgimgType;
@property(readonly, nonatomic) BOOL hasPostBgimgType; // @synthesize hasPostBgimgType;
@property(retain, nonatomic, setter=SetClientId:) NSString *clientId; // @synthesize clientId;
@property(readonly, nonatomic) BOOL hasClientId; // @synthesize hasClientId;
@property(nonatomic, setter=SetSyncFlag:) unsigned int syncFlag; // @synthesize syncFlag;
@property(readonly, nonatomic) BOOL hasSyncFlag; // @synthesize hasSyncFlag;
@property(nonatomic, setter=SetPrivacy:) unsigned int privacy; // @synthesize privacy;
@property(readonly, nonatomic) BOOL hasPrivacy; // @synthesize hasPrivacy;
@property(retain, nonatomic) NSMutableArray *mutableWithUserListList; // @synthesize mutableWithUserListList;
@property(nonatomic, setter=SetWithUserListCount:) unsigned int withUserListCount; // @synthesize withUserListCount;
@property(readonly, nonatomic) BOOL hasWithUserListCount; // @synthesize hasWithUserListCount;
@property(retain, nonatomic, setter=SetObjectDesc:) SKBuiltinBuffer_t *objectDesc; // @synthesize objectDesc;
@property(readonly, nonatomic) BOOL hasObjectDesc; // @synthesize hasObjectDesc;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addGroupContactTagIdListFromArray:(id)arg1;
- (void)addGroupContactTagIdList:(unsigned int)arg1;
- (void)addBlackContactTagIdListFromArray:(id)arg1;
- (void)addBlackContactTagIdList:(unsigned int)arg1;
- (void)addWithTaUserList:(id)arg1;
- (void)addWithTaUserListFromArray:(id)arg1;
- (void)addWithChatroomList:(id)arg1;
- (void)addWithChatroomListFromArray:(id)arg1;
- (void)addMediaInfo:(id)arg1;
- (void)addMediaInfoFromArray:(id)arg1;
- (void)addGroupUser:(id)arg1;
- (void)addGroupUserFromArray:(id)arg1;
- (void)addBlackList:(id)arg1;
- (void)addBlackListFromArray:(id)arg1;
- (void)addGroupIds:(id)arg1;
- (void)addGroupIdsFromArray:(id)arg1;
- (void)addWithUserList:(id)arg1;
- (void)addWithUserListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *groupContactTagIdList; // @dynamic groupContactTagIdList;
- (id)groupContactTagIdListList;
@property(retain, nonatomic) NSMutableArray *blackContactTagIdList; // @dynamic blackContactTagIdList;
- (id)blackContactTagIdListList;
@property(retain, nonatomic) NSMutableArray *withTaUserList; // @dynamic withTaUserList;
- (id)withTaUserListList;
@property(retain, nonatomic) NSMutableArray *withChatroomList; // @dynamic withChatroomList;
- (id)withChatroomListList;
@property(retain, nonatomic) NSMutableArray *mediaInfo; // @dynamic mediaInfo;
- (id)mediaInfoList;
@property(retain, nonatomic) NSMutableArray *groupUser; // @dynamic groupUser;
- (id)groupUserList;
@property(retain, nonatomic) NSMutableArray *blackList; // @dynamic blackList;
- (id)blackListList;
@property(retain, nonatomic) NSMutableArray *groupIds; // @dynamic groupIds;
- (id)groupIdsList;
@property(retain, nonatomic) NSMutableArray *withUserList; // @dynamic withUserList;
- (id)withUserListList;
- (id)init;

@end

