//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

@interface VoipRedirectReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasRoomId:1;
    unsigned int hasRoomKey:1;
    unsigned int hasRoomMemberId:1;
    unsigned int hasRedirectOrientedFlg:1;
    unsigned int hasConnSampleCnt:1;
    unsigned int hasCurrentDuration:1;
    unsigned int hasNicCnt:1;
    unsigned int hasPreviousNetType:1;
    unsigned int hasCurrentNetType:1;
    int roomId;
    int roomMemberId;
    int redirectOrientedFlg;
    int connSampleCnt;
    int currentDuration;
    unsigned int nicCnt;
    unsigned int previousNetType;
    unsigned int currentNetType;
    BaseRequest *baseRequest;
    long long roomKey;
    NSMutableArray *mutableConnSampleListList;
    NSMutableArray *mutableNicSetList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetCurrentNetType:) unsigned int currentNetType; // @synthesize currentNetType;
@property(readonly, nonatomic) BOOL hasCurrentNetType; // @synthesize hasCurrentNetType;
@property(nonatomic, setter=SetPreviousNetType:) unsigned int previousNetType; // @synthesize previousNetType;
@property(readonly, nonatomic) BOOL hasPreviousNetType; // @synthesize hasPreviousNetType;
@property(retain, nonatomic) NSMutableArray *mutableNicSetList; // @synthesize mutableNicSetList;
@property(nonatomic, setter=SetNicCnt:) unsigned int nicCnt; // @synthesize nicCnt;
@property(readonly, nonatomic) BOOL hasNicCnt; // @synthesize hasNicCnt;
@property(nonatomic, setter=SetCurrentDuration:) int currentDuration; // @synthesize currentDuration;
@property(readonly, nonatomic) BOOL hasCurrentDuration; // @synthesize hasCurrentDuration;
@property(retain, nonatomic) NSMutableArray *mutableConnSampleListList; // @synthesize mutableConnSampleListList;
@property(nonatomic, setter=SetConnSampleCnt:) int connSampleCnt; // @synthesize connSampleCnt;
@property(readonly, nonatomic) BOOL hasConnSampleCnt; // @synthesize hasConnSampleCnt;
@property(nonatomic, setter=SetRedirectOrientedFlg:) int redirectOrientedFlg; // @synthesize redirectOrientedFlg;
@property(readonly, nonatomic) BOOL hasRedirectOrientedFlg; // @synthesize hasRedirectOrientedFlg;
@property(nonatomic, setter=SetRoomMemberId:) int roomMemberId; // @synthesize roomMemberId;
@property(readonly, nonatomic) BOOL hasRoomMemberId; // @synthesize hasRoomMemberId;
@property(nonatomic, setter=SetRoomKey:) long long roomKey; // @synthesize roomKey;
@property(readonly, nonatomic) BOOL hasRoomKey; // @synthesize hasRoomKey;
@property(nonatomic, setter=SetRoomId:) int roomId; // @synthesize roomId;
@property(readonly, nonatomic) BOOL hasRoomId; // @synthesize hasRoomId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addNicSet:(id)arg1;
- (void)addNicSetFromArray:(id)arg1;
- (void)addConnSampleList:(id)arg1;
- (void)addConnSampleListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *nicSet; // @dynamic nicSet;
- (id)nicSetList;
@property(retain, nonatomic) NSMutableArray *connSampleList; // @dynamic connSampleList;
- (id)connSampleListList;
- (id)init;

@end

