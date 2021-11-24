//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface RSACert : PBGeneratedMessage
{
    unsigned int hasKeyN:1;
    unsigned int hasKeyE:1;
    NSString *keyN;
    NSString *keyE;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetKeyE:) NSString *keyE; // @synthesize keyE;
@property(readonly, nonatomic) BOOL hasKeyE; // @synthesize hasKeyE;
@property(retain, nonatomic, setter=SetKeyN:) NSString *keyN; // @synthesize keyN;
@property(readonly, nonatomic) BOOL hasKeyN; // @synthesize hasKeyN;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

