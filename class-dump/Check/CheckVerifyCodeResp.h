//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface CheckVerifyCodeResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasStatus:1;
    unsigned int hasEncryptedData:1;
    unsigned int hasIv:1;
    int status;
    BaseResponse *baseResponse;
    NSString *encryptedData;
    NSString *iv;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetIv:) NSString *iv; // @synthesize iv;
@property(readonly, nonatomic) BOOL hasIv; // @synthesize hasIv;
@property(retain, nonatomic, setter=SetEncryptedData:) NSString *encryptedData; // @synthesize encryptedData;
@property(readonly, nonatomic) BOOL hasEncryptedData; // @synthesize hasEncryptedData;
@property(nonatomic, setter=SetStatus:) int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
