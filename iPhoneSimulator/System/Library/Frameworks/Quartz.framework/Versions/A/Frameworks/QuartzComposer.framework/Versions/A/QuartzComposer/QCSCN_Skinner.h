/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class QCSCN_Geometry;

@interface QCSCN_Skinner : NSObject {

	_C3DSkinner* _skinner;
	_C3DScene* _sceneRef;

}

@property (nonatomic,retain) QCSCN_Geometry * skinGeometry; 
+(id)skinnerWithSkinnerRef:(_C3DSkinner*)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_C3DScene*)sceneRef;
-(id)skeleton;
-(char)setSkeleton:(id)arg1 ;
-(_C3DSkinner*)skinnerRef;
-(void)setSceneRef:(_C3DScene*)arg1 ;
-(id)initWithSkinnerRef:(_C3DSkinner*)arg1 ;
-(int)countOfJoints;
-(id)objectInJointsAtIndex:(unsigned long long)arg1 ;
-(QCSCN_Geometry *)skinGeometry;
-(void)setSkinGeometry:(QCSCN_Geometry *)arg1 ;
@end

