/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityInterface/SecurityInterface-Structs.h>
@class SFAnimatedLockButton, NSButton, SFAuthorization, NSDictionary;

@interface SFAuthorizationView_ivars : NSObject {

	SFAnimatedLockButton* _button;
	NSButton* _textButton;
	SCD_Struct_SF0* _authorizationRights;
	SFAuthorization* _authorization;
	id _delegate;
	int _currentState;
	char _authorized;
	double _timeInterval;
	unsigned _flags;
	char _initiallyLockedOrHidden;
	char _allowWrap;
	NSDictionary* _textAttributes;
	char _asyncOperation;
	dispatch_queue_sRef _interactiveHandlingQueue;

}
-(void)dealloc;
@end

