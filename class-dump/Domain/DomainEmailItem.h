//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class SKBuiltinString_t;

@interface DomainEmailItem : PBGeneratedMessage
{
    unsigned int hasStatus:1;
    unsigned int hasEmail:1;
    unsigned int status;
    SKBuiltinString_t *email;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetEmail:) SKBuiltinString_t *email; // @synthesize email;
@property(readonly, nonatomic) BOOL hasEmail; // @synthesize hasEmail;
@property(nonatomic, setter=SetStatus:) unsigned int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

