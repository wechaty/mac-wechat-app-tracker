//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IJSVGCommand.h"

#import "IJSVGCommandProtocol-Protocol.h"

@class NSString;

@interface IJSVGCommandCurve : IJSVGCommand <IJSVGCommandProtocol>
{
}

+ (void)runWithParams:(double *)arg1 paramCount:(long long)arg2 command:(id)arg3 previousCommand:(id)arg4 type:(long long)arg5 path:(id)arg6;
+ (long long)requiredParameterCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

