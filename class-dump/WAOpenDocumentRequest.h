//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABaseRequest.h"

@class NSString;

@interface WAOpenDocumentRequest : WABaseRequest
{
    NSString *_filePath;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

