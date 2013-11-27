/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartTouchHandler.h>

@interface TSCH3DChartRotationTouchHandler : TSCH3DChartTouchHandler {

	tvec3<float> mValue;
	tvec2<float> mDelta;
	tvec2<float> mOrigin;

}

@property (assign,nonatomic) tvec3<float> rotation; 
+(tvec3<float>)clampRotation:(tvec3<float>*)arg1 chartType:(id)arg2 ;
+(id)handlerWithRep:(id)arg1 rotation:(const tvec3<float>*)arg2 ;
-(id)initWithRep:(id)arg1 rotation:(const tvec3<float>*)arg2 ;
-(void)beginWithTouchPoint:(const TSCH3DTouchPoint*)arg1 ;
-(void)moveWithTouchPoint:(const TSCH3DTouchPoint*)arg1 ;
-(void)endWithTouchPoint:(const TSCH3DTouchPoint*)arg1 ;
-(tvec3<float>)clampRotation:(tvec3<float>*)arg1 ;
-(void)addRotation:(const tvec2<float>*)arg1 ;
-(void)sendCommand;
-(void)cancelWithTouchPoint:(const TSCH3DTouchPoint*)arg1 ;
-(void)setRotation:(tvec3<float>)arg1 ;
-(tvec3<float>)rotation;
-(id).cxx_construct;
-(BOOL)hasChanges;
@end
