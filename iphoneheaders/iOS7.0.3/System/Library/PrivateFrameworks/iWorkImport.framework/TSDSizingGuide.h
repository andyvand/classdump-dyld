/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDAbstractGuide.h>

@class CALayer;

@interface TSDSizingGuide : TSDAbstractGuide {

	CGRect mAlignmentFrame;
	CALayer* mLayer;
	BOOL mIsHorizontal;

}
-(id)initWithType:(int)arg1 frame:(CGRect)arg2 ;
-(id)layerWithICC:(id)arg1 ;
-(id)description;
@end
