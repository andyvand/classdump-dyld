/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <Foundation/NSFormatter.h>

@interface AVTimeFormatter : NSFormatter {

	long long _style;
	unsigned _fullWidth : 1;
	double _formatTemplate;

}

@property (assign) long long style; 
@property (assign) double formatTemplate; 
@property (getter=isFullWidth) char fullWidth; 
-(double)formatTemplate;
-(char)isFullWidth;
-(void)setFormatTemplate:(double)arg1 ;
-(void)setFullWidth:(char)arg1 ;
-(id)stringFromTimeInterval:(double)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
@end

