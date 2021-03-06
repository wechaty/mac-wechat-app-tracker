//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface LiveAnchorStatus : PBGeneratedMessage
{
    unsigned int hasTimeMs:1;
    unsigned int hasStatusFlag:1;
    unsigned long long timeMs;
    unsigned long long statusFlag;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetStatusFlag:) unsigned long long statusFlag; // @synthesize statusFlag;
@property(readonly, nonatomic) BOOL hasStatusFlag; // @synthesize hasStatusFlag;
@property(nonatomic, setter=SetTimeMs:) unsigned long long timeMs; // @synthesize timeMs;
@property(readonly, nonatomic) BOOL hasTimeMs; // @synthesize hasTimeMs;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

