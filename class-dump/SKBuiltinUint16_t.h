//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface SKBuiltinUint16_t : PBGeneratedMessage
{
    unsigned int hasUiVal:1;
    unsigned int uiVal;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetUiVal:) unsigned int uiVal; // @synthesize uiVal;
@property(readonly, nonatomic) BOOL hasUiVal; // @synthesize hasUiVal;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

