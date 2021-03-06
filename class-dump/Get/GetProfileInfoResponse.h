//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, GetProfileInfoResponse_FeedBack, GetProfileInfoResponse_ServicePreInfo, GetProfileInfoResponse_WxaEvaluateBasicInfo, GetProfileInfoResponse_WxaEvaluateWordingList, GetProfileInfoResponse_WxaLikeList;

@interface GetProfileInfoResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasServicePreInfo:1;
    unsigned int hasEvaluateBasicInfo:1;
    unsigned int hasFriendLikeList:1;
    unsigned int hasFeedBack:1;
    unsigned int hasEvaluateWordingList:1;
    BaseResponse *baseResponse;
    GetProfileInfoResponse_ServicePreInfo *servicePreInfo;
    GetProfileInfoResponse_WxaEvaluateBasicInfo *evaluateBasicInfo;
    GetProfileInfoResponse_WxaLikeList *friendLikeList;
    GetProfileInfoResponse_FeedBack *feedBack;
    GetProfileInfoResponse_WxaEvaluateWordingList *evaluateWordingList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetEvaluateWordingList:) GetProfileInfoResponse_WxaEvaluateWordingList *evaluateWordingList; // @synthesize evaluateWordingList;
@property(readonly, nonatomic) BOOL hasEvaluateWordingList; // @synthesize hasEvaluateWordingList;
@property(retain, nonatomic, setter=SetFeedBack:) GetProfileInfoResponse_FeedBack *feedBack; // @synthesize feedBack;
@property(readonly, nonatomic) BOOL hasFeedBack; // @synthesize hasFeedBack;
@property(retain, nonatomic, setter=SetFriendLikeList:) GetProfileInfoResponse_WxaLikeList *friendLikeList; // @synthesize friendLikeList;
@property(readonly, nonatomic) BOOL hasFriendLikeList; // @synthesize hasFriendLikeList;
@property(retain, nonatomic, setter=SetEvaluateBasicInfo:) GetProfileInfoResponse_WxaEvaluateBasicInfo *evaluateBasicInfo; // @synthesize evaluateBasicInfo;
@property(readonly, nonatomic) BOOL hasEvaluateBasicInfo; // @synthesize hasEvaluateBasicInfo;
@property(retain, nonatomic, setter=SetServicePreInfo:) GetProfileInfoResponse_ServicePreInfo *servicePreInfo; // @synthesize servicePreInfo;
@property(readonly, nonatomic) BOOL hasServicePreInfo; // @synthesize hasServicePreInfo;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

