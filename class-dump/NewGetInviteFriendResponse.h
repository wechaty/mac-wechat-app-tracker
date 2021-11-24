//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface NewGetInviteFriendResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasFriendCount:1;
    unsigned int hasGroupCount:1;
    unsigned int friendCount;
    unsigned int groupCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableFriendListList;
    NSMutableArray *mutableGroupListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableGroupListList; // @synthesize mutableGroupListList;
@property(nonatomic, setter=SetGroupCount:) unsigned int groupCount; // @synthesize groupCount;
@property(readonly, nonatomic) BOOL hasGroupCount; // @synthesize hasGroupCount;
@property(retain, nonatomic) NSMutableArray *mutableFriendListList; // @synthesize mutableFriendListList;
@property(nonatomic, setter=SetFriendCount:) unsigned int friendCount; // @synthesize friendCount;
@property(readonly, nonatomic) BOOL hasFriendCount; // @synthesize hasFriendCount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addGroupList:(id)arg1;
- (void)addGroupListFromArray:(id)arg1;
- (void)addFriendList:(id)arg1;
- (void)addFriendListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *groupList; // @dynamic groupList;
- (id)groupListList;
@property(retain, nonatomic) NSMutableArray *friendList; // @dynamic friendList;
- (id)friendListList;
- (id)init;

@end

