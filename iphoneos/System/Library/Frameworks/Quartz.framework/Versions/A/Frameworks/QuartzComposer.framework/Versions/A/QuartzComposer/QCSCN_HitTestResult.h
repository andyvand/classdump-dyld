/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class QCSCN_Node;

@interface QCSCN_HitTestResult : NSObject {

	id _reserved;

}

@property (nonatomic,readonly) QCSCN_Node * node; 
@property (nonatomic,readonly) long long geometryIndex; 
@property (nonatomic,readonly) long long faceIndex; 
@property (nonatomic,readonly) SCNVector3 localCoordinates; 
@property (nonatomic,readonly) SCNVector3 worldCoordinates; 
@property (nonatomic,readonly) SCNVector3 localNormal; 
@property (nonatomic,readonly) SCNVector3 worldNormal; 
@property (nonatomic,readonly) CATransform3D modelTransform; 
+(id)hitTestResultsFromHitTestResultRef:(CFArrayRef)arg1 ;
-(void)dealloc;
-(id)description;
-(QCSCN_Node *)node;
-(CGPoint)textureCoordinatesWithMappingChannel:(long long)arg1 ;
-(id)initWithResult:(C3DHitTestResultRef)arg1 ;
-(long long)geometryIndex;
-(long long)faceIndex;
-(SCNVector3)localCoordinates;
-(SCNVector3)worldCoordinates;
-(SCNVector3)localNormal;
-(SCNVector3)worldNormal;
-(CGPoint)textureCoordinate;
-(CATransform3D)modelTransform;
@end

