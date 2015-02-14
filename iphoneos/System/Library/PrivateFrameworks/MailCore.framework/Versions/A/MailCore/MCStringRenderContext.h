/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableString, MCJunkRecorder, NSSet;

@interface MCStringRenderContext : NSObject {

	NSMutableString* _buffer;
	char _updateBodyFlags;
	MCJunkRecorder* _junkRecorder;
	unsigned long long _imageCount;
	unsigned long long _characterCount;
	NSSet* _URLs;
	NSSet* _imageURLs;
	long long _mode;

}

@property (nonatomic,retain) NSSet * URLs;                                   //@synthesize URLs=_URLs - In the implementation block
@property (nonatomic,retain) NSSet * imageURLs;                              //@synthesize imageURLs=_imageURLs - In the implementation block
@property (assign,nonatomic) unsigned long long imageCount;                  //@synthesize imageCount=_imageCount - In the implementation block
@property (assign,nonatomic) unsigned long long characterCount;              //@synthesize characterCount=_characterCount - In the implementation block
@property (assign,nonatomic) char updateBodyFlags;                           //@synthesize updateBodyFlags=_updateBodyFlags - In the implementation block
@property (assign,nonatomic) long long mode;                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) MCJunkRecorder * junkRecorder;                  //@synthesize junkRecorder=_junkRecorder - In the implementation block
@property (nonatomic,readonly) NSMutableString * buffer;                     //@synthesize buffer=_buffer - In the implementation block
-(unsigned long long)imageCount;
-(unsigned long long)characterCount;
-(void)setUpdateBodyFlags:(char)arg1 ;
-(void)setJunkRecorder:(MCJunkRecorder *)arg1 ;
-(MCJunkRecorder *)junkRecorder;
-(NSSet *)imageURLs;
-(char)updateBodyFlags;
-(void)setImageURLs:(NSSet *)arg1 ;
-(void)setImageCount:(unsigned long long)arg1 ;
-(void)setURLs:(NSSet *)arg1 ;
-(void)setCharacterCount:(unsigned long long)arg1 ;
-(id)initForMode:(long long)arg1 ;
-(id)renderString;
-(NSMutableString *)buffer;
-(id)init;
-(long long)mode;
-(void)setMode:(long long)arg1 ;
-(NSSet *)URLs;
@end

