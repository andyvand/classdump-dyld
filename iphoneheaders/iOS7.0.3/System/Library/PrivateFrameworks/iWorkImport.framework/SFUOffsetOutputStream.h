/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/SFUOutputStream.h>

@protocol SFUOutputStream;
@class ;

@interface SFUOffsetOutputStream : NSObject <SFUOutputStream> {

	<SFUOutputStream>* mOutputStream;
	long long mInitialOffset;

}
-(void)dealloc;
-(long long)offset;
-(void)close;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long)arg2 ;
-(BOOL)canSeek;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(BOOL)canCreateInputStream;
-(id)inputStream;
-(id)initWithOutputStream:(id)arg1 ;
@end
