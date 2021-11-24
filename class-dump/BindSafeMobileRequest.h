//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface BindSafeMobileRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasMobile:1;
    unsigned int hasOpcode:1;
    int opcode;
    BaseRequest *baseRequest;
    NSString *mobile;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetOpcode:) int opcode; // @synthesize opcode;
@property(readonly, nonatomic) BOOL hasOpcode; // @synthesize hasOpcode;
@property(retain, nonatomic, setter=SetMobile:) NSString *mobile; // @synthesize mobile;
@property(readonly, nonatomic) BOOL hasMobile; // @synthesize hasMobile;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

