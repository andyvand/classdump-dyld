/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>
#import <MobileTimer/HandView.h>

@class NSArray;

@interface BitmapHandView : UIView <HandView> {

	NSArray* _partViews;
	NSArray* _partViewsMaintainingOrientation;

}
+(id)partInfoWithName:(id)arg1 offset:(CGPoint)arg2 maintainsOrientation:(BOOL)arg3 ;
+(id)partInfoWithName:(id)arg1 ;
-(void)dealloc;
-(id)initWithImage:(id)arg1 rotationalCenter:(CGPoint)arg2 ;
-(id)initWithBundle:(id)arg1 resourcePath:(id)arg2 partInfoList:(id)arg3 rotationalCenter:(CGPoint)arg4 ;
@end
