//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, NSString;

@interface ReportRequest : PBGeneratedMessage
{
    unsigned int hasScene:1;
    unsigned int hasSearchId:1;
    unsigned int hasRecommendId:1;
    unsigned int hasBusinessType:1;
    unsigned int hasDocId:1;
    unsigned int hasDocPos:1;
    unsigned int hasTypePos:1;
    unsigned int hasIsHomePage:1;
    unsigned int hasTimestamp:1;
    unsigned int hasExpand1:1;
    unsigned int hasSuggestionId:1;
    unsigned int hasClickType:1;
    unsigned int hasExpand2:1;
    unsigned int hasLogString:1;
    unsigned int hasClickSource:1;
    unsigned int hasSceneActionType:1;
    unsigned int hasH5Version:1;
    unsigned int hasQuery:1;
    unsigned int hasResultType:1;
    unsigned int hasWeAppH5Version:1;
    unsigned int hasJumpUrl:1;
    unsigned int hasSessionId:1;
    unsigned int hasItemType:1;
    unsigned int hasExpand:1;
    unsigned int hasTitle:1;
    unsigned int hasBizName:1;
    unsigned int hasClickZone:1;
    unsigned int hasNetType:1;
    unsigned int hasRequestId:1;
    unsigned int hasChannelid:1;
    unsigned int hasClickContent:1;
    unsigned int hasReqSubType:1;
    unsigned int hasResultSubType:1;
    unsigned int hasParentSearchId:1;
    unsigned int hasReqBusinessType:1;
    unsigned int hasBoxId:1;
    unsigned int hasCdnHttpHead:1;
    unsigned int hasVideoUrl:1;
    unsigned int hasByPass:1;
    unsigned int hasSource:1;
    unsigned int hasPageNo:1;
    unsigned int scene;
    unsigned int docPos;
    unsigned int typePos;
    unsigned int isHomePage;
    unsigned int expand1;
    unsigned int clickType;
    unsigned int clickSource;
    unsigned int sceneActionType;
    unsigned int h5Version;
    unsigned int resultType;
    unsigned int weAppH5Version;
    unsigned int itemType;
    unsigned int channelid;
    unsigned int reqSubType;
    unsigned int resultSubType;
    unsigned int reqBusinessType;
    unsigned int source;
    unsigned int pageNo;
    NSString *searchId;
    NSString *recommendId;
    unsigned long long businessType;
    NSString *docId;
    unsigned long long timestamp;
    NSString *suggestionId;
    NSString *expand2;
    NSString *logString;
    NSString *query;
    NSData *jumpUrl;
    NSString *sessionId;
    NSString *expand;
    NSString *title;
    NSString *bizName;
    NSString *clickZone;
    NSString *netType;
    NSData *requestId;
    NSData *clickContent;
    NSData *parentSearchId;
    NSData *boxId;
    NSString *cdnHttpHead;
    NSString *videoUrl;
    NSString *byPass;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetPageNo:) unsigned int pageNo; // @synthesize pageNo;
