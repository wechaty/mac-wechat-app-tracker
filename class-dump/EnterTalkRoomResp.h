//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface EnterTalkRoomResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRoomId:1;
    unsigned int hasRoomKey:1;
    unsigned int hasMicSeq:1;
    unsigned int hasMemberNum:1;
    unsigned int hasMyRoomMemberId:1;
    unsigned int hasAddrCount:1;
    int roomId;
    int micSeq;
    int memberNum;
    int myRoomMemberId;
    int addrCount;
    BaseResponse *baseResponse;
    long long roomKey;
    NSMutableArray *mutableMemberListList;
    NSMutableArray *mutableAddrListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableAddrListList; // @synthesize mutableAddrListList;
@property(nonatomic, setter=SetAddrCount:) int addrCount; // @synthesize addrCount;
@property(readonly, nonatomic) BOOL hasAddrCount; // @synthesize hasAddrCount;
@property(nonatomic, setter=SetMyRoomMemberId:) int myRoomMemberId; // @synthesize myRoomMemberId;
@property(readonly, nonatomic) BOOL hasMyRoomMemberId; // @synthesize hasMyRoomMemberId;
@property(retain, nonatomic) NSMutableArray *mutableMemberListList; // @synthesize mutableMemberListList;
@property(nonatomic, setter=SetMemberNum:) int memberNum; // @synthesize memberNum;
@property(readonly, nonatomic) BOOL hasMemberNum; // @synthesize hasMemberNum;
@property(nonatomic, setter=SetMicSeq:) int micSeq; // @synthesize micSeq;
@property(readonly, nonatomic) BOOL hasMicSeq; // @synthesize hasMicSeq;
@property(nonatomic, setter=SetRoomKey:) long long roomKey; // @synthesize roomKey;
@property(readonly, nonatomic) BOOL hasRoomKey; // @synthesize hasRoomKey;
@property(nonatomic, setter=SetRoomId:) int roomId; // @synthesize roomId;
@property(readonly, nonatomic) BOOL hasRoomId; // @synthesize hasRoomId;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addAddrList:(id)arg1;
- (void)addAddrListFromArray:(id)arg1;
- (void)addMemberList:(id)arg1;
- (void)addMemberListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *addrList; // @dynamic addrList;
- (id)addrListList;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;
- (id)memberListList;
- (id)init;

@end

