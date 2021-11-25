//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

@interface ConfAVMemberList : PBGeneratedMessage
{
    unsigned int hasImroomid:1;
    unsigned int hasRoomid:1;
    unsigned long long imroomid;
    unsigned long long roomid;
    NSMutableArray *mutableMemberListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableMemberListList; // @synthesize mutableMemberListList;
@property(nonatomic, setter=SetRoomid:) unsigned long long roomid; // @synthesize roomid;
@property(readonly, nonatomic) BOOL hasRoomid; // @synthesize hasRoomid;
@property(nonatomic, setter=SetImroomid:) unsigned long long imroomid; // @synthesize imroomid;
@property(readonly, nonatomic) BOOL hasImroomid; // @synthesize hasImroomid;
- (void)addMemberList:(id)arg1;
- (void)addMemberListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;
- (id)memberListList;
- (id)init;

@end
