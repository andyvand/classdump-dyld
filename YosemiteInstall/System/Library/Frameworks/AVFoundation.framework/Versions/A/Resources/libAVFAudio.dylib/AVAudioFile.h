/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Resources/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, AVAudioFormat;

@interface AVAudioFile : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) AVAudioFormat * fileFormat; 
@property (nonatomic,readonly) AVAudioFormat * processingFormat; 
@property (nonatomic,readonly) long long length; 
@property (assign,nonatomic) long long framePosition; 
-(id)initForReading:(id)arg1 commonFormat:(unsigned long long)arg2 interleaved:(char)arg3 error:(id*)arg4 ;
-(id)initForWriting:(id)arg1 settings:(id)arg2 commonFormat:(unsigned long long)arg3 interleaved:(char)arg4 error:(id*)arg5 ;
-(char)readIntoBuffer:(id)arg1 frameCount:(unsigned)arg2 error:(id*)arg3 ;
-(id)initForReading:(id)arg1 error:(id*)arg2 ;
-(id)initForWriting:(id)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(id)initSecondaryReader:(id)arg1 format:(id)arg2 error:(id*)arg3 ;
-(char)readIntoBuffer:(id)arg1 error:(id*)arg2 ;
-(char)writeFromBuffer:(id)arg1 error:(id*)arg2 ;
-(AVAudioFormat *)processingFormat;
-(long long)framePosition;
-(void)setFramePosition:(long long)arg1 ;
-(AVAudioFormat *)fileFormat;
-(void)dealloc;
-(NSURL *)url;
-(long long)length;
@end
