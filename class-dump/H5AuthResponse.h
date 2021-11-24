//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSData;

@interface H5AuthResponse : PBGeneratedMessage
{
    unsigned int hasBaseresponse:1;
    unsigned int hasH5Authtoken:1;
    unsigned int hasExpiredTime:1;
    unsigned int expiredTime;
    BaseResponse *baseresponse;
    NSData *h5Authtoken;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetExpiredTime:) unsigned int expiredTime; // @synthesize expiredTime;
@property(readonly, nonatomic) BOOL hasExpiredTime; // @synthesize hasExpiredTime;
@property(retain, nonatomic, setter=SetH5Authtoken:) NSData *h5Authtoken; // @synthesize h5Authtoken;
@property(readonly, nonatomic) BOOL hasH5Authtoken; // @synthesize hasH5Authtoken;
@property(retain, nonatomic, setter=SetBaseresponse:) BaseResponse *baseresponse; // @synthesize baseresponse;
@property(readonly, nonatomic) BOOL hasBaseresponse; // @synthesize hasBaseresponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

