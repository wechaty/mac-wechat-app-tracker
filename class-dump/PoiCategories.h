//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface PoiCategories : PBGeneratedMessage
{
    unsigned int hasId:1;
    NSString *id_;
    unsigned int hasName:1;
    NSString *name;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetName:) NSString *name; // @synthesize name;
@property(readonly, nonatomic) BOOL hasName; // @synthesize hasName;
@property(retain, nonatomic, setter=SetId:) NSString *id; // @synthesize id=id_;
@property(readonly, nonatomic) BOOL hasId; // @synthesize hasId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

