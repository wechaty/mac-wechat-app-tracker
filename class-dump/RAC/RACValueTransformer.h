//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@interface RACValueTransformer : NSValueTransformer
{
    CDUnknownBlockType transformBlock;
}

+ (id)transformerWithBlock:(CDUnknownBlockType)arg1;
+ (BOOL)allowsReverseTransformation;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType transformBlock; // @synthesize transformBlock;
- (id)transformedValue:(id)arg1;

@end

