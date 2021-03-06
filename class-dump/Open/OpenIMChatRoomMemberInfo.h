//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface OpenIMChatRoomMemberInfo : PBGeneratedMessage
{
    unsigned int hasUserName:1;
    unsigned int hasNickName:1;
    unsigned int hasDisplayName:1;
    unsigned int hasBigHeadimgUrl:1;
    unsigned int hasSmallHeadimgUrl:1;
    unsigned int hasChatroomMemberFlag:1;
    unsigned int hasAppId:1;
    unsigned int hasDescWordingId:1;
    unsigned int hasInviterUserName:1;
    unsigned int chatroomMemberFlag;
    NSString *userName;
    NSString *nickName;
    NSString *displayName;
    NSString *bigHeadimgUrl;
    NSString *smallHeadimgUrl;
    NSString *appId;
    NSString *descWordingId;
    NSString *inviterUserName;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetInviterUserName:) NSString *inviterUserName; // @synthesize inviterUserName;
@property(readonly, nonatomic) BOOL hasInviterUserName; // @synthesize hasInviterUserName;
@property(retain, nonatomic, setter=SetDescWordingId:) NSString *descWordingId; // @synthesize descWordingId;
@property(readonly, nonatomic) BOOL hasDescWordingId; // @synthesize hasDescWordingId;
@property(retain, nonatomic, setter=SetAppId:) NSString *appId; // @synthesize appId;
@property(readonly, nonatomic) BOOL hasAppId; // @synthesize hasAppId;
@property(nonatomic, setter=SetChatroomMemberFlag:) unsigned int chatroomMemberFlag; // @synthesize chatroomMemberFlag;
@property(readonly, nonatomic) BOOL hasChatroomMemberFlag; // @synthesize hasChatroomMemberFlag;
@property(retain, nonatomic, setter=SetSmallHeadimgUrl:) NSString *smallHeadimgUrl; // @synthesize smallHeadimgUrl;
@property(readonly, nonatomic) BOOL hasSmallHeadimgUrl; // @synthesize hasSmallHeadimgUrl;
@property(retain, nonatomic, setter=SetBigHeadimgUrl:) NSString *bigHeadimgUrl; // @synthesize bigHeadimgUrl;
@property(readonly, nonatomic) BOOL hasBigHeadimgUrl; // @synthesize hasBigHeadimgUrl;
@property(retain, nonatomic, setter=SetDisplayName:) NSString *displayName; // @synthesize displayName;
@property(readonly, nonatomic) BOOL hasDisplayName; // @synthesize hasDisplayName;
@property(retain, nonatomic, setter=SetNickName:) NSString *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

