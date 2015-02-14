/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/Versions/A/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FCRImage : NSObject {

	unsigned long long width;
	unsigned long long height;
	unsigned long long bytesPerRow;
	char* rawDataBuffer;
	char* alignedDataBuffer;
	char freeBufferWhenDone;

}

@property (assign) unsigned long long width; 
@property (assign) unsigned long long height; 
@property (assign) unsigned long long bytesPerRow; 
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 buffer:(char*)arg4 freeBufferWhenDone:(char)arg5 ;
-(char*)getAlignedImageData;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)bytesPerRow;
-(void)setWidth:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
@end

