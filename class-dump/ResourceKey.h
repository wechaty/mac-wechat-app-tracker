//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface ResourceKey : PBGeneratedMessage
{
    unsigned int hasKeyVersion:1;
    unsigned int hasResKey:1;
    unsigned int keyVersion;
    NSString *resKey;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetResKey:) NSString *resKey; // @synthesize resKey;
@property(readonly, nonatomic) BOOL hasResKey; // @synthesize hasResKey;
@property(nonatomic, setter=SetKeyVersion:) unsigned int keyVersion; // @synthesize keyVersion;
@property(readonly, nonatomic) BOOL hasKeyVersion; // @synthesize hasKeyVersion;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

