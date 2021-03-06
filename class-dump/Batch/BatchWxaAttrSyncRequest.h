//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

@interface BatchWxaAttrSyncRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    BaseRequest *baseRequest;
    NSMutableArray *mutableReqInfoListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableReqInfoListList; // @synthesize mutableReqInfoListList;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addReqInfoList:(id)arg1;
- (void)addReqInfoListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *reqInfoList; // @dynamic reqInfoList;
- (id)reqInfoListList;
- (id)init;

@end

