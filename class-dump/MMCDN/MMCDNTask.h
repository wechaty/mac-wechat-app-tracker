//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FavoritesItemDataField, MessageData, NSString;

@interface MMCDNTask : NSObject
{
    BOOL _inSight;
    BOOL _inPreviewWindow;
    unsigned int _localID;
    int _fileType;
    MessageData *_message;
    FavoritesItemDataField *_favItemData;
    NSString *_chatName;
    FavoritesItemDataField *_recordMsgData;
    NSString *_clientMediaID;
    NSString *_destinationPath;
    NSString *_downloadTmpPath;
    NSString *_authKey;
    NSString *_urlString;
    NSString *_fileMD5;
    struct C2CDownloadRequest _request;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct C2CDownloadRequest request; // @synthesize request=_request;
@property(nonatomic) BOOL inPreviewWindow; // @synthesize inPreviewWindow=_inPreviewWindow;
@property(nonatomic) BOOL inSight; // @synthesize inSight=_inSight;
@property(retain, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) NSString *authKey; // @synthesize authKey=_authKey;
@property(nonatomic) int fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSString *downloadTmpPath; // @synthesize downloadTmpPath=_downloadTmpPath;
@property(retain, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(retain, nonatomic) NSString *clientMediaID; // @synthesize clientMediaID=_clientMediaID;
@property(retain, nonatomic) FavoritesItemDataField *recordMsgData; // @synthesize recordMsgData=_recordMsgData;
@property(nonatomic) unsigned int localID; // @synthesize localID=_localID;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) FavoritesItemDataField *favItemData; // @synthesize favItemData=_favItemData;
@property(retain, nonatomic) MessageData *message; // @synthesize message=_message;
- (id)description;
- (long long)compareTaskPriority:(id)arg1;
- (unsigned int)calcTaskPriority;

@end
