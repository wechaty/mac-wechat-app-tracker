//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PushLoginInfo : NSObject
{
    unsigned int _flag;
    NSString *_userName;
    NSString *_password;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)description;

@end

