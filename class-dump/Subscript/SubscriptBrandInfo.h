//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface SubscriptBrandInfo : NSObject <PBCoding, WCTColumnCoding, NSCopying>
{
    unsigned int m_brandListCount;
    unsigned int m_brandListVersion;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (id)SubscriptedBrandsFromString:(id)arg1;
+ (id)SubscriptedBrandsFromXMLNode:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_brandListVersion;
+ (void)PBArrayAdd_m_brandListCount;
@property(nonatomic) unsigned int m_brandListVersion; // @synthesize m_brandListVersion;
@property(nonatomic) unsigned int m_brandListCount; // @synthesize m_brandListCount;
- (id)archivedWCTValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

