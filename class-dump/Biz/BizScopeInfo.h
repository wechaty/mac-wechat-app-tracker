//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface BizScopeInfo : PBGeneratedMessage
{
    unsigned int hasScope:1;
    unsigned int hasScopeStatus:1;
    unsigned int hasScopeDesc:1;
    unsigned int hasApiCount:1;
    unsigned int scopeStatus;
    unsigned int apiCount;
    NSString *scope;
    NSString *scopeDesc;
    NSMutableArray *mutableApiListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableApiListList; // @synthesize mutableApiListList;
@property(nonatomic, setter=SetApiCount:) unsigned int apiCount; // @synthesize apiCount;
@property(readonly, nonatomic) BOOL hasApiCount; // @synthesize hasApiCount;
@property(retain, nonatomic, setter=SetScopeDesc:) NSString *scopeDesc; // @synthesize scopeDesc;
@property(readonly, nonatomic) BOOL hasScopeDesc; // @synthesize hasScopeDesc;
@property(nonatomic, setter=SetScopeStatus:) unsigned int scopeStatus; // @synthesize scopeStatus;
@property(readonly, nonatomic) BOOL hasScopeStatus; // @synthesize hasScopeStatus;
@property(retain, nonatomic, setter=SetScope:) NSString *scope; // @synthesize scope;
@property(readonly, nonatomic) BOOL hasScope; // @synthesize hasScope;
- (void)addApiList:(id)arg1;
- (void)addApiListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *apiList; // @dynamic apiList;
- (id)apiListList;
- (id)init;

@end

