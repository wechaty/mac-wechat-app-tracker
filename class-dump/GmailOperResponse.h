//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface GmailOperResponse : PBGeneratedMessage
{
    unsigned int hasRetCode:1;
    unsigned int retCode;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetRetCode:) unsigned int retCode; // @synthesize retCode;
@property(readonly, nonatomic) BOOL hasRetCode; // @synthesize hasRetCode;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

