//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface MMOpenIMCustomDetail : NSObject <NSCopying>
{
    int _descType;
    int _action;
    NSString *_icon;
    NSString *_desc;
    NSDictionary *_action_param;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *action_param; // @synthesize action_param=_action_param;
@property(nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) int descType; // @synthesize descType=_descType;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;

@end

