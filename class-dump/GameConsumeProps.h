//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface GameConsumeProps : PBGeneratedMessage
{
    unsigned int hasPropsId:1;
    unsigned int hasConsumeCount:1;
    unsigned int propsId;
    int consumeCount;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetConsumeCount:) int consumeCount; // @synthesize consumeCount;
@property(readonly, nonatomic) BOOL hasConsumeCount; // @synthesize hasConsumeCount;
@property(nonatomic, setter=SetPropsId:) unsigned int propsId; // @synthesize propsId;
@property(readonly, nonatomic) BOOL hasPropsId; // @synthesize hasPropsId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