@property(readonly, nonatomic) BOOL hasPageNo; // @synthesize hasPageNo;
@property(nonatomic, setter=SetSource:) unsigned int source; // @synthesize source;
@property(readonly, nonatomic) BOOL hasSource; // @synthesize hasSource;
@property(retain, nonatomic, setter=SetByPass:) NSString *byPass; // @synthesize byPass;
@property(readonly, nonatomic) BOOL hasByPass; // @synthesize hasByPass;
@property(retain, nonatomic, setter=SetVideoUrl:) NSString *videoUrl; // @synthesize videoUrl;
@property(readonly, nonatomic) BOOL hasVideoUrl; // @synthesize hasVideoUrl;
@property(retain, nonatomic, setter=SetCdnHttpHead:) NSString *cdnHttpHead; // @synthesize cdnHttpHead;
@property(readonly, nonatomic) BOOL hasCdnHttpHead; // @synthesize hasCdnHttpHead;
@property(retain, nonatomic, setter=SetBoxId:) NSData *boxId; // @synthesize boxId;
@property(readonly, nonatomic) BOOL hasBoxId; // @synthesize hasBoxId;
@property(nonatomic, setter=SetReqBusinessType:) unsigned int reqBusinessType; // @synthesize reqBusinessType;
@property(readonly, nonatomic) BOOL hasReqBusinessType; // @synthesize hasReqBusinessType;
@property(retain, nonatomic, setter=SetParentSearchId:) NSData *parentSearchId; // @synthesize parentSearchId;
@property(readonly, nonatomic) BOOL hasParentSearchId; // @synthesize hasParentSearchId;
@property(nonatomic, setter=SetResultSubType:) unsigned int resultSubType; // @synthesize resultSubType;
@property(readonly, nonatomic) BOOL hasResultSubType; // @synthesize hasResultSubType;
@property(nonatomic, setter=SetReqSubType:) unsigned int reqSubType; // @synthesize reqSubType;
@property(readonly, nonatomic) BOOL hasReqSubType; // @synthesize hasReqSubType;
@property(retain, nonatomic, setter=SetClickContent:) NSData *clickContent; // @synthesize clickContent;
@property(readonly, nonatomic) BOOL hasClickContent; // @synthesize hasClickContent;
@property(nonatomic, setter=SetChannelid:) unsigned int channelid; // @synthesize channelid;
@property(readonly, nonatomic) BOOL hasChannelid; // @synthesize hasChannelid;
@property(retain, nonatomic, setter=SetRequestId:) NSData *requestId; // @synthesize requestId;
@property(readonly, nonatomic) BOOL hasRequestId; // @synthesize hasRequestId;
@property(retain, nonatomic, setter=SetNetType:) NSString *netType; // @synthesize netType;
@property(readonly, nonatomic) BOOL hasNetType; // @synthesize hasNetType;
@property(retain, nonatomic, setter=SetClickZone:) NSString *clickZone; // @synthesize clickZone;
@property(readonly, nonatomic) BOOL hasClickZone; // @synthesize hasClickZone;
@property(retain, nonatomic, setter=SetBizName:) NSString *bizName; // @synthesize bizName;
@property(readonly, nonatomic) BOOL hasBizName; // @synthesize hasBizName;
@property(retain, nonatomic, setter=SetTitle:) NSString *title; // @synthesize title;
@property(readonly, nonatomic) BOOL hasTitle; // @synthesize hasTitle;
@property(retain, nonatomic, setter=SetExpand:) NSString *expand; // @synthesize expand;
@property(readonly, nonatomic) BOOL hasExpand; // @synthesize hasExpand;
@property(nonatomic, setter=SetItemType:) unsigned int itemType; // @synthesize itemType;
@property(readonly, nonatomic) BOOL hasItemType; // @synthesize hasItemType;
@property(retain, nonatomic, setter=SetSessionId:) NSString *sessionId; // @synthesize sessionId;
@property(readonly, nonatomic) BOOL hasSessionId; // @synthesize hasSessionId;
@property(retain, nonatomic, setter=SetJumpUrl:) NSData *jumpUrl; // @synthesize jumpUrl;
@property(readonly, nonatomic) BOOL hasJumpUrl; // @synthesize hasJumpUrl;
@property(nonatomic, setter=SetWeAppH5Version:) unsigned int weAppH5Version; // @synthesize weAppH5Version;
@property(readonly, nonatomic) BOOL hasWeAppH5Version; // @synthesize hasWeAppH5Version;
@property(nonatomic, setter=SetResultType:) unsigned int resultType; // @synthesize resultType;
@property(readonly, nonatomic) BOOL hasResultType; // @synthesize hasResultType;
@property(retain, nonatomic, setter=SetQuery:) NSString *query; // @synthesize query;
@property(readonly, nonatomic) BOOL hasQuery; // @synthesize hasQuery;
@property(nonatomic, setter=SetH5Version:) unsigned int h5Version; // @synthesize h5Version;
@property(readonly, nonatomic) BOOL hasH5Version; // @synthesize hasH5Version;
@property(nonatomic, setter=SetSceneActionType:) unsigned int sceneActionType; // @synthesize sceneActionType;
@property(readonly, nonatomic) BOOL hasSceneActionType; // @synthesize hasSceneActionType;
@property(nonatomic, setter=SetClickSource:) unsigned int clickSource; // @synthesize clickSource;
@property(readonly, nonatomic) BOOL hasClickSource; // @synthesize hasClickSource;
@property(retain, nonatomic, setter=SetLogString:) NSString *logString; // @synthesize logString;
@property(readonly, nonatomic) BOOL hasLogString; // @synthesize hasLogString;
@property(retain, nonatomic, setter=SetExpand2:) NSString *expand2; // @synthesize expand2;
@property(readonly, nonatomic) BOOL hasExpand2; // @synthesize hasExpand2;
@property(nonatomic, setter=SetClickType:) unsigned int clickType; // @synthesize clickType;
@property(readonly, nonatomic) BOOL hasClickType; // @synthesize hasClickType;
@property(retain, nonatomic, setter=SetSuggestionId:) NSString *suggestionId; // @synthesize suggestionId;
@property(readonly, nonatomic) BOOL hasSuggestionId; // @synthesize hasSuggestionId;
@property(nonatomic, setter=SetExpand1:) unsigned int expand1; // @synthesize expand1;
@property(readonly, nonatomic) BOOL hasExpand1; // @synthesize hasExpand1;
@property(nonatomic, setter=SetTimestamp:) unsigned long long timestamp; // @synthesize timestamp;
@property(readonly, nonatomic) BOOL hasTimestamp; // @synthesize hasTimestamp;
@property(nonatomic, setter=SetIsHomePage:) unsigned int isHomePage; // @synthesize isHomePage;
@property(readonly, nonatomic) BOOL hasIsHomePage; // @synthesize hasIsHomePage;
@property(nonatomic, setter=SetTypePos:) unsigned int typePos; // @synthesize typePos;
@property(readonly, nonatomic) BOOL hasTypePos; // @synthesize hasTypePos;
@property(nonatomic, setter=SetDocPos:) unsigned int docPos; // @synthesize docPos;
@property(readonly, nonatomic) BOOL hasDocPos; // @synthesize hasDocPos;
@property(retain, nonatomic, setter=SetDocId:) NSString *docId; // @synthesize docId;
@property(readonly, nonatomic) BOOL hasDocId; // @synthesize hasDocId;
@property(nonatomic, setter=SetBusinessType:) unsigned long long businessType; // @synthesize businessType;
@property(readonly, nonatomic) BOOL hasBusinessType; // @synthesize hasBusinessType;
@property(retain, nonatomic, setter=SetRecommendId:) NSString *recommendId; // @synthesize recommendId;
@property(readonly, nonatomic) BOOL hasRecommendId; // @synthesize hasRecommendId;
@property(retain, nonatomic, setter=SetSearchId:) NSString *searchId; // @synthesize searchId;
@property(readonly, nonatomic) BOOL hasSearchId; // @synthesize hasSearchId;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

