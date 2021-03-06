//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class OplogRet;

@interface OplogResponse : PBGeneratedMessage
{
    unsigned int hasRet:1;
    unsigned int hasOplogRet:1;
    int ret;
    OplogRet *oplogRet;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetOplogRet:) OplogRet *oplogRet; // @synthesize oplogRet;
@property(readonly, nonatomic) BOOL hasOplogRet; // @synthesize hasOplogRet;
@property(nonatomic, setter=SetRet:) int ret; // @synthesize ret;
@property(readonly, nonatomic) BOOL hasRet; // @synthesize hasRet;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

