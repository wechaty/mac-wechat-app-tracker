//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class DirectConnSet, NSMutableArray, RelayConnSet;

@interface VoipMultiRelayConnData : PBGeneratedMessage
{
    unsigned int hasRelayConnSet:1;
    unsigned int hasDirectConnSet:1;
    unsigned int hasActiveConnCnt:1;
    int activeConnIdSetMemoizedSerializedSize;
    unsigned int hasInactiveConnCnt:1;
    int inactiveConnIdSetMemoizedSerializedSize;
    unsigned int hasConnSetSeq:1;
    unsigned int hasRedirectConnSet:1;
    int activeConnCnt;
    int inactiveConnCnt;
    int connSetSeq;
    RelayConnSet *relayConnSet;
    DirectConnSet *directConnSet;
    NSMutableArray *mutableActiveConnIdSetList;
    NSMutableArray *mutableInactiveConnIdSetList;
    RelayConnSet *redirectConnSet;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetRedirectConnSet:) RelayConnSet *redirectConnSet; // @synthesize redirectConnSet;
@property(readonly, nonatomic) BOOL hasRedirectConnSet; // @synthesize hasRedirectConnSet;
@property(nonatomic, setter=SetConnSetSeq:) int connSetSeq; // @synthesize connSetSeq;
@property(readonly, nonatomic) BOOL hasConnSetSeq; // @synthesize hasConnSetSeq;
@property(retain, nonatomic) NSMutableArray *mutableInactiveConnIdSetList; // @synthesize mutableInactiveConnIdSetList;
@property(nonatomic, setter=SetInactiveConnCnt:) int inactiveConnCnt; // @synthesize inactiveConnCnt;
@property(readonly, nonatomic) BOOL hasInactiveConnCnt; // @synthesize hasInactiveConnCnt;
@property(retain, nonatomic) NSMutableArray *mutableActiveConnIdSetList; // @synthesize mutableActiveConnIdSetList;
@property(nonatomic, setter=SetActiveConnCnt:) int activeConnCnt; // @synthesize activeConnCnt;
@property(readonly, nonatomic) BOOL hasActiveConnCnt; // @synthesize hasActiveConnCnt;
@property(retain, nonatomic, setter=SetDirectConnSet:) DirectConnSet *directConnSet; // @synthesize directConnSet;
@property(readonly, nonatomic) BOOL hasDirectConnSet; // @synthesize hasDirectConnSet;
@property(retain, nonatomic, setter=SetRelayConnSet:) RelayConnSet *relayConnSet; // @synthesize relayConnSet;
@property(readonly, nonatomic) BOOL hasRelayConnSet; // @synthesize hasRelayConnSet;
- (void)addInactiveConnIdSetFromArray:(id)arg1;
- (void)addInactiveConnIdSet:(int)arg1;
- (void)addActiveConnIdSetFromArray:(id)arg1;
- (void)addActiveConnIdSet:(int)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *inactiveConnIdSet; // @dynamic inactiveConnIdSet;
- (id)inactiveConnIdSetList;
@property(retain, nonatomic) NSMutableArray *activeConnIdSet; // @dynamic activeConnIdSet;
- (id)activeConnIdSetList;
- (id)init;

@end
