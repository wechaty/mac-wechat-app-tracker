//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMWebViewHelper : NSObject
{
}

+ (struct CGRect)getWindowFrameWithType:(unsigned long long)arg1;
+ (id)getUrlWithoutFontSize:(id)arg1;
+ (id)getMpFontSizeUrl:(id)arg1 fontSize:(int)arg2;
+ (int)getMpFontSizeFromUrl:(id)arg1;
+ (int)getMpFontSizeFromRealFontSize:(double)arg1;
+ (double)getNonmpRealFontSizeFromFontSize:(int)arg1;
+ (int)checkFontSize:(int)arg1;
+ (id)defaultBroswer;
+ (BOOL)hasWxWorkScheme:(id)arg1;
+ (BOOL)hasWeChatScheme:(id)arg1;
+ (BOOL)isAppScheme:(id)arg1;
+ (BOOL)isDownloadMIMEType:(id)arg1;
+ (void)playAsMuted:(id)arg1 windowId:(id)arg2;
+ (unsigned long long)getWindowTypeWithUrlStr:(id)arg1;
+ (void)handleWebViewDataItem:(id)arg1 windowId:(id)arg2;

@end
