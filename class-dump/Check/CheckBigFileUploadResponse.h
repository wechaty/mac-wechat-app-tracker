//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface CheckBigFileUploadResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasSignature:1;
    unsigned int hasFakeuin:1;
    unsigned int hasFakeAeskey:1;
    unsigned int hasFakeSignature:1;
    unsigned int fakeuin;
    BaseResponse *baseResponse;
    NSString *signature;
    NSString *fakeAeskey;
    NSString *fakeSignature;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetFakeSignature:) NSString *fakeSignature; // @synthesize fakeSignature;
@property(readonly, nonatomic) BOOL hasFakeSignature; // @synthesize hasFakeSignature;
@property(retain, nonatomic, setter=SetFakeAeskey:) NSString *fakeAeskey; // @synthesize fakeAeskey;
@property(readonly, nonatomic) BOOL hasFakeAeskey; // @synthesize hasFakeAeskey;
@property(nonatomic, setter=SetFakeuin:) unsigned int fakeuin; // @synthesize fakeuin;
@property(readonly, nonatomic) BOOL hasFakeuin; // @synthesize hasFakeuin;
@property(retain, nonatomic, setter=SetSignature:) NSString *signature; // @synthesize signature;
@property(readonly, nonatomic) BOOL hasSignature; // @synthesize hasSignature;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

