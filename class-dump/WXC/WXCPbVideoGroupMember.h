//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WXCPbVideoGroupMember : PBGeneratedMessage
{
    unsigned int hasMemberId:1;
    unsigned int hasWxUserName:1;
    unsigned int hasUuid:1;
    unsigned int hasVideoStatus:1;
    unsigned int hasVideoScreenSharingStatus:1;
    unsigned int hasMemberRole:1;
    unsigned int memberId;
    unsigned int uuid;
    unsigned int videoStatus;
    unsigned int videoScreenSharingStatus;
    unsigned int memberRole;
    NSString *wxUserName;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetMemberRole:) unsigned int memberRole; // @synthesize memberRole;
@property(readonly, nonatomic) BOOL hasMemberRole; // @synthesize hasMemberRole;
@property(nonatomic, setter=SetVideoScreenSharingStatus:) unsigned int videoScreenSharingStatus; // @synthesize videoScreenSharingStatus;
@property(readonly, nonatomic) BOOL hasVideoScreenSharingStatus; // @synthesize hasVideoScreenSharingStatus;
@property(nonatomic, setter=SetVideoStatus:) unsigned int videoStatus; // @synthesize videoStatus;
@property(readonly, nonatomic) BOOL hasVideoStatus; // @synthesize hasVideoStatus;
@property(nonatomic, setter=SetUuid:) unsigned int uuid; // @synthesize uuid;
@property(readonly, nonatomic) BOOL hasUuid; // @synthesize hasUuid;
@property(retain, nonatomic, setter=SetWxUserName:) NSString *wxUserName; // @synthesize wxUserName;
@property(readonly, nonatomic) BOOL hasWxUserName; // @synthesize hasWxUserName;
@property(nonatomic, setter=SetMemberId:) unsigned int memberId; // @synthesize memberId;
@property(readonly, nonatomic) BOOL hasMemberId; // @synthesize hasMemberId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

