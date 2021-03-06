//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

@interface BuiltinIPList : PBGeneratedMessage
{
    unsigned int hasLongConnectIpcount:1;
    unsigned int hasShortConnectIpcount:1;
    unsigned int hasSeq:1;
    unsigned int longConnectIpcount;
    unsigned int shortConnectIpcount;
    unsigned int seq;
    NSMutableArray *mutableLongConnectIplistList;
    NSMutableArray *mutableShortConnectIplistList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableShortConnectIplistList; // @synthesize mutableShortConnectIplistList;
@property(retain, nonatomic) NSMutableArray *mutableLongConnectIplistList; // @synthesize mutableLongConnectIplistList;
@property(nonatomic, setter=SetSeq:) unsigned int seq; // @synthesize seq;
@property(readonly, nonatomic) BOOL hasSeq; // @synthesize hasSeq;
@property(nonatomic, setter=SetShortConnectIpcount:) unsigned int shortConnectIpcount; // @synthesize shortConnectIpcount;
@property(readonly, nonatomic) BOOL hasShortConnectIpcount; // @synthesize hasShortConnectIpcount;
@property(nonatomic, setter=SetLongConnectIpcount:) unsigned int longConnectIpcount; // @synthesize longConnectIpcount;
@property(readonly, nonatomic) BOOL hasLongConnectIpcount; // @synthesize hasLongConnectIpcount;
- (void)addShortConnectIplist:(id)arg1;
- (void)addShortConnectIplistFromArray:(id)arg1;
- (void)addLongConnectIplist:(id)arg1;
- (void)addLongConnectIplistFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *shortConnectIplist; // @dynamic shortConnectIplist;
- (id)shortConnectIplistList;
@property(retain, nonatomic) NSMutableArray *longConnectIplist; // @dynamic longConnectIplist;
- (id)longConnectIplistList;
- (id)init;

@end

