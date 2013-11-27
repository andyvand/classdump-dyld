/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TSCHMultiDataElementShapeLayer;
@class CALayer, TSCHMultiDataAnimatingFrameLayer;

@interface TSCHMultiDataChartRepElement : NSObject {

	CALayer<TSCHMultiDataElementShapeLayer>* mElementLayer;
	TSCHMultiDataAnimatingFrameLayer* mLabelLayer;
	BOOL mElementUndefined;

}

@property (nonatomic,readonly) CALayer<TSCHMultiDataElementShapeLayer> * elementLayer; 
@property (nonatomic,readonly) TSCHMultiDataAnimatingFrameLayer * labelLayer; 
@property (assign,nonatomic) BOOL elementUndefined; 
+(id)elementWithElementLayer:(id)arg1 ;
-(id)initWithElementLayer:(id)arg1 ;
-(void)addAnimationForKey:(id)arg1 values:(id)arg2 keyTimes:(id)arg3 toAnimationInfo:(id)arg4 ;
-(id)elementLayer;
-(BOOL)elementUndefined;
-(void)setElementUndefined:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setContentsScale:(float)arg1 ;
-(void)setOpacity:(float)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(id)labelLayer;
@end
