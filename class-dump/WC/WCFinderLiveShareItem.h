//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface WCFinderLiveShareItem : NSObject <NSCoding, NSCopying>
{
    int _finderLiveStatus;
    NSString *_finderLiveID;
    NSString *_finderUsername;
    NSString *_finderObjectID;
    NSString *_finderNonceID;
    NSString *_coverUrl;
    NSString *_nickname;
    NSString *_headUrl;
    NSString *_desc;
    NSString *_webUrl;
    NSString *_bizAvatar;
    NSString *_bizUsername;
    NSString *_bizNickname;
    NSString *_width;
    NSString *_height;
    NSString *_authIconUrl;
    NSString *_authIconType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *authIconType; // @synthesize authIconType=_authIconType;
@property(copy, nonatomic) NSString *authIconUrl; // @synthesize authIconUrl=_authIconUrl;
@property(copy, nonatomic) NSString *height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *width; // @synthesize width=_width;
@property(nonatomic) int finderLiveStatus; // @synthesize finderLiveStatus=_finderLiveStatus;
@property(copy, nonatomic) NSString *bizNickname; // @synthesize bizNickname=_bizNickname;
@property(copy, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
@property(copy, nonatomic) NSString *bizAvatar; // @synthesize bizAvatar=_bizAvatar;
@property(copy, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *finderNonceID; // @synthesize finderNonceID=_finderNonceID;
@property(copy, nonatomic) NSString *finderObjectID; // @synthesize finderObjectID=_finderObjectID;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSString *finderLiveID; // @synthesize finderLiveID=_finderLiveID;
- (id)toXML;
- (void)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

