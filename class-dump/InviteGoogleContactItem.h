//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface InviteGoogleContactItem : PBGeneratedMessage
{
    unsigned int hasGoogleContactName:1;
    NSString *googleContactName;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetGoogleContactName:) NSString *googleContactName; // @synthesize googleContactName;
@property(readonly, nonatomic) BOOL hasGoogleContactName; // @synthesize hasGoogleContactName;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

