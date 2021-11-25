//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest;

@interface GetWxaUsageRecordRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasReason:1;
    unsigned int hasCondition:1;
    unsigned int hasMaxUpdatetime:1;
    unsigned int hasHistoryCount:1;
    unsigned int reason;
    unsigned int condition;
    unsigned int maxUpdatetime;
    unsigned int historyCount;
    BaseRequest *baseRequest;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetHistoryCount:) unsigned int historyCount; // @synthesize historyCount;
@property(readonly, nonatomic) BOOL hasHistoryCount; // @synthesize hasHistoryCount;
@property(nonatomic, setter=SetMaxUpdatetime:) unsigned int maxUpdatetime; // @synthesize maxUpdatetime;
@property(readonly, nonatomic) BOOL hasMaxUpdatetime; // @synthesize hasMaxUpdatetime;
@property(nonatomic, setter=SetCondition:) unsigned int condition; // @synthesize condition;
@property(readonly, nonatomic) BOOL hasCondition; // @synthesize hasCondition;
@property(nonatomic, setter=SetReason:) unsigned int reason; // @synthesize reason;
@property(readonly, nonatomic) BOOL hasReason; // @synthesize hasReason;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
