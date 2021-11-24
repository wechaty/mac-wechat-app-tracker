//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface BlackBerryRegRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasPin:1;
    unsigned int hasPort:1;
    unsigned int port;
    BaseRequest *baseRequest;
    NSString *pin;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetPort:) unsigned int port; // @synthesize port;
@property(readonly, nonatomic) BOOL hasPort; // @synthesize hasPort;
@property(retain, nonatomic, setter=SetPin:) NSString *pin; // @synthesize pin;
@property(readonly, nonatomic) BOOL hasPin; // @synthesize hasPin;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

