//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface GetContactLabelListResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasLabelCount:1;
    unsigned int labelCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableLabelPairListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableLabelPairListList; // @synthesize mutableLabelPairListList;
@property(nonatomic, setter=SetLabelCount:) unsigned int labelCount; // @synthesize labelCount;
@property(readonly, nonatomic) BOOL hasLabelCount; // @synthesize hasLabelCount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addLabelPairList:(id)arg1;
- (void)addLabelPairListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *labelPairList; // @dynamic labelPairList;
- (id)labelPairListList;
- (id)init;

@end

