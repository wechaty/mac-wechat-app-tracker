//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MMSnsFinderShareAttachInfo : NSObject <PBCoding>
{
    NSString *objectId;
    NSString *objectNonceId;
}

+ (void)initialize;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_objectId;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId;
- (id)toXMLV2;
- (id)toXML;
- (void)fromXML:(struct XmlReaderNode_t *)arg1;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

