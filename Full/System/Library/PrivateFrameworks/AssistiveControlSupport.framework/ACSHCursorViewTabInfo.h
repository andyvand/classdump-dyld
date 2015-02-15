/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSImage;

@interface ACSHCursorViewTabInfo : NSObject {

	char _isSelected;
	char _isAvailable;
	NSImage* _image;
	unsigned long long _identifier;

}

@property (nonatomic,retain) NSImage * image;                            //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char isSelected;                            //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) char isAvailable;                           //@synthesize isAvailable=_isAvailable - In the implementation block
-(void)setIsAvailable:(char)arg1 ;
-(void)setIsSelected:(char)arg1 ;
-(char)isAvailable;
-(void)dealloc;
-(id)description;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(char)isSelected;
@end
