//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABaseRequest.h"

@class NSDictionary;

@interface WANavigateMiniProgramRequest : WABaseRequest
{
    NSDictionary *_param;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSDictionary *param; // @synthesize param=_param;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

