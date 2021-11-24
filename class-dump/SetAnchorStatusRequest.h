//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSData;

@interface SetAnchorStatusRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasLiveId:1;
    unsigned int hasAnchorStatusBuffer:1;
    BaseRequest *baseRequest;
    unsigned long long liveId;
    NSData *anchorStatusBuffer;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetAnchorStatusBuffer:) NSData *anchorStatusBuffer; // @synthesize anchorStatusBuffer;
@property(readonly, nonatomic) BOOL hasAnchorStatusBuffer; // @synthesize hasAnchorStatusBuffer;
@property(nonatomic, setter=SetLiveId:) unsigned long long liveId; // @synthesize liveId;
@property(readonly, nonatomic) BOOL hasLiveId; // @synthesize hasLiveId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

