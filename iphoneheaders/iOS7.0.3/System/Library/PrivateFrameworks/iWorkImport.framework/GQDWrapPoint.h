/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDDrawable;

@interface GQDWrapPoint : NSObject {

	CGPoint mPoint;
	float mDistance;
	GQDDrawable* mDrawable;
	int mFlowType;
	int mZIndex;

}
-(int)comparePoint:(id)arg1 ;
-(id)initWithX:(float)arg1 y:(float)arg2 flowType:(int)arg3 drawable:(id)arg4 ;
-(id).cxx_construct;
-(int)zIndex;
@end
