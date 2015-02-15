/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/QuickTime Player.app/Contents/MacOS/QuickTime Player
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSInputStream.h>

@class NSInputStream, NSString;

@interface MGFileInputStream : NSInputStream {

	NSInputStream* _inputStream;
	NSString* _path;
	unsigned long long _bytesRead;
	unsigned long long _fileSize;

}

@property (readonly) float progress; 
@property (retain) NSInputStream * inputStream;               //@synthesize inputStream=_inputStream - In the implementation block
@property (copy) NSString * path;                             //@synthesize path=_path - In the implementation block
@property (assign) unsigned long long bytesRead;              //@synthesize bytesRead=_bytesRead - In the implementation block
@property (assign) unsigned long long fileSize;               //@synthesize fileSize=_fileSize - In the implementation block
-(void)setBytesRead:(unsigned long long)arg1 ;
-(unsigned long long)bytesRead;
-(NSInputStream *)inputStream;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(unsigned long long)streamStatus;
-(id)streamError;
-(id)initWithFileAtPath:(id)arg1 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(char)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(char)hasBytesAvailable;
-(void)setDelegate:(id)arg1 ;
-(NSString *)path;
-(id)delegate;
-(void)close;
-(void)setPath:(NSString *)arg1 ;
-(void)open;
-(float)progress;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(unsigned long long)fileSize;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)propertyForKey:(id)arg1 ;
@end
