/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBinder.h>

@class NSColor;

@interface NSTextColorBinder : NSBinder {

	NSColor* _originalColor;
	NSColor* _referenceBinderRequestedColor;
	struct {
		unsigned _referenceBinderDidRequestColor : 1;
		unsigned _reservedTextColorBinder : 31;
	}  _textColorBinderFlags;

}
+(id)objectMechanismsRequiredForObject:(id)arg1 ;
+(id)_pluginProtocol;
+(id)bindingsForObject:(id)arg1 ;
+(id)bindingCategory;
-(void)_init;
-(void)_connectionWasEstablished;
-(char)isBindingReadOnly:(id)arg1 ;
-(void)updateOutlineColumnDataCell:(id)arg1 forDisplayAtIndexPath:(id)arg2 ;
-(void)updateTableColumnDataCell:(id)arg1 forDisplayAtIndex:(unsigned long long)arg2 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(unsigned long long)_bindingAdaptorMethodsNeededMask;
-(void)_dealloc;
-(Class)valueClassForBinding:(id)arg1 ;
-(void)_clearDependenciesWithAllPeerBinders;
-(void)_synchronizeWithPeerBindersInArray:(id)arg1 ;
-(id)textColor;
-(id)textColorAtIndex:(unsigned long long)arg1 ;
-(id)textColorAtIndexPath:(id)arg1 ;
-(id)_textColorWithMode:(_NSKeyValueCodingControllerModeType)arg1 ;
-(id)_setTextColorInObject:(id)arg1 mode:(_NSKeyValueCodingControllerModeType)arg2 compareDirectly:(char)arg3 toTextColor:(id)arg4 ;
-(void)_showTextColorImmediatelyInObject:(id)arg1 mode:(_NSKeyValueCodingControllerModeType)arg2 ;
-(void)_requestTextColor:(id)arg1 ;
-(id)updateInvalidatedTextColor:(id)arg1 forObject:(id)arg2 ;
@end

