//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ZipArchive : NSObject
{
    void *_zipFile;
    void *_unzFile;
    NSString *_password;
    id _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (id)Date1980;
- (BOOL)OverWrite:(id)arg1;
- (void)OutputErrorMessage:(id)arg1;
- (BOOL)UnzipCloseFile;
- (BOOL)UnzipFileTo:(id)arg1 overWrite:(BOOL)arg2;
- (BOOL)UnzipOpenFile:(id)arg1 Password:(id)arg2;
- (BOOL)UnzipOpenFile:(id)arg1;
- (BOOL)CloseZipFile2;
- (BOOL)addFileToZip:(id)arg1 newname:(id)arg2;
- (BOOL)addSingleFileToZip:(id)arg1 fileNameInZip:(id)arg2;
- (BOOL)CreateZipFile2:(id)arg1 Password:(id)arg2;
- (BOOL)CreateZipFile2:(id)arg1;
- (void)dealloc;
- (id)init;

@end
