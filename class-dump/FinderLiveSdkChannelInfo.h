//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface FinderLiveSdkChannelInfo : PBGeneratedMessage
{
    unsigned int hasAudienceMode:1;
    unsigned int audienceMode;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetAudienceMode:) unsigned int audienceMode; // @synthesize audienceMode;
@property(readonly, nonatomic) BOOL hasAudienceMode; // @synthesize hasAudienceMode;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

