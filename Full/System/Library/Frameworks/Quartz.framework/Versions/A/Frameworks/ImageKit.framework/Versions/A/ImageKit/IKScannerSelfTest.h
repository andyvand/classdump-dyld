/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IKScannerSelfTest : NSObject {

	NSString* _path;
	NSString* _fileFormat;
	long long _bitDepth;
	unsigned long long _pixelDataType;
	char _rotate;
	char _colorCorrect;
	char _didScan;

}

@property (copy) NSString * path;                                 //@synthesize path=_path - In the implementation block
@property (copy) NSString * fileFormat;                           //@synthesize fileFormat=_fileFormat - In the implementation block
@property (assign) long long bitDepth;                            //@synthesize bitDepth=_bitDepth - In the implementation block
@property (assign) unsigned long long pixelDataType;              //@synthesize pixelDataType=_pixelDataType - In the implementation block
@property (assign) char rotate;                                   //@synthesize rotate=_rotate - In the implementation block
@property (assign) char colorCorrect;                             //@synthesize colorCorrect=_colorCorrect - In the implementation block
@property (assign) char didScan;                                  //@synthesize didScan=_didScan - In the implementation block
-(id)documentName;
-(NSString *)fileFormat;
-(void)setFileFormat:(NSString *)arg1 ;
-(id)initWithFormat:(id)arg1 bitDepth:(long long)arg2 pixelDataType:(unsigned long long)arg3 rotate:(char)arg4 colorCorrect:(char)arg5 path:(id)arg6 ;
-(void)setBitDepth:(long long)arg1 ;
-(void)setPixelDataType:(unsigned long long)arg1 ;
-(void)setRotate:(char)arg1 ;
-(void)setColorCorrect:(char)arg1 ;
-(unsigned long long)pixelDataType;
-(char)rotate;
-(char)colorCorrect;
-(char)didScan;
-(void)setDidScan:(char)arg1 ;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(long long)bitDepth;
@end

