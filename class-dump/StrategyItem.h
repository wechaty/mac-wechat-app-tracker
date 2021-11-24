//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface StrategyItem : PBGeneratedMessage
{
    unsigned int hasLogType:1;
    unsigned int hasEnalbe:1;
    unsigned int hasCycle:1;
    unsigned int hasExtInfo:1;
    unsigned int logType;
    unsigned int enalbe;
    unsigned int cycle;
    NSString *extInfo;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetExtInfo:) NSString *extInfo; // @synthesize extInfo;
@property(readonly, nonatomic) BOOL hasExtInfo; // @synthesize hasExtInfo;
@property(nonatomic, setter=SetCycle:) unsigned int cycle; // @synthesize cycle;
@property(readonly, nonatomic) BOOL hasCycle; // @synthesize hasCycle;
@property(nonatomic, setter=SetEnalbe:) unsigned int enalbe; // @synthesize enalbe;
@property(readonly, nonatomic) BOOL hasEnalbe; // @synthesize hasEnalbe;
@property(nonatomic, setter=SetLogType:) unsigned int logType; // @synthesize logType;
@property(readonly, nonatomic) BOOL hasLogType; // @synthesize hasLogType;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

