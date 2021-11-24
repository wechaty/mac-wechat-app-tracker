//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface OpenIMChatRoomData : PBGeneratedMessage
{
    unsigned int hasOwner:1;
    unsigned int hasBigHeadimg:1;
    unsigned int hasSmallHeadimg:1;
    unsigned int hasImgFlag:1;
    unsigned int hasTopic:1;
    unsigned int hasTopicPyinit:1;
    unsigned int hasTopicQuanpin:1;
    unsigned int hasAnnouncement:1;
    unsigned int hasAnnouncementEditor:1;
    unsigned int hasAnnouncementPublishTime:1;
    unsigned int hasChatRoomMaxCount:1;
    unsigned int imgFlag;
    unsigned int announcementPublishTime;
    unsigned int chatRoomMaxCount;
    NSString *owner;
    NSString *bigHeadimg;
    NSString *smallHeadimg;
    NSString *topic;
    NSString *topicPyinit;
    NSString *topicQuanpin;
    NSString *announcement;
    NSString *announcementEditor;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetChatRoomMaxCount:) unsigned int chatRoomMaxCount; // @synthesize chatRoomMaxCount;
@property(readonly, nonatomic) BOOL hasChatRoomMaxCount; // @synthesize hasChatRoomMaxCount;
@property(nonatomic, setter=SetAnnouncementPublishTime:) unsigned int announcementPublishTime; // @synthesize announcementPublishTime;
@property(readonly, nonatomic) BOOL hasAnnouncementPublishTime; // @synthesize hasAnnouncementPublishTime;
@property(retain, nonatomic, setter=SetAnnouncementEditor:) NSString *announcementEditor; // @synthesize announcementEditor;
@property(readonly, nonatomic) BOOL hasAnnouncementEditor; // @synthesize hasAnnouncementEditor;
@property(retain, nonatomic, setter=SetAnnouncement:) NSString *announcement; // @synthesize announcement;
@property(readonly, nonatomic) BOOL hasAnnouncement; // @synthesize hasAnnouncement;
@property(retain, nonatomic, setter=SetTopicQuanpin:) NSString *topicQuanpin; // @synthesize topicQuanpin;
@property(readonly, nonatomic) BOOL hasTopicQuanpin; // @synthesize hasTopicQuanpin;
@property(retain, nonatomic, setter=SetTopicPyinit:) NSString *topicPyinit; // @synthesize topicPyinit;
@property(readonly, nonatomic) BOOL hasTopicPyinit; // @synthesize hasTopicPyinit;
@property(retain, nonatomic, setter=SetTopic:) NSString *topic; // @synthesize topic;
@property(readonly, nonatomic) BOOL hasTopic; // @synthesize hasTopic;
@property(nonatomic, setter=SetImgFlag:) unsigned int imgFlag; // @synthesize imgFlag;
@property(readonly, nonatomic) BOOL hasImgFlag; // @synthesize hasImgFlag;
@property(retain, nonatomic, setter=SetSmallHeadimg:) NSString *smallHeadimg; // @synthesize smallHeadimg;
@property(readonly, nonatomic) BOOL hasSmallHeadimg; // @synthesize hasSmallHeadimg;
@property(retain, nonatomic, setter=SetBigHeadimg:) NSString *bigHeadimg; // @synthesize bigHeadimg;
@property(readonly, nonatomic) BOOL hasBigHeadimg; // @synthesize hasBigHeadimg;
@property(retain, nonatomic, setter=SetOwner:) NSString *owner; // @synthesize owner;
@property(readonly, nonatomic) BOOL hasOwner; // @synthesize hasOwner;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

