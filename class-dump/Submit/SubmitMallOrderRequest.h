//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, Snapshot;

@interface SubmitMallOrderRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasSnapshot:1;
    unsigned int hasPayAppid:1;
    BaseRequest *baseRequest;
    Snapshot *snapshot;
    NSString *payAppid;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetPayAppid:) NSString *payAppid; // @synthesize payAppid;
@property(readonly, nonatomic) BOOL hasPayAppid; // @synthesize hasPayAppid;
@property(retain, nonatomic, setter=SetSnapshot:) Snapshot *snapshot; // @synthesize snapshot;
@property(readonly, nonatomic) BOOL hasSnapshot; // @synthesize hasSnapshot;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

