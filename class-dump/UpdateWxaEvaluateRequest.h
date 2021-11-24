//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, UpdateWxaEvaluateRequest_EvaluateInfo;

@interface UpdateWxaEvaluateRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasUsername:1;
    unsigned int hasOperType:1;
    unsigned int hasEvaluateInfo:1;
    int operType;
    BaseRequest *baseRequest;
    NSString *username;
    UpdateWxaEvaluateRequest_EvaluateInfo *evaluateInfo;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetEvaluateInfo:) UpdateWxaEvaluateRequest_EvaluateInfo *evaluateInfo; // @synthesize evaluateInfo;
@property(readonly, nonatomic) BOOL hasEvaluateInfo; // @synthesize hasEvaluateInfo;
@property(nonatomic, setter=SetOperType:) int operType; // @synthesize operType;
@property(readonly, nonatomic) BOOL hasOperType; // @synthesize hasOperType;
@property(retain, nonatomic, setter=SetUsername:) NSString *username; // @synthesize username;
@property(readonly, nonatomic) BOOL hasUsername; // @synthesize hasUsername;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

