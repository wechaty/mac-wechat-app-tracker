//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface StyleKeyVal : PBGeneratedMessage
{
    unsigned int hasKey:1;
    unsigned int hasVal:1;
    unsigned int key;
    NSString *val;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetVal:) NSString *val; // @synthesize val;
@property(readonly, nonatomic) BOOL hasVal; // @synthesize hasVal;
@property(nonatomic, setter=SetKey:) unsigned int key; // @synthesize key;
@property(readonly, nonatomic) BOOL hasKey; // @synthesize hasKey;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

