//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface ShareCardResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRetInfoCount:1;
    unsigned int retInfoCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableRetInfoListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableRetInfoListList; // @synthesize mutableRetInfoListList;
@property(nonatomic, setter=SetRetInfoCount:) unsigned int retInfoCount; // @synthesize retInfoCount;
@property(readonly, nonatomic) BOOL hasRetInfoCount; // @synthesize hasRetInfoCount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addRetInfoList:(id)arg1;
- (void)addRetInfoListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *retInfoList; // @dynamic retInfoList;
- (id)retInfoListList;
- (id)init;

@end

