//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData;

@interface VOIPRUDPCmd : PBGeneratedMessage
{
    unsigned int hasCmdType:1;
    unsigned int hasCmdBuffer:1;
    int cmdType;
    NSData *cmdBuffer;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetCmdBuffer:) NSData *cmdBuffer; // @synthesize cmdBuffer;
@property(readonly, nonatomic) BOOL hasCmdBuffer; // @synthesize hasCmdBuffer;
@property(nonatomic, setter=SetCmdType:) int cmdType; // @synthesize cmdType;
@property(readonly, nonatomic) BOOL hasCmdType; // @synthesize hasCmdType;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

