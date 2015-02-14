/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@interface IKImageEditWorldMapOld : NSView {

	CGImageRef _map;
	unsigned long long _mapWidth;
	unsigned long long _mapHeight;
	char _invalidGPSInfo;
	double _mappedLongitude;
	double _mappedLatitude;
	double _longitude;
	double _latitude;
	double _scale;

}
-(CGRect)scaleAndCenter:(CGRect)arg1 ;
-(void)calcPostions;
-(void)setLongitude:(double)arg1 latitude:(double)arg2 ;
-(void)setInvalidGPSInfo:(char)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

