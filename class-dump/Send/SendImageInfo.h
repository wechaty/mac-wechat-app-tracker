//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SendInfo.h"

#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface SendImageInfo : SendInfo <NSCopying>
{
    unsigned int _m_uiImageSource;
    unsigned int _m_uiThumbWidth;
    unsigned int _m_uiThumbHeight;
    unsigned int _m_uiOriginalWidth;
    unsigned int _m_uiOriginalHeight;
    NSURL *_m_nuImageSourceURL;
    NSString *_imgSourceUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *imgSourceUrl; // @synthesize imgSourceUrl=_imgSourceUrl;
@property(retain, nonatomic) NSURL *m_nuImageSourceURL; // @synthesize m_nuImageSourceURL=_m_nuImageSourceURL;
@property(nonatomic) unsigned int m_uiOriginalHeight; // @synthesize m_uiOriginalHeight=_m_uiOriginalHeight;
@property(nonatomic) unsigned int m_uiOriginalWidth; // @synthesize m_uiOriginalWidth=_m_uiOriginalWidth;
@property(nonatomic) unsigned int m_uiThumbHeight; // @synthesize m_uiThumbHeight=_m_uiThumbHeight;
@property(nonatomic) unsigned int m_uiThumbWidth; // @synthesize m_uiThumbWidth=_m_uiThumbWidth;
@property(nonatomic) unsigned int m_uiImageSource; // @synthesize m_uiImageSource=_m_uiImageSource;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

