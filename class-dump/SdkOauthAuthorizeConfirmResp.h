//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface SdkOauthAuthorizeConfirmResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRedirectUrl:1;
    unsigned int hasWxToken:1;
    unsigned int hasUserConfirmRedirectUrl:1;
    unsigned int hasUserConfirmWording:1;
    BaseResponse *baseResponse;
    NSString *redirectUrl;
    NSString *wxToken;
    NSString *userConfirmRedirectUrl;
    NSString *userConfirmWording;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetUserConfirmWording:) NSString *userConfirmWording; // @synthesize userConfirmWording;
@property(readonly, nonatomic) BOOL hasUserConfirmWording; // @synthesize hasUserConfirmWording;
@property(retain, nonatomic, setter=SetUserConfirmRedirectUrl:) NSString *userConfirmRedirectUrl; // @synthesize userConfirmRedirectUrl;
@property(readonly, nonatomic) BOOL hasUserConfirmRedirectUrl; // @synthesize hasUserConfirmRedirectUrl;
@property(retain, nonatomic, setter=SetWxToken:) NSString *wxToken; // @synthesize wxToken;
@property(readonly, nonatomic) BOOL hasWxToken; // @synthesize hasWxToken;
@property(retain, nonatomic, setter=SetRedirectUrl:) NSString *redirectUrl; // @synthesize redirectUrl;
@property(readonly, nonatomic) BOOL hasRedirectUrl; // @synthesize hasRedirectUrl;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

