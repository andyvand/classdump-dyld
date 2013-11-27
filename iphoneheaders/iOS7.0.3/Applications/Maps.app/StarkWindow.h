/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>

@class StarkDisplayController;

@interface StarkWindow : UIWindow {

	StarkDisplayController* _owningStarkController;

}

@property (assign,nonatomic) StarkDisplayController * owningStarkController;              //@synthesize owningStarkController=_owningStarkController - In the implementation block
-(id)owningStarkController;
-(void)setOwningStarkController:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(BOOL)_isConstrainedByScreenJail;
-(BOOL)_isClippedByScreenJail;
@end
