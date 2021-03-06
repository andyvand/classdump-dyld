/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMCommonCore.framework/Versions/A/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCommonCore/IMCommonCore-Structs.h>
#import <IMCommonCore/SFUInputStream.h>

@protocol SFUBufferedInputStream;
@class NSString;

@interface SFUZipInflateInputStream : NSObject <SFUInputStream> {

	z_stream_s* mStream;
	long long mOffset;
	id<SFUBufferedInputStream> mInput;
	char* mOutBuffer;
	unsigned long long mOutBufferSize;
	char mReachedEnd;
	char mIsFromZip;
	unsigned long long mCalculatedCrc;
	unsigned long long mCheckCrc;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2 ;
-(void)setupInflateStream;
-(id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 dataRepresentation:(id)arg5 ;
-(id)initWithInput:(id)arg1 ;
-(long long)totalCompressedBytesConsumed;
-(void)seekToOffset:(long long)arg1 ;
-(char)canSeek;
-(long long)offset;
-(void)dealloc;
-(void)close;
@end

