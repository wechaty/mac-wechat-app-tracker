//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface BindCookie : PBGeneratedMessage
{
    unsigned int hasMobile:1;
    unsigned int hasVerifycode:1;
    unsigned int hasExpire:1;
    unsigned int expire;
    NSString *mobile;
    NSString *verifycode;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetExpire:) unsigned int expire; // @synthesize expire;
@property(readonly, nonatomic) BOOL hasExpire; // @synthesize hasExpire;
@property(retain, nonatomic, setter=SetVerifycode:) NSString *verifycode; // @synthesize verifycode;
@property(readonly, nonatomic) BOOL hasVerifycode; // @synthesize hasVerifycode;
@property(retain, nonatomic, setter=SetMobile:) NSString *mobile; // @synthesize mobile;
@property(readonly, nonatomic) BOOL hasMobile; // @synthesize hasMobile;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

