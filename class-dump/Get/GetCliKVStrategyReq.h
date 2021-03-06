//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData;

@interface GetCliKVStrategyReq : PBGeneratedMessage
{
    unsigned int hasGeneralVersion:1;
    unsigned int hasSpecialVersion:1;
    unsigned int hasWhiteOrBlackUinVersion:1;
    unsigned int hasRandomEncryKey:1;
    unsigned int hasKvgeneralVersion:1;
    unsigned int hasKvspecialVersion:1;
    unsigned int hasKvwhiteOrBlackUinVersion:1;
    unsigned int generalVersion;
    unsigned int specialVersion;
    unsigned int whiteOrBlackUinVersion;
    unsigned int kvgeneralVersion;
    unsigned int kvspecialVersion;
    unsigned int kvwhiteOrBlackUinVersion;
    NSData *randomEncryKey;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetKvwhiteOrBlackUinVersion:) unsigned int kvwhiteOrBlackUinVersion; // @synthesize kvwhiteOrBlackUinVersion;
@property(readonly, nonatomic) BOOL hasKvwhiteOrBlackUinVersion; // @synthesize hasKvwhiteOrBlackUinVersion;
@property(nonatomic, setter=SetKvspecialVersion:) unsigned int kvspecialVersion; // @synthesize kvspecialVersion;
@property(readonly, nonatomic) BOOL hasKvspecialVersion; // @synthesize hasKvspecialVersion;
@property(nonatomic, setter=SetKvgeneralVersion:) unsigned int kvgeneralVersion; // @synthesize kvgeneralVersion;
@property(readonly, nonatomic) BOOL hasKvgeneralVersion; // @synthesize hasKvgeneralVersion;
@property(retain, nonatomic, setter=SetRandomEncryKey:) NSData *randomEncryKey; // @synthesize randomEncryKey;
@property(readonly, nonatomic) BOOL hasRandomEncryKey; // @synthesize hasRandomEncryKey;
@property(nonatomic, setter=SetWhiteOrBlackUinVersion:) unsigned int whiteOrBlackUinVersion; // @synthesize whiteOrBlackUinVersion;
@property(readonly, nonatomic) BOOL hasWhiteOrBlackUinVersion; // @synthesize hasWhiteOrBlackUinVersion;
@property(nonatomic, setter=SetSpecialVersion:) unsigned int specialVersion; // @synthesize specialVersion;
@property(readonly, nonatomic) BOOL hasSpecialVersion; // @synthesize hasSpecialVersion;
@property(nonatomic, setter=SetGeneralVersion:) unsigned int generalVersion; // @synthesize generalVersion;
@property(readonly, nonatomic) BOOL hasGeneralVersion; // @synthesize hasGeneralVersion;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

