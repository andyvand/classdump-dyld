/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface NVMapScaleSegment : NSObject {

	NSString* unit;
	double displayedLength;
	double lengthInMeters;

}

@property (nonatomic,retain) NSString * unit; 
@property (assign,nonatomic) double displayedLength; 
@property (assign,nonatomic) double lengthInMeters; 
-(void)setUnit:(NSString *)arg1 ;
-(double)displayedLength;
-(void)setDisplayedLength:(double)arg1 ;
-(double)lengthInMeters;
-(void)setLengthInMeters:(double)arg1 ;
-(NSString *)unit;
@end

