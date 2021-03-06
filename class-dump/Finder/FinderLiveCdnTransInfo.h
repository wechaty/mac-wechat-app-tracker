//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class CdnTransInfo, NSString;

@interface FinderLiveCdnTransInfo : PBGeneratedMessage
{
    unsigned int hasCdnTransInfo:1;
    unsigned int hasBitRate:1;
    unsigned int hasCodingFormat:1;
    unsigned int bitRate;
    CdnTransInfo *cdnTransInfo;
    NSString *codingFormat;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetCodingFormat:) NSString *codingFormat; // @synthesize codingFormat;
@property(readonly, nonatomic) BOOL hasCodingFormat; // @synthesize hasCodingFormat;
@property(nonatomic, setter=SetBitRate:) unsigned int bitRate; // @synthesize bitRate;
@property(readonly, nonatomic) BOOL hasBitRate; // @synthesize hasBitRate;
@property(retain, nonatomic, setter=SetCdnTransInfo:) CdnTransInfo *cdnTransInfo; // @synthesize cdnTransInfo;
@property(readonly, nonatomic) BOOL hasCdnTransInfo; // @synthesize hasCdnTransInfo;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

