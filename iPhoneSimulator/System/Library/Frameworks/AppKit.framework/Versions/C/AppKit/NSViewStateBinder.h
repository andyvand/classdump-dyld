/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:29 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBinder.h>

@interface NSViewStateBinder : NSBinder {

	struct {
		unsigned _ignoreUpdates : 1;
		unsigned _reservedViewStateBinder : 31;
	}  _viewStateBinderFlags;

}
+(char)isUsableWithObject:(id)arg1 ;
+(id)bindingCategory;
-(void)_init;
-(void)_connectionWasEstablished;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(void)_connectionWasBroken;
-(char)_setValue:(id*)arg1 forBinding:(id)arg2 errorFallbackMessage:(id)arg3 ;
-(void)_updateObject:(id)arg1 observedController:(id)arg2 observedKeyPath:(id)arg3 context:(void*)arg4 ;
@end

