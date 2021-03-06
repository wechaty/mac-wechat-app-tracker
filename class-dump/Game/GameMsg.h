//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface GameMsg : PBGeneratedMessage
{
    unsigned int hasMsgId:1;
    unsigned int hasStatus:1;
    unsigned int hasObject:1;
    unsigned int hasUpdateTime:1;
    unsigned int hasUpdateSeq:1;
    unsigned int msgId;
    unsigned int status;
    unsigned int updateTime;
    unsigned int updateSeq;
    NSString *object;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetUpdateSeq:) unsigned int updateSeq; // @synthesize updateSeq;
@property(readonly, nonatomic) BOOL hasUpdateSeq; // @synthesize hasUpdateSeq;
@property(nonatomic, setter=SetUpdateTime:) unsigned int updateTime; // @synthesize updateTime;
@property(readonly, nonatomic) BOOL hasUpdateTime; // @synthesize hasUpdateTime;
@property(retain, nonatomic, setter=SetObject:) NSString *object; // @synthesize object;
@property(readonly, nonatomic) BOOL hasObject; // @synthesize hasObject;
@property(nonatomic, setter=SetStatus:) unsigned int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(nonatomic, setter=SetMsgId:) unsigned int msgId; // @synthesize msgId;
@property(readonly, nonatomic) BOOL hasMsgId; // @synthesize hasMsgId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

