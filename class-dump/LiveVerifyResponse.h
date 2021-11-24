//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface LiveVerifyResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasIsVerified:1;
    unsigned int isVerified_:1;
    unsigned int hasVerifyUrl:1;
    BaseResponse *baseResponse;
    NSString *verifyUrl;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetVerifyUrl:) NSString *verifyUrl; // @synthesize verifyUrl;
@property(readonly, nonatomic) BOOL hasVerifyUrl; // @synthesize hasVerifyUrl;
@property(readonly, nonatomic) BOOL hasIsVerified; // @synthesize hasIsVerified;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(nonatomic, setter=SetIsVerified:) BOOL isVerified; // @synthesize isVerified=isVerified_;
- (id)init;

@end

