//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData;

@interface HWParamBuffer : PBGeneratedMessage
{
    unsigned int hasHeaderLen:1;
    unsigned int hasSpsbuf:1;
    unsigned int hasPpsbuf:1;
    unsigned int hasVpsbuf:1;
    unsigned int headerLen;
    NSData *spsbuf;
    NSData *ppsbuf;
    NSData *vpsbuf;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetVpsbuf:) NSData *vpsbuf; // @synthesize vpsbuf;
@property(readonly, nonatomic) BOOL hasVpsbuf; // @synthesize hasVpsbuf;
@property(retain, nonatomic, setter=SetPpsbuf:) NSData *ppsbuf; // @synthesize ppsbuf;
@property(readonly, nonatomic) BOOL hasPpsbuf; // @synthesize hasPpsbuf;
@property(retain, nonatomic, setter=SetSpsbuf:) NSData *spsbuf; // @synthesize spsbuf;
@property(readonly, nonatomic) BOOL hasSpsbuf; // @synthesize hasSpsbuf;
@property(nonatomic, setter=SetHeaderLen:) unsigned int headerLen; // @synthesize headerLen;
@property(readonly, nonatomic) BOOL hasHeaderLen; // @synthesize hasHeaderLen;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

