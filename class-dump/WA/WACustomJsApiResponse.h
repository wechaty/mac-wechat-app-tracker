//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABaseResponse.h"

@class NSDictionary, NSString;

@interface WACustomJsApiResponse : WABaseResponse
{
    NSString *_errMsg;
    NSDictionary *_responseData;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
