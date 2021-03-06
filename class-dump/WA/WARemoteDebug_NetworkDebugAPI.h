//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WARemoteDebug_NetworkDebugAPI : PBGeneratedMessage
{
    unsigned int hasApiName:1;
    unsigned int hasTaskId:1;
    unsigned int hasRequestHeaders:1;
    unsigned int hasTimestamp:1;
    NSString *apiName;
    NSString *taskId;
    NSString *requestHeaders;
    unsigned long long timestamp;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetTimestamp:) unsigned long long timestamp; // @synthesize timestamp;
@property(readonly, nonatomic) BOOL hasTimestamp; // @synthesize hasTimestamp;
@property(retain, nonatomic, setter=SetRequestHeaders:) NSString *requestHeaders; // @synthesize requestHeaders;
@property(readonly, nonatomic) BOOL hasRequestHeaders; // @synthesize hasRequestHeaders;
@property(retain, nonatomic, setter=SetTaskId:) NSString *taskId; // @synthesize taskId;
@property(readonly, nonatomic) BOOL hasTaskId; // @synthesize hasTaskId;
@property(retain, nonatomic, setter=SetApiName:) NSString *apiName; // @synthesize apiName;
@property(readonly, nonatomic) BOOL hasApiName; // @synthesize hasApiName;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

