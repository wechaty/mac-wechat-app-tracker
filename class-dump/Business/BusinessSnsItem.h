//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface BusinessSnsItem : PBGeneratedMessage
{
    unsigned int hasId:1;
    unsigned long long id_;
    unsigned int hasObjectDesc:1;
    NSString *objectDesc;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetObjectDesc:) NSString *objectDesc; // @synthesize objectDesc;
@property(readonly, nonatomic) BOOL hasObjectDesc; // @synthesize hasObjectDesc;
@property(nonatomic, setter=SetId:) unsigned long long id; // @synthesize id=id_;
@property(readonly, nonatomic) BOOL hasId; // @synthesize hasId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

