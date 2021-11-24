//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface GetRecommendWxaResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRemainCount:1;
    unsigned int hasSessionId:1;
    unsigned int remainCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableRecommendListList;
    unsigned long long sessionId;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetSessionId:) unsigned long long sessionId; // @synthesize sessionId;
@property(readonly, nonatomic) BOOL hasSessionId; // @synthesize hasSessionId;
@property(retain, nonatomic) NSMutableArray *mutableRecommendListList; // @synthesize mutableRecommendListList;
@property(nonatomic, setter=SetRemainCount:) unsigned int remainCount; // @synthesize remainCount;
@property(readonly, nonatomic) BOOL hasRemainCount; // @synthesize hasRemainCount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addRecommendList:(id)arg1;
- (void)addRecommendListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *recommendList; // @dynamic recommendList;
- (id)recommendListList;
- (id)init;

@end

