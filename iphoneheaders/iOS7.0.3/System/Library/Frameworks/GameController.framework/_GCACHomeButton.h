/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/_GCControllerButtonInput.h>

@protocol _GCACHomeButtonDelegate;
@class ;

@interface _GCACHomeButton : _GCControllerButtonInput {

	<_GCACHomeButtonDelegate>* _delegate;
	BOOL needsReset;

}
-(id)initWithDelegate:(id)arg1 ;
-(void).cxx_destruct;
-(BOOL)_setValue:(float)arg1 ;
@end
