//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface SampleProduct : PBGeneratedMessage
{
    unsigned int hasPid:1;
    unsigned int hasSkuId:1;
    unsigned int hasCount:1;
    unsigned int hasSafeUrl:1;
    unsigned int count;
    NSString *pid;
    NSString *skuId;
    NSString *safeUrl;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetSafeUrl:) NSString *safeUrl; // @synthesize safeUrl;
@property(readonly, nonatomic) BOOL hasSafeUrl; // @synthesize hasSafeUrl;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(retain, nonatomic, setter=SetSkuId:) NSString *skuId; // @synthesize skuId;
@property(readonly, nonatomic) BOOL hasSkuId; // @synthesize hasSkuId;
@property(retain, nonatomic, setter=SetPid:) NSString *pid; // @synthesize pid;
@property(readonly, nonatomic) BOOL hasPid; // @synthesize hasPid;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

