//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JSConsoleLog : NSObject
{
    unsigned int _jsLogLevel;
    NSString *_jsLogInfo;
}

+ (id)extractLogInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int jsLogLevel; // @synthesize jsLogLevel=_jsLogLevel;
@property(retain, nonatomic) NSString *jsLogInfo; // @synthesize jsLogInfo=_jsLogInfo;
- (id)init;

@end

