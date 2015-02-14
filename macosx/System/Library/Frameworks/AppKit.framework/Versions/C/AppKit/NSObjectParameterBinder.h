/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBinder.h>

@class NSString, NSMutableDictionary;

@interface NSObjectParameterBinder : NSBinder {

	struct {
		unsigned _needsToRefreshOriginalValues : 1;
		unsigned _reservedObjectParameterBinder : 31;
	}  _objectParameterBinderFlags;
	NSString* _bindingValueBeingSet;
	NSMutableDictionary* _originalValues;

}
+(char)isUsableWithObject:(id)arg1 ;
+(id)objectMechanismsRequiredForObject:(id)arg1 ;
+(id)bindingsForObject:(id)arg1 ;
+(id)bindingCategory;
-(void)_init;
-(void)_connectionWasEstablished;
-(char)isBindingReadOnly:(id)arg1 ;
-(id)availableBindings;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(void)_dealloc;
-(char)canAddBinding:(id)arg1 toController:(id)arg2 ;
-(Class)valueClassForBinding:(id)arg1 ;
-(void)_updateObject:(id)arg1 observedController:(id)arg2 observedKeyPath:(id)arg3 context:(void*)arg4 ;
@end

