/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLocalWindowWrappingRemoteWindow;

@interface NSRemoteResponderProxyObject : NSObject {

	SEL _action;
	NSLocalWindowWrappingRemoteWindow* _remoteWindow;
	char _respondsToValidateMenuItem;
	char _validateMenuItemAnswer;
	char _respondsToValidateUserInterfaceItem;
	char _validateUserInterfaceItemAnswer;

}

@property (assign) SEL action;                                                    //@synthesize action=_action - In the implementation block
@property (retain) NSLocalWindowWrappingRemoteWindow * remoteWindow;              //@synthesize remoteWindow=_remoteWindow - In the implementation block
@property (assign) char respondsToValidateMenuItem;                               //@synthesize respondsToValidateMenuItem=_respondsToValidateMenuItem - In the implementation block
@property (assign) char respondsToValidateUserInterfaceItem;                      //@synthesize respondsToValidateUserInterfaceItem=_respondsToValidateUserInterfaceItem - In the implementation block
@property (assign) char validateMenuItemAnswer;                                   //@synthesize validateMenuItemAnswer=_validateMenuItemAnswer - In the implementation block
@property (assign) char validateUserInterfaceItemAnswer;                          //@synthesize validateUserInterfaceItemAnswer=_validateUserInterfaceItemAnswer - In the implementation block
-(char)validateUserInterfaceItemAnswer;
-(char)validateMenuItemAnswer;
-(char)_validateUserInterfaceItem:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setRemoteWindow:(NSLocalWindowWrappingRemoteWindow *)arg1 ;
-(NSLocalWindowWrappingRemoteWindow *)remoteWindow;
-(char)respondsToValidateMenuItem;
-(void)setRespondsToValidateMenuItem:(char)arg1 ;
-(char)respondsToValidateUserInterfaceItem;
-(void)setRespondsToValidateUserInterfaceItem:(char)arg1 ;
-(void)setValidateMenuItemAnswer:(char)arg1 ;
-(void)setValidateUserInterfaceItemAnswer:(char)arg1 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)setAction:(SEL)arg1 ;
-(SEL)action;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
@end

