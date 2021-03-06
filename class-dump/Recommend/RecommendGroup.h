//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, SKBuiltinString_t;

@interface RecommendGroup : PBGeneratedMessage
{
    unsigned int hasGroupName:1;
    unsigned int hasMemCount:1;
    unsigned int memCount;
    SKBuiltinString_t *groupName;
    NSMutableArray *mutableMembersList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableMembersList; // @synthesize mutableMembersList;
@property(nonatomic, setter=SetMemCount:) unsigned int memCount; // @synthesize memCount;
@property(readonly, nonatomic) BOOL hasMemCount; // @synthesize hasMemCount;
@property(retain, nonatomic, setter=SetGroupName:) SKBuiltinString_t *groupName; // @synthesize groupName;
@property(readonly, nonatomic) BOOL hasGroupName; // @synthesize hasGroupName;
- (void)addMembers:(id)arg1;
- (void)addMembersFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *members; // @dynamic members;
- (id)membersList;
- (id)init;

@end

