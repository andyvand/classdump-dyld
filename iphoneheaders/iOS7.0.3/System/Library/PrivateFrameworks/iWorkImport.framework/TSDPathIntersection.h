/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDPathIntersection : NSObject {

	int mSegment;
	int mSegmentB;
	float mT;
	float mTB;
	CGPoint mPoint;

}

@property (nonatomic,readonly) int segment; 
@property (nonatomic,readonly) int segmentB; 
@property (nonatomic,readonly) float t; 
@property (nonatomic,readonly) float tB; 
@property (assign,nonatomic) CGPoint point; 
-(int)segment;
-(float)t;
-(id)initWithSegment:(int)arg1 atT:(float)arg2 onSegmentB:(int)arg3 atT:(float)arg4 atPoint:(CGPoint)arg5 ;
-(int)compareT:(id)arg1 ;
-(id)initWithSegment:(int)arg1 atT:(float)arg2 atPoint:(CGPoint)arg3 ;
-(int)compareSegmentAndT:(id)arg1 ;
-(int)segmentB;
-(float)tB;
-(id)description;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
@end
