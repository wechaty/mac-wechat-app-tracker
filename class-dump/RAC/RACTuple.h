//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"

@class NSArray, RACSequence;

@interface RACTuple : NSObject <NSCoding, NSCopying, NSFastEnumeration>
{
    NSArray *_backingArray;
}

+ (id)tupleWithObjects:(id)arg1;
+ (id)tupleWithObjectsFromArray:(id)arg1 convertNullsToNils:(BOOL)arg2;
+ (id)tupleWithObjectsFromArray:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *backingArray; // @synthesize backingArray=_backingArray;
@property(readonly, nonatomic) id last;
@property(readonly, nonatomic) id fifth;
@property(readonly, nonatomic) id fourth;
@property(readonly, nonatomic) id third;
@property(readonly, nonatomic) id second;
@property(readonly, nonatomic) id first;
@property(readonly, nonatomic) unsigned long long count;
- (id)tupleByAddingObject:(id)arg1;
- (id)allObjects;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithBackingArray:(id)arg1;
- (id)init;
- (id)rac_description;
@property(readonly, copy, nonatomic) RACSequence *rac_sequence;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;

@end

