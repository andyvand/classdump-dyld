/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSImage.h>

@class NSData;

@interface QCDataImage : NSImage {

	NSData* _data;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)initWithFile:(id)arg1 ;
-(id)imageData;
@end

