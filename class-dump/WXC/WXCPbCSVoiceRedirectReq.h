//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WXCPbCSVoiceRedirectReq : PBGeneratedMessage
{
    unsigned int hasGroupId:1;
    unsigned int hasRoomid:1;
    unsigned int hasRoomkey:1;
    unsigned int hasMemberId:1;
    unsigned int hasUserAbility:1;
    unsigned int hasNetType:1;
    unsigned int hasRedirectType:1;
    int roomid;
    int memberId;
    unsigned int userAbility;
    unsigned int netType;
    int redirectType;
    NSString *groupId;
    long long roomkey;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetRedirectType:) int redirectType; // @synthesize redirectType;
@property(readonly, nonatomic) BOOL hasRedirectType; // @synthesize hasRedirectType;
@property(nonatomic, setter=SetNetType:) unsigned int netType; // @synthesize netType;
@property(readonly, nonatomic) BOOL hasNetType; // @synthesize hasNetType;
@property(nonatomic, setter=SetUserAbility:) unsigned int userAbility; // @synthesize userAbility;
@property(readonly, nonatomic) BOOL hasUserAbility; // @synthesize hasUserAbility;
@property(nonatomic, setter=SetMemberId:) int memberId; // @synthesize memberId;
@property(readonly, nonatomic) BOOL hasMemberId; // @synthesize hasMemberId;
@property(nonatomic, setter=SetRoomkey:) long long roomkey; // @synthesize roomkey;
@property(readonly, nonatomic) BOOL hasRoomkey; // @synthesize hasRoomkey;
@property(nonatomic, setter=SetRoomid:) int roomid; // @synthesize roomid;
@property(readonly, nonatomic) BOOL hasRoomid; // @synthesize hasRoomid;
@property(retain, nonatomic, setter=SetGroupId:) NSString *groupId; // @synthesize groupId;
@property(readonly, nonatomic) BOOL hasGroupId; // @synthesize hasGroupId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
