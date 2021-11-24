//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface OrderDetailControlRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasActionCode:1;
    unsigned int hasTransId:1;
    unsigned int actionCode;
    BaseRequest *baseRequest;
    NSString *transId;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetTransId:) NSString *transId; // @synthesize transId;
@property(readonly, nonatomic) BOOL hasTransId; // @synthesize hasTransId;
@property(nonatomic, setter=SetActionCode:) unsigned int actionCode; // @synthesize actionCode;
@property(readonly, nonatomic) BOOL hasActionCode; // @synthesize hasActionCode;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

