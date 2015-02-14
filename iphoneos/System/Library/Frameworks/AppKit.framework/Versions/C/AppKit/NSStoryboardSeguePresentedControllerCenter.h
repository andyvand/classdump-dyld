/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable;

@interface NSStoryboardSeguePresentedControllerCenter : NSObject {

	NSMapTable* _registeredControllers;

}

@property (retain) NSMapTable * registeredControllers;              //@synthesize registeredControllers=_registeredControllers - In the implementation block
+(id)defaultCenter;
-(id)init;
-(void)dealloc;
-(id)controllerWithIdentifier:(id)arg1 ;
-(NSMapTable *)registeredControllers;
-(void)registerController:(id)arg1 withOptions:(id)arg2 ;
-(void)unregisterControllerWithOptions:(id)arg1 ;
-(void)setRegisteredControllers:(NSMapTable *)arg1 ;
@end

