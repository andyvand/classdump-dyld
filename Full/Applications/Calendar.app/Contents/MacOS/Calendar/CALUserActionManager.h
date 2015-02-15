/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:23:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CALUserAction;

@interface CALUserActionManager : NSObject {

	CALUserAction* _currentAction;
	char _deactivating;
	char _activating;

}
-(char)activatingAction;
-(char)deactivatingAction;
-(id)currentActionWithClass:(Class)arg1 ;
-(void)setCurrentAction:(id)arg1 ;
-(char)endCurrentAction;
-(char)interruptCurrentAction;
-(id)currentAction;
-(id)init;
-(void)dealloc;
@end
