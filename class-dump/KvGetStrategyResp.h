//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class StrategyTable;

@interface KvGetStrategyResp : PBGeneratedMessage
{
    unsigned int hasRet:1;
    unsigned int hasGenstgver:1;
    unsigned int hasClistgver:1;
    unsigned int hasUinstgver:1;
    unsigned int hasGenstgtable:1;
    unsigned int hasClistgtable:1;
    unsigned int hasUinstgtable:1;
    unsigned int hasDatavalidtime:1;
    unsigned int hasPollingtime:1;
    int ret;
    unsigned int genstgver;
    unsigned int clistgver;
    unsigned int uinstgver;
    unsigned int datavalidtime;
    unsigned int pollingtime;
    StrategyTable *genstgtable;
    StrategyTable *clistgtable;
    StrategyTable *uinstgtable;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetPollingtime:) unsigned int pollingtime; // @synthesize pollingtime;
@property(readonly, nonatomic) BOOL hasPollingtime; // @synthesize hasPollingtime;
@property(nonatomic, setter=SetDatavalidtime:) unsigned int datavalidtime; // @synthesize datavalidtime;
@property(readonly, nonatomic) BOOL hasDatavalidtime; // @synthesize hasDatavalidtime;
@property(retain, nonatomic, setter=SetUinstgtable:) StrategyTable *uinstgtable; // @synthesize uinstgtable;
@property(readonly, nonatomic) BOOL hasUinstgtable; // @synthesize hasUinstgtable;
@property(retain, nonatomic, setter=SetClistgtable:) StrategyTable *clistgtable; // @synthesize clistgtable;
@property(readonly, nonatomic) BOOL hasClistgtable; // @synthesize hasClistgtable;
@property(retain, nonatomic, setter=SetGenstgtable:) StrategyTable *genstgtable; // @synthesize genstgtable;
@property(readonly, nonatomic) BOOL hasGenstgtable; // @synthesize hasGenstgtable;
@property(nonatomic, setter=SetUinstgver:) unsigned int uinstgver; // @synthesize uinstgver;
@property(readonly, nonatomic) BOOL hasUinstgver; // @synthesize hasUinstgver;
@property(nonatomic, setter=SetClistgver:) unsigned int clistgver; // @synthesize clistgver;
@property(readonly, nonatomic) BOOL hasClistgver; // @synthesize hasClistgver;
@property(nonatomic, setter=SetGenstgver:) unsigned int genstgver; // @synthesize genstgver;
@property(readonly, nonatomic) BOOL hasGenstgver; // @synthesize hasGenstgver;
@property(nonatomic, setter=SetRet:) int ret; // @synthesize ret;
@property(readonly, nonatomic) BOOL hasRet; // @synthesize hasRet;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

