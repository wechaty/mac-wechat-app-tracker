//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

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
    unsigned int scene;
    unsigned int docPos;
    unsigned int typePos;
    unsigned int isHomePage;
    unsigned int expand1;
    unsigned int clickType;
    unsigned int clickSource;
    unsigned int sceneActionType;
    unsigned int h5Version;
    NSString *searchId;
    NSString *recommendId;
    unsigned long long businessType;
    NSString *docId;
    unsigned long long timestamp;
    NSString *suggestionId;
    NSString *expand2;
    NSString *logString;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
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

