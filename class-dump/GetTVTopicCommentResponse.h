//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface GetTVTopicCommentResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasCount:1;
    unsigned int hasLastCommentId:1;
    unsigned int hasTotalCommentCount:1;
    unsigned int hasLeftCommentCount:1;
    unsigned int count;
    unsigned int lastCommentId;
    unsigned int totalCommentCount;
    unsigned int leftCommentCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetLeftCommentCount:) unsigned int leftCommentCount; // @synthesize leftCommentCount;
@property(readonly, nonatomic) BOOL hasLeftCommentCount; // @synthesize hasLeftCommentCount;
@property(nonatomic, setter=SetTotalCommentCount:) unsigned int totalCommentCount; // @synthesize totalCommentCount;
@property(readonly, nonatomic) BOOL hasTotalCommentCount; // @synthesize hasTotalCommentCount;
@property(nonatomic, setter=SetLastCommentId:) unsigned int lastCommentId; // @synthesize lastCommentId;
@property(readonly, nonatomic) BOOL hasLastCommentId; // @synthesize hasLastCommentId;
@property(retain, nonatomic) NSMutableArray *mutableListList; // @synthesize mutableListList;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addList:(id)arg1;
- (void)addListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *list; // @dynamic list;
- (id)listList;
- (id)init;

@end

