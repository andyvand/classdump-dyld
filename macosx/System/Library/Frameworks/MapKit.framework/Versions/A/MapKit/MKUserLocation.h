/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotation.h>

@class MKUserLocationInternal, CLLocation, CLHeading, NSString;

@interface MKUserLocation : NSObject <MKAnnotation> {

	MKUserLocationInternal* _internal;
	double _expectedCoordinateUpdateInterval;
	double _expectedHeadingUpdateInterval;

}

@property (assign,getter=isUpdating,nonatomic) char updating; 
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) CLHeading * heading; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) CGPoint coordinate; 
@property (nonatomic,readonly) double headingDegrees; 
@property (nonatomic,readonly) double accuracy; 
@property (nonatomic,retain) CLLocation * fixedLocation; 
@property (nonatomic,retain) CLLocation * predictedLocation; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) NSString * shortDescription; 
@property (assign,nonatomic) double expectedCoordinateUpdateInterval;              //@synthesize expectedCoordinateUpdateInterval=_expectedCoordinateUpdateInterval - In the implementation block
@property (assign,nonatomic) double expectedHeadingUpdateInterval;                 //@synthesize expectedHeadingUpdateInterval=_expectedHeadingUpdateInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setAnnotationClass:(Class)arg1 ;
+(id)keyPathsForValuesAffectingSubtitle;
+(id)title;
-(void)setExpectedCoordinateUpdateInterval:(double)arg1 ;
-(void)setUpdating:(char)arg1 ;
-(CLLocation *)fixedLocation;
-(void)setFixedLocation:(CLLocation *)arg1 ;
-(CLLocation *)predictedLocation;
-(void)setPredictedLocation:(CLLocation *)arg1 ;
-(void)_updateCoordinate;
-(void)setExpectedHeadingUpdateInterval:(double)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(CGPoint)coordinate;
-(void)setCoordinate:(CGPoint)arg1 ;
-(id)annotation;
-(double)accuracy;
-(double)headingDegrees;
-(double)expectedCoordinateUpdateInterval;
-(double)expectedHeadingUpdateInterval;
-(double)course;
-(CLHeading *)heading;
-(NSString *)shortDescription;
-(char)isEqualToLocation:(id)arg1 ;
-(void)setHeading:(CLHeading *)arg1 ;
-(void)setCourse:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(double)timestamp;
-(void)reset;
-(CLLocation *)location;
-(char)isUpdating;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end

