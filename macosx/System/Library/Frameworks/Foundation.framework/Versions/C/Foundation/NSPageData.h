/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class NSData, NSDate, NSString;

@interface NSPageData : NSData {

	NSData* data;
	NSDate* _originalFileModDate;
	NSString* _originalFilePath;

}
+(long long)_umask;
+(void)initialize;
-(id)initWithDataNoCopy:(id)arg1 ;
-(void)_setOriginalFileInfoFromFileAttributes:(id)arg1 ;
-(id)initWithContentsOfMappedFile:(id)arg1 withFileAttributes:(id)arg2 ;
-(id)_mappedFile;
-(unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(char)arg4 hardLinkPath:(id)arg5 ;
-(id)initFromSerializerStream:(id)arg1 length:(unsigned long long)arg2 ;
-(id)deserializer;
-(unsigned long long)writeFd:(long long)arg1 ;
-(unsigned long long)writeFile:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(const void*)bytes;
-(unsigned long long)length;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
@end

