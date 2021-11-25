//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface PacketSvrIDRequest : PBGeneratedMessage
{
    unsigned int hasBakChatName:1;
    NSMutableArray *mutableSvrIdList;
    NSMutableArray *mutableMediaIdList;
    NSMutableArray *mutableMd5List;
    NSString *bakChatName;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetBakChatName:) NSString *bakChatName; // @synthesize bakChatName;
@property(readonly, nonatomic) BOOL hasBakChatName; // @synthesize hasBakChatName;
@property(retain, nonatomic) NSMutableArray *mutableMd5List; // @synthesize mutableMd5List;
@property(retain, nonatomic) NSMutableArray *mutableMediaIdList; // @synthesize mutableMediaIdList;
@property(retain, nonatomic) NSMutableArray *mutableSvrIdList; // @synthesize mutableSvrIdList;
- (void)addMd5FromArray:(id)arg1;
- (void)addMd5:(id)arg1;
- (void)addMediaIdFromArray:(id)arg1;
- (void)addMediaId:(id)arg1;
- (void)addSvrIdFromArray:(id)arg1;
- (void)addSvrId:(unsigned long long)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *md5; // @dynamic md5;
- (id)md5List;
@property(retain, nonatomic) NSMutableArray *mediaId; // @dynamic mediaId;
- (id)mediaIdList;
@property(retain, nonatomic) NSMutableArray *svrId; // @dynamic svrId;
- (id)svrIdList;
- (id)init;

@end
