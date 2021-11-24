//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

@interface VoipInviteRemindReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasListCount:1;
    unsigned int hasInviteType:1;
    unsigned int listCount;
    unsigned int inviteType;
    BaseRequest *baseRequest;
    NSMutableArray *mutableToUserNameListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetInviteType:) unsigned int inviteType; // @synthesize inviteType;
@property(readonly, nonatomic) BOOL hasInviteType; // @synthesize hasInviteType;
@property(retain, nonatomic) NSMutableArray *mutableToUserNameListList; // @synthesize mutableToUserNameListList;
@property(nonatomic, setter=SetListCount:) unsigned int listCount; // @synthesize listCount;
@property(readonly, nonatomic) BOOL hasListCount; // @synthesize hasListCount;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addToUserNameList:(id)arg1;
- (void)addToUserNameListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *toUserNameList; // @dynamic toUserNameList;
- (id)toUserNameListList;
- (id)init;

@end

