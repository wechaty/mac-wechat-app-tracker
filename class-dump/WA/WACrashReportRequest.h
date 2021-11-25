//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABaseRequest.h"

@class NSData, NSString, WAMiniProgramLaunchParam;

@interface WACrashReportRequest : WABaseRequest
{
    NSData *_reportData;
    NSString *_reportID;
    NSString *_displayName;
    WAMiniProgramLaunchParam *_launchParam;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) WAMiniProgramLaunchParam *launchParam; // @synthesize launchParam=_launchParam;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *reportID; // @synthesize reportID=_reportID;
@property(retain, nonatomic) NSData *reportData; // @synthesize reportData=_reportData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
