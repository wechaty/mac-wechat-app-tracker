//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface CanvasInfo : PBGeneratedMessage
{
    unsigned int hasDataBuffer:1;
    NSString *dataBuffer;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetDataBuffer:) NSString *dataBuffer; // @synthesize dataBuffer;
@property(readonly, nonatomic) BOOL hasDataBuffer; // @synthesize hasDataBuffer;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

