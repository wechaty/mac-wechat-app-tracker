//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface CheckFavItemRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasSourceType:1;
    unsigned int hasSourceId:1;
    unsigned int sourceType;
    BaseRequest *baseRequest;
    NSString *sourceId;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetSourceId:) NSString *sourceId; // @synthesize sourceId;
@property(readonly, nonatomic) BOOL hasSourceId; // @synthesize hasSourceId;
@property(nonatomic, setter=SetSourceType:) unsigned int sourceType; // @synthesize sourceType;
@property(readonly, nonatomic) BOOL hasSourceType; // @synthesize hasSourceType;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

