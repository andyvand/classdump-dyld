/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLDownloadDecoder.h>

@class NSString;

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder> {

	z_stream_s* _stream;
	unsigned long long _modificationTime;
	NSString* _filename;
	char _streamInitialized;
	char _decodedHeader;
	char _finishedInflating;
	char _pad;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)MIMEType;
+(char)decodeDownloadHeader:(id)arg1 headerLength:(int*)arg2 modificationTime:(unsigned long long*)arg3 filename:(id*)arg4 ;
+(char)canDecodeDownloadHeaderData:(id)arg1 ;
-(id)filenameWithOriginalFilename:(id)arg1 ;
-(char)decodeDownloadData:(id)arg1 dataForkData:(id*)arg2 resourceForkData:(id*)arg3 ;
-(char)finishDownloadDecoding;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)fileAttributes;
-(id)decodeData:(id)arg1 ;
-(char)isFinishedDecoding;
@end

