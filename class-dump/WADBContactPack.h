//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface WADBContactPack : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int uiLastUpdateAppVersionInfoTime;
    NSString *aliasName;
    NSString *nickName;
    NSString *fullPinYin;
    NSString *headHDImageURL;
    NSString *headImageURL;
    NSString *signature;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_uiLastUpdateAppVersionInfoTime;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_headImageURL;
+ (void)PBArrayAdd_headHDImageURL;
+ (void)PBArrayAdd_fullPinYin;
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_aliasName;
- (void).cxx_destruct;
@property(nonatomic) unsigned int uiLastUpdateAppVersionInfoTime; // @synthesize uiLastUpdateAppVersionInfoTime;
@property(retain, nonatomic) NSString *signature; // @synthesize signature;
@property(retain, nonatomic) NSString *headImageURL; // @synthesize headImageURL;
@property(retain, nonatomic) NSString *headHDImageURL; // @synthesize headHDImageURL;
@property(retain, nonatomic) NSString *fullPinYin; // @synthesize fullPinYin;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(retain, nonatomic) NSString *aliasName; // @synthesize aliasName;
- (id)archivedWCTValue;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

